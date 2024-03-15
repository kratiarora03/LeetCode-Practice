#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int index = 0;
    int left = 0;
    int right = n - 1;

    while (index <= right) {
        if (nums[index] == 0) {
            swap(nums[index], nums[left]);
            left++;
            index++;
        } else if (nums[index] == 2) {
            swap(nums[index], nums[right]);
            right--; // Fixed: decrement right instead of incrementing
        } else {
            index++;
        }
    }
}

int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);

    sortColors(nums); // Corrected: pass nums instead of vector

    // Print sorted nums
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl; // Added to print newline after the sorted nums

    return 0;
}

