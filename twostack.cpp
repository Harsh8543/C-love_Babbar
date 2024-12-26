#include<iostream>
using namespace std;
class TwoStack {
	int *arr;
    int top1;
    int top2;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        //atleast a empty space present
        if(top2 - top1 > 1 ) {  //es if ke andar likhi huee condition ka matlab hai ki atleast one empty space is available or not
            top1++;
            arr[top1] = num;
        } 
       
    }

    // Push in stack 2.
    void push2(int num) {
         if(top2 - top1 > 1 ) {  // condition is again same fir se stack 2 ke anadar element ko push back karne ke liye space available hai ki nahi
            top2--;
            arr[top2] = num;
        } 
       
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
		if( top1 >= 0) {  // es condition se hamne ye pata kiya ki atleast one element present ho tabhi to ham pop karenge
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
		if( top2 < size) {    // es condition se hamne ye pata kiya ki atleast one element present ho tabhi to ham pop karenge
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }

};