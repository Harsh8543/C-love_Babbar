#include <iostream>

using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int array[5] = {8, 10, 17, 1, 3};
    cout << "pivot index is " << getPivot(array, 5) << endl;
}

//**************** code by chat GPT ************************

// #include <iostream>
// #include <vector>

// int findPivot(std::vector<int>& arr) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         // If arr[mid] is the pivot element
//         if (mid > 0 && mid < arr.size() - 1) {
//             if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
//                 return mid;
//             }
//         }

//         // If arr[mid] is greater than its previous element, search on the right side
//         if (mid > 0 && arr[mid] < arr[mid - 1]) {
//             right = mid - 1;
//         } else { // Otherwise, search on the left side
//             left = mid + 1;
//         }
//     }

//     // If no pivot element is found
//     return -1;
// }

// int main() {
//     std::vector<int> arr = {3, 4, 5, 6, 7, 8, 1, 2}; // Example array
//     int pivotIndex = findPivot(arr);

//     if (pivotIndex != -1) {
//         std::cout << "Pivot element: " << arr[pivotIndex] << " at index " << pivotIndex << std::endl;
//     } else {
//         std::cout << "No pivot element found in the array." << std::endl;
//     }

//     return 0;
// }
