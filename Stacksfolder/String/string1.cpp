#include<iostream>
using namespace std;
int main(){

    // char arr[]={'a','p','p','l','e'};
    // // cout<<arr;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i];
    // }


    // char arr[5];
    // cin>>arr;
    // arr[2]='\0';
    // cout<<arr;


    // string s="Harsh";
    // cout<<s;

    // string s;
    // // cin>>s;
    // getline(cin,s); //for printing the full line
    // cout<<s;


// string s="Rohit";
// cout<<s.size()<<endl;


// string s1="Rohit";
// string s2="Harsh";
// string s3=s1+s2;
// string s3=s1.append(s2);
// cout<<s3;

// s1.push_back('p');
// s1=s1+"p";
// cout<<s1;


// string s1="Harsh is a \"good\" boy";
// cout<<s1;


//reverse the string
string s="harsh";
int start=0, end=s.size()-1;
while(start<end){
    swap(s[start],s[end]);
    start++;
    end--;
}
cout<<s;

//size of the string
int size=0;
while(s[size]!='\0'){
    size++;
}
cout<<endl;
cout<<size<<" "<<endl;


//Palindrome
string s2="naman";
start=0, end=s2.size()-1;
while(start<end){
    if(s2[start]!=s2[end]){
        cout<<"Not the palindrome";
        return 0;
    }
    start++,end--;
}
cout<<"palindrome"<<endl;

}