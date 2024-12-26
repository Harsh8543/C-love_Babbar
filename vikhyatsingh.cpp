#include<iostream>
using namespace std;


int getPivot(int arr[],int n){
    int s = 0, e = n-1,mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid]>= arr[0]) s = mid + 1;
        else e= mid;
        mid = s + (e-s)/2;
    }
    return s;    
}


bool binarySearch(int arr[],int s,int e, int k){
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(arr[mid] == k ) return true;
        else if(arr[mid]>k) e = mid -1;
        else s = mid + 1;
        mid = s + (e-s)/2;
    }
    return false;    
}


int main(){
    int k,n;
    cin>>k>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int Pivot = getPivot(arr,n);
    if(k>=arr[Pivot] && k<=arr[n-1]){
        bool ans = binarySearch(arr,Pivot,n-1,k);
        if(ans) cout<<"Found in 2nd Part.";
        else cout<<"Not Found.";
    }
    else{
        bool ans = binarySearch(arr,0,Pivot,k);
        if(ans) cout<<"Found in 1st Part.";
        else cout<<"Not Found.";
    }
}