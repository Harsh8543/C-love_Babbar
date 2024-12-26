#include <iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size of the array is"<< n <<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
}
int linearSearch(int arr[], int size, int n)
{
    print (arr,size);
    // base case
    if (size == 0)
        return false;
    if (arr[0] == n)
    {
        cout << "the element is found" << endl;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, n);
        return remainingPart;
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;
    int n;
    cout << "enter the number to search" << endl;
    cin >> n;
    bool ans = linearSearch(arr, size, n);
if(ans){
    cout<<"present"<<endl;
}
else{
    cout<<"absent"<<endl;
}

    return 0;
}