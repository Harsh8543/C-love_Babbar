//REVERSE A STRING USING THE STACK
// but also as we know stack ki ek properties hoti hai ki ham usme jo bhi chiz
//pahle dalte hai wo sabse bad me milta hai jaise ki
//**** sadi me rakhe huyeee khana khane wale plate jo plate sabse pahle rakha gaya hoge wahi sabse lat me liya jayega khane ke liye
//  [LIFO]---->  LAST INPUT FIRST OUTPUT
#include<iostream>
#include<stack>

using namespace std;

int main(){
    string str="babbar";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
string ans="";
while(!s.empty()){
    char ch=s.top();
    ans.push_back(ch);
    s.pop();
}
cout<<"answer is:"<<ans<<endl;
    return 0;
}