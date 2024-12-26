#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    // length nikali
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // uske bad array creat kar li....
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    //copy the values of the first Array
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
//copy the value of the second Array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    //by applying the concept of the merge two sorted array
    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete[]second;
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // left part sort karana hai
    mergeSort(arr, s, mid);
    // right part wale ko sort karana hi
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}
int midofSortedarray(int *arr,int s,int e){
     int mid = (s + e) / 2;
 cout<<"midof sorted "<< mid;
   
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
       
    }
    midofSortedarray(arr,0,n-1);
    cout<<endl;
    
    return 0;
}