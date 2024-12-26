// //                 function overloading

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello love babbar"<<endl;
//     }
//     int sayHello(char name){
//         cout<<"Hello love babbar"<<endl;
//         return 1;
//     }
//     void syHello(string name){
//         cout<<"Hello"<<endl;
//     }
// };
// int main(){
//     A obj;
//     obj.sayHello();
//     return 0;
// }


// function overloading with different number of the arguments
//function overloading with different types of the arguments
//Default argument


//                  Operator overloading

// operator loading me mai operator ka use kar ke mai apana kuchh kam karwana chahata hu 
// jaise ki mai bolu ki + operator ka use karne par wah hame hello harsh likh kar de
// ek aur example jaise ki + operator ka use kar ke ham subtract kara le matlab ki operator ko ham apane tarike se kam kara le

// syntax of the operator overloading

// return_type opertor +(input){

// }
        


#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "Hello Love Babbar" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello Love Babbar" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {                  //operator overloading
/*        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
        */
       cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};
int main() {
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

   obj1 + obj2;
    obj1();
    A obj;
    obj.sayHello();
return 0;
}

             // Run time polymorphism


 #include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "Hello Love Babbar" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello Love Babbar" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
/*        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
        */
       cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }


};



int main() {

    Dog obj;
    obj.speak();





/*
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();*/








/*
    A obj;
    obj.sayHello();
    */


    return 0;
}





