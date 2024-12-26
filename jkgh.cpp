// // #include <iostream>

// // using namespace std;

// // void number_to_word(int n) {
// //     if (n == 1) {
// //         cout << "one" << endl;
// //     } else if (n == 2) {
// //         cout << "two" << endl;
// //     } else if (n == 3) {
// //         cout << "three" << endl;
// //     } else if (n == 4) {
// //         cout << "four" << endl;
// //     } else if (n == 5) {
// //         cout << "five" << endl;
// //     } else if (n == 6) {
// //         cout << "six" << endl;
// //     } else if (n == 7) {
// //         cout << "seven" << endl;
// //     } else if (n == 8) {
// //         cout << "eight" << endl;
// //     } else if (n == 9) {
// //         cout << "nine" << endl;
// //     } else {
// //         cout << "Greater than 9" << endl;
// //     }
// // }

// // int main() {
// //     int n;
    
// //     // Input
// //     cin >> n;
    
// //     // Output the result
// //     number_to_word(n);
    
// //     return 0;
// // }
// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>
// #include<iostream>
// using namespace std;


// int main() {
// int i;
//  int n;
//     cin>>n;
//     int arr[n];
// // cout<<"enter the size of the array";
// // cin>>n;
// for(i=0;i<n;i++){
//     cin>>arr[i];
// }
// // for(i=0;i<n-1;i++){
// //     cout<<arr[i];
// // }
// // for(i=n-1;i<=n-1;i--){
// //     cout<<arr[i];
// // }
// // for(i=0;i<n;i++){
//     for(i=n;i>=0;i--){
//         // arr[i]==arr[j];
//          cout<<arr[i]<<endl; 
    
    
  
// }
 
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,k,count=1,num=1,arr1[n],arr2[n];
//     // cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     for(i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     for(j=0;j<n;j++){
//         cin>>arr2[j];
//     }
    
//     for(k=0;k<n;k++){
//         if(arr1[i]>arr2[j]){
//             return count;
//             count++;
            
//         }
//         else{
//             return num;
//             num++;
//         }
//     }
//     cout<<count;
//     cout<<num;
//      return 0;
// }
// #include <iostream>
// using namespace std;
// int max_of_four(int a,int b,int c,int d){
//     if(a>=b&&a>=c&&a>=d)
//         cout<<a<<endl;
    
//         else if(b>=a&&b>=c&&b>=d)
//           cout<<b<<endl; 
//           else if(c>=a&&c>=b&&c>=d)
//           cout<<c<<endl;
          
//             else {
//           cout<<d<<endl; 
//             }
//             // return max_of_four(a,b,c,d);
// }
// int main(){
//     int a,b,c,d;
//     cout<<"enter the number a";
//     cin>>a;
//     cout<<"enter the number b";
//     cin>>b;
//     cout<<"enter the number c";
//     cin>>c;
//     cout<<"enter the number d";
//     cin>>d;
// }
// #include<iostream>
// using namespace std;
// int main(){
    
//      int i,n, sum=0;
//      cout<<"enter the size of the array"<<endl;
//     cin>>n;
   
//     int arr[n];
   
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n,i,j,sum1,sum2,ram;
//     int arr[m][n];
//     cout<<"enter the size of the row";
//     cin>>m;
//     cout<<"enter the size of the column";
//     cin>>n;
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
    
//             cin>>arr[i][j];
//         }
//     }
//      for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             if(i==j){
//                 sum1=sum1+arr[i][j];
//             }
//         }
//     }
//         for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             if(i+j==n-1){
//                 sum2=sum2+arr[i][j];
//             }
//         }
//     }
//     ram=sum1-sum2;
//     cout<<ram;
// }
#include<iostream>
using namespace std;
int main(){
    int i,n,prop1,prop2,prop3;
    int arr[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            prop1=arr[i]/n;
        }
    }
       for(i=0;i<n;i++){
        if(arr[i]<0){
            prop2=arr[i]/n;
        }
    }
       for(i=0;i<n;i++){
        if(arr[i]==0){
            prop3=arr[i]/n;
        }
    }
    cout<<prop1;
    cout<<prop2;
    cout<<prop3;
}


// pattern


// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,k;
//     cin>>n;
//    for(i=1;i<=n;i++){
//         for(j=1;j>n-i;j++){
//             cout<<" ";
//         }
   
//    for(k=1;k<=i;k++){
//         cout<<"#"<<endl;
//    }
//    cout<<endl;
// }
// }