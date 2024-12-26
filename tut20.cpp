
// OOPs - Classes and object
// C++  ---->initially called ---> c with calsses by stroustroup

// structures had limitations

// ---> member are public
// -->No methods
// classes-->Structure+move_iteratorclasses--->can have methods and properties
// classes -->can make few members  public & private
// structure in c++ are typefed
// you can declare the oblects with the classes declaration
// class Employee{
// classs definition
// } harry,rohan,lavish

// harry.salary=8 -->makes no sense if the salary is to be private

  // NESTING OF THE MEMBER FUNCTION

#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
        // void chk_bin(void);  --> agar void chk_bin(void) ko hame private kar denge to ham use use nahi kar payenge kyuki wah parivate ho gaya hai
        //private hone par es class me jo methods hai wahi use kar sakte hai use bahar se call nahi kiya ja sakta kyuki private ahi
public:
//first we declare the function in the class so,we can after we can call them to perform the action
//public jo hai unhe fir se call kregi en declare variables ko
    void read(void);  // it read the data
    void chk_bin(void);  // it check the input number is the binary number or not
    void ones_compliment(void);  //it compliment the number convert the number from 0 to 1 and 1 to 0
    void Display(void); //it display the output of the given number
};
 //first we call the read function to read the given number
void binary ::read(void)
{
    cout << "enter a binary number\n";
    // we take the input in the s
   // hamne s ke andar input le liya kuki s hame uplabath tha kyuki s binary class ka ek private member tha.
  // s private kyu tha kyuki class ke andar by default d=sab kuchh private hita hai
    cin >> s;
}
//then we use the chk_bin function so, we can  check the given number is binary or not
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary formate" << endl;
            exit(0);
        }
    }
}
// it gets compliment the digits from 0 to 1 and 1 to 0
void binary::ones_compliment(void)
{
            // chk_bin(); ---> yaha par ham function ke andar function ko use kar sakte hai.esko use karne se wah binary check kar lega compliment hone se pahle hi
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
//now finally it display the output of the given number
void binary::Display(void)
{
    cout << "display your binary number\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

  
    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.Display();
    return 0;
}


