#include<iostream>
using namespace std;
int main(){
    int arr[4],i;
    for(i=0;i<4;i++){
       cin>> arr[i];
    }
    cout<<"print the reverse array"<<endl;
    for(i=3;i>=0;i--){
       cout<<arr[i];
    }
}