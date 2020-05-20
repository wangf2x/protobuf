#include <iostream>
#include <event2/event.h>
#include <event2/buffer.h>
#include <event2/bufferevent.h>
#include <event2/listener.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include "msg.pb.h"
#include <string>
using namespace std;
 
void read_cb(struct bufferevent *bev, void *ctx)
{
    char str[100];
    bzero(str, sizeof(str));
    bufferevent_read(bev, str, sizeof(str));
 
    Data::FinalMsg finalMsg;
    finalMsg.ParseFromString(str);
 
    cout << "read data: " << finalMsg.username() << endl;
 
}
 
void listen_cb(struct evconnlistener *, evutil_socket_t fd, struct sockaddr *, int, void *ptr)
{
    cout << "connected sucess..." << endl;
 
    event_base* base = (event_base*)ptr;
    bufferevent *bevent = bufferevent_socket_new(base, fd, BEV_OPT_CLOSE_ON_FREE);
    bufferevent_setcb(bevent, read_cb, nullptr, nullptr, nullptr);
 
    bufferevent_enable(bevent, EV_READ);
}
 
int main()
{
    sockaddr_in sockAddr;
    int len = sizeof(sockAddr);
    bzero(&sockAddr, len);
 
    sockAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_port = htons(12345);
 
    event_base *base = event_base_new();
    evconnlistener *listener = evconnlistener_new_bind(base,
                                                       listen_cb,
                                                       base,
                                                       LEV_OPT_CLOSE_ON_FREE | LEV_OPT_REUSEABLE,
                                                       -1,
                                                       (struct sockaddr*)&sockAddr,
                                                       len);
    event_base_dispatch(base);
    event_base_free(base);
    evconnlistener_free(listener);
 
    return 0;
}
