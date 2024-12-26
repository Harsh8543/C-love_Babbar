#include<iostream>
using namespace std;
int main(){
    // int num=5;
    // cout<<num<<endl;
    // // address of operator-&
    // cout<<"address of num is"<< &num<<endl;
    // int *ptr=&num;
    // cout<<"address is:"<<ptr<<endl;
    // cout<<"value is :"<<*ptr<<endl;
    // return 0;
    int num=5;
    int a=num;
    cout<<"a before"<<num<<endl;
    a++;
    cout<<"a after"<<num<<endl;

    int *p =&num;
    cout<<"before"<<num<<endl;
    (*p)++;
    cout<<"after"<<num<<endl;
    //copying a pointer
    int *q = p;
    cout<<p<<" - "<< q <<endl;
    cout<<*p<<" - "<< *q <<endl;
// importan concept
int i=3;
int *t=&i;
//cout<<(*t)++ << endl;
*t=*t +1;
cout<<*t<<endl;
cout<<"before t"<<t<<endl;
t=t+1;
cout<<"after t "<<t<<endl;
return 0;

}