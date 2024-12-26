#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    // here we declare the two function inside the class setData function and getData function

    void setData(int a1,int b1,int c1);    //decleration-->this represent the below we call that function this is tell to the compiler.
    void getData(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
        cout<<"the value of d is"<<d<<endl;
        cout<<"the value of e is"<<e<<endl;

    }
};

void employee:: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}
int main(){
    employee harry;
    // harry.a=124;   //here a shows the error because a is in the private data
    
    harry.d=34;
    harry.e=89;
    harry.setData(1,2,4);  //here we assign the value of a,b,c 
    harry.getData();
    return 0;
}