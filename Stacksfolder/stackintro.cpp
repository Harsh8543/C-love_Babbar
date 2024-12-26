//properties of the stack is last input first output  (LIFO)



#include<iostream>
#include<stack>
using namespace std;

class Stack {
    //properties
    public:
        int *arr;
        int top;    //TAKI HAM TRACK KAR SAKE KI SPACE AVAILABLE HAI KI NAHI STACK KE ANADAR
        int size;   //SIZE ESLIYE TAKI KI HAME PATA BHI TO HO KI HAMNE KAB STACK KO PURA FILL KAR LIYA HAI TAKI HAMAMARA STACK OVERFLOW NA KARE

    // behaviour
    // creation of the constructor
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push( int element) {
        if(size - top > 1) {      // es condition ka matlab hai ki agar size minus top ki value agar greater then 1 hoga matlab ki space available hai
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if(top >=0 ) {   //check atleast ek element to present hona chahiye            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {    // matlab ki ham top element dekhana chahate hai upar se
        if(top >=0 )
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if( top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

};


int main() {


    Stack st(5);    //creation of the stack whose name is st and size is 5

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }


    return 0;
}

    // ********************   STACK USING STL  **********************


    /*
    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }

    cout << "size of stack is " << s.size() << endl;

    */