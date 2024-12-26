#include<iostream>
using namespace std;
int main(){
    
    int i,arr[6],sum=0;
    for(i=0;i<6;i++){
        cin>>arr[i];
    }
       for(i=0;i<6;i++){
        
          sum=sum+arr[i];
        //    cout<<sum;
           
       
    }
      cout<<"sum of the array"<<sum;
}