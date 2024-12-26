#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i,int j){
//base case
if(i>j)
return true ;
//bas ek case ko solve kar do.....baki ka recursion sambhal lega
if(str[i]!=str[j])
return false;
else{
    //recursion call
    return checkPalindrome(str,i+1,j-1);
}
}
int main(){
    string name="abbccbba";
    cout<<endl;
    bool isPalindrome=checkPalindrome(name, 0 ,name.length()-1);
    if(isPalindrome){
        cout<<"its palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrome"<<endl;
    }
    return 0;
}