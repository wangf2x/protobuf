#include <iostream>
using namespace std;
int main()
{
char array[8];
cin.ignore(6,'\n');
cin.getline(array,8);
cout<<array<<endl;
return 0;
}
