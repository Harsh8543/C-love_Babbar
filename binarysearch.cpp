#include<iostream>
using namespace std;
int main()
{
int i,list[10]={1,2,3,4,5,6,7,8,9,10},beg=0,end,mid,search_key,flag=0;
// for(i=0;i<10;i++)
// {
//     printf("enter the no.\n");
//     scanf("%d",&list[i]);
// }
cout<<"enter the number which you want to search\n";
cin>>search_key;
end=10-1;
while(beg<=end)
{
    mid=(beg+end)/2;
    if (list[mid]==search_key)
    {
        cout<<"the number and the position"<<search_key,mid+1;
        flag=1;
        break;
    }
  else if(search_key<list[mid])
  {
    end=mid-1;
  }
  else{
    beg=mid+1;
  }

}
if(end<beg)
{
    cout<< "sorted number"<<search_key;
}
// getch ();
return 0;
}

//First and last position of an element in the sorted array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int search_key, list[] = {1, 2, 3, 3, 4, 5, 6}, mid, beg = 0, end, flag = 0, ans;

//     // cout << "enter the number which you want to search";
//     // cin >> search_key;
//     end=7-1;
//     while (end <= beg)
//     {
//         mid = beg + end / 2;
//         if (list[mid] == search_key)
//         {
//             ans = list[mid];
//             end = mid - 1;
//         }
//         else if(search_key<list[mid]){
//             end=mid-1;
//         }
//         else if(list[mid]>search_key){
//             beg=mid+1;
//         }
//     }
//     return ans;
//     return 0;
// }

// #include<vector>
// using namespace std;
// int firstOcc(vector<int>& arr, int n, int key) {

//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(vector<int>& arr, int n, int key) {

//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> p;
//     p.first = firstOcc(arr, n, k);
//     p.second = lastOcc(arr, n, k);
    
//     return p;
// }






























































