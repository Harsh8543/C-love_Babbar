// #include <iostream>
// #include <vector>

// using namespace std;

// void moveZeroes(vector<int>& nums) {
//     int n = nums.size();
//     int nonZeroIndex = 0;

//     // Traverse the array
//     for (int i = 0; i < n; ++i) {
//         // If current element is non-zero
//         if (nums[i] != 0) {
//             // Swap it with the first zero element encountered
//             swap(nums[i], nums[nonZeroIndex]);
//             // Move nonZeroIndex forward
//             nonZeroIndex++;
//         }
//     }
// }

// int main() {
//     vector<int> nums = {0, 1, 0, 3, 12};

//     cout << "Original Array: ";
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;

//     moveZeroes(nums);

//     cout << "After moving zeroes to the end: ";
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }


//vikhyat code

#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}