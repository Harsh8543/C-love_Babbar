#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
// this will not swap a and b
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
//this will swap a and b
// call by reference by using pointers
void swappointer(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//Call by reference by using the c++ reference Variables
void swapreferencevar(int&a,int&b){
    int temp=a;
    a=b;
    b=temp;
}


int main(){
    int x=4,y=5;
    // cout<<"the sum of 4 and 5 is"<<sum(a,b);
    cout<<"the value of x is "<<x<<"and the value of y is"<<y<<endl;
   // swap(x,y); //this will not swap a and b
     swappointer(&x,&y);
        cout<<"the value of x is "<<x<<"and the value of y is"<<y<<endl;
    return 0;
}