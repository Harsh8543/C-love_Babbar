
// ***********FUNCTION AND FUNCTION PROTOTYPE*********

#include<iostream>


using namespace std;


// FUNCTION PROTOTYPE
// Type function-name (arguments);.

int sum(int a, int b);

int main(){
    int num1,num2;
    cout<<"enter the first number\n";
    cin>>num1;
    cout<<"enter the second number\n";
    cin>>num2;
    // num1 and num2 are the actual parameter
    cout<<"the sum is"<<sum(num1,num2);
    return 0;

}
 int sum(int a,int b){
    // a and b taking the value from the actual paramater num1 and num2
     int c=a+b;
    return c;
    
 }







