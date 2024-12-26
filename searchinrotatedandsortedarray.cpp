// **********SEARCH IN A ROTATED AND SORTED ARRAY***************


#include <iostream>
#include <vector>

using namespace std;

int searchRotatedArray(const vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return mid;

        // Left half is sorted
        if (nums[start] <= nums[mid]) {
            // Check if the target is within the sorted range
            if (nums[start] <= target && target < nums[mid])
                end = mid - 1; // Adjust search range to the left side
            else
                start = mid + 1; // Adjust search range to the right side
        } 
        // Right half is sorted
        else {
            // Check if the target is within the sorted range
            if (nums[mid] < target && target <= nums[end])
                start = mid + 1; // Adjust search range to the right side
            else
                end = mid - 1; // Adjust search range to the left side
        }
    }

    return -1; // Element not found
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << "Index of " << target << " is " << searchRotatedArray(arr, target) << endl;
    return 0;
}