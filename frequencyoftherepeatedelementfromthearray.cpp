// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> arr = {5, 6, 8, 3, 6, 1, 6, 4, 5, 6, 5};
//     int maxFreq = 0;
//     for (int i=0;i<10;i++) {
//         int count= 1; 
//         for (int j = i + 1;j<10;j++) {
//             if (arr[i]==arr[j]) {
//                 count++; 
//             }
//         }
//         if (count>maxFreq) {
//             maxFreq=count;
//         }
//         cout << "Element " << arr[i] << "repeats" << count<< " times" << endl;
//     }
//     cout << "Maxfreq" << maxFreq << endl;
//     return 0;
// }



#include<iostream>

using namespace std;
int main(){
     int n, i = 0,count=0,temp,harsh=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"put the element jiski freq chahiye"<<endl;
cin>>temp;
for(i=0;i<n;i++){
    if(arr[i]==temp){
        count++;
        
      
    }
    // else{
    //     i++;
    // }
}
// cout<<harsh;
}