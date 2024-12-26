#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(std::vector<int>& array){
    int s=0;
    int e= array.size()-1;
int mid =s+(e-s)/2;
while(s<e){
    // int mid =s+(e-s)/2;
    if (array[mid]<array[mid+1]){
        s=mid+1;
    }
        while(s<e){
            if(array[mid]<array[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
}




int main() {
    std::vector<int> array = {0, 1, 3, 5, 7, 6, 4, 2, 1}; // Example array
    int peakIndex = peakIndexInMountainArray(array);
    cout << "Peak index: " << peakIndex << std::endl;
    return 0;
}



//*******************by chat gpt this code is simple*****************



// #include <iostream>
// #include <vector>

// int peakIndexInMountainArray(std::vector<int>& arr) {
//     int left = 0;
//     int right = arr.size() - 1;
    
//     while (left < right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] < arr[mid + 1]) {
//             left = mid + 1;
//         } else {
//             right = mid;
//         }
//     }
    
//     // At this point, left == right, and it's the peak index
//     return left;
// }

// int main() {
//     std::vector<int> arr = {0, 1, 3, 5, 7, 6, 4, 2, 1}; // Example array
//     int peakIndex = peakIndexInMountainArray(arr);
//     std::cout << "Peak index: " << peakIndex << std::endl;
//     return 0;
// }
//This code uses a binary search algorithm to find the peak index efficiently in O(log n) time complexity, where n is the size of the array.








































