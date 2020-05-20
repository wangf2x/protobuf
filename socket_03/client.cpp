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
 
void event_cb(struct bufferevent *bev, short what, void *ctx)
{
    if (what & BEV_EVENT_CONNECTED)
    {
        cout << "connect server sucess..." << endl;
 
        //char* msg = "hello, i am client\n";
 
        Data::FinalMsg finalMsg;
        finalMsg.set_allocated_password(new string("abc"));
        finalMsg.set_allocated_username(new string("james"));
        auto vec = finalMsg.mutable_vector();
        vec->set_vx(1);
        vec->set_vy(2);
        vec->set_vz(3);
 
        auto pnt = finalMsg.mutable_point();
        pnt->set_px(1.1);
        pnt->set_py(2.1);
        pnt->set_pz(3.1);
 
        finalMsg.set_msgtype(Data::MsgType::Vec);
 
        string msg;
        finalMsg.SerializeToString(&msg);
 
        bufferevent_write(bev, msg.c_str(), msg.length());
    }
 
    bufferevent_free(bev);
}
 
int main()
{
    event_base *base = event_base_new();
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    bufferevent *bevent = bufferevent_socket_new(base, sock, BEV_OPT_CLOSE_ON_FREE);
 
    struct sockaddr_in addr;
    bzero(&addr, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr.sin_port = htons(12345);
 
    bufferevent_setcb(bevent, nullptr, nullptr, event_cb, nullptr);
 
    bufferevent_socket_connect(bevent, (struct sockaddr*)&addr, sizeof(addr));
    bufferevent_enable(bevent, EV_WRITE);
 
    event_base_dispatch(base);
    event_base_free(base);
 
    return 0;
}
 
