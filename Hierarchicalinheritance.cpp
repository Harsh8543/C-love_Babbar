// one class serve as Parent class for more than one class

#include<iostream>
using namespace std;
//hierarchical inheritance
class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"inside Function 2"<<endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout <<"inside function 2"<<endl;
    }
};
int main(){
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();   
     return 0;
}


















