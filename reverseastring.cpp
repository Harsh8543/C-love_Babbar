#include<iostream>
using namespace std;
void reverse (char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);

    }
}
int getLength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
     char name[20];
     cout<<"enter your name "<<endl;
     cin>>name;

     cout<<"your name is";
     cout<< name<<endl;
     int len = getLength(name);
     reverse (name , len);
     cout<<"your name is ";
     cout<<name<<endl;
    return 0;
}

// #include<string>
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:

//     void reverseString(vector<char>& s) {
//         int st=0;
//         int e = s.size()-1;

//         while(st<e) {
//             swap(s[st++], s[e--]);
//         }
//     }
// };