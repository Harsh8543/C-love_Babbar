#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age\n";
    cin>>age;

    // selection control structure if-else ladder

//     if(age<18){
//         cout<<"you can not join my party\n";

//     }
//     else if(age==18){
//         cout<<"you are the kid you can get the kid card to join the party\n";

//     }
//     else{
// cout<<"you can join the party";
//     }

// }
switch (age)
{
case 18:
    
    cout<<"you are 18";
    break;
case 22:
    
    cout<<"you are 22";
    break;
case 1:
    
    cout<<"you are 1";
    break;
case 12:
    
    cout<<"you are 12";
    break;

default:
    break;
}
return 0;
}