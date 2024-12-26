
// there are two types of header file

// 1. system header file-->it comes with the compiler.
#include<iostream>
// 2.user defined header file-->it is written by the programmer
// #include"this.h"-->this will produce an error if this.h is not present in the current directory
using namespace std;
int main(){

    cout<<"this is hello world program\n";
    return 0;
}