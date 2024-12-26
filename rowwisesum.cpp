// #include<iostream>
// using namespace std;

//     void rowwisesum (a[][3], int i,int j){
// // int rowwisesum (a[i][j]){
//     // int i=0;
//     // int j=0;

//     // int a[i][i], int i, int j, sum=0;

// cout<<"2d array element are";
//     for (i = 0; i < 3; i++)
//     {
//         cout<<" ";

//         for (j = 0; j < 3; j++)
//         {
//             cout<< a[i][j];
//         }
//     }
//       for (i = 0; i < 3; i++)
//     {
//         sum = 0;
//         for (j = 0; j < 3; j++)
//         {
//             sum = sum + a[i][j];
//             return  sum;

//         }
//     }

// }
// int main(){
//       int i,int j,sum=0,a[i][j];
//        for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout<<"\nenter the number for 2d array\n";
//             cin>>a[i][j];
//         }
//     }

// cout<<"sum"<<rowwisesum a[i][j];
// return 0;
// }

#include <iostream>
using namespace std;
bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
// to print row wise sum
void printSum(int arr[][3], int row, int col)
{
    cout << "printing sum->" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main()
{
    // creat 2d array
    int arr[3][3];
    cout << "enter the element" << endl;
    // taking input->row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "printing the array" << endl;
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "enter the element to search" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    printSum(arr,3,3);
    return 0;
}
