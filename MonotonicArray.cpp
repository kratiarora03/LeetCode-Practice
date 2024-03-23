#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    // Check if the array is monotone increasing
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < nums[i - 1]) {
            increasing = false;
            break;
        }
    }

    // Check if the array is monotone decreasing
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
            break;
        }
    }

    // If either increasing or decreasing is true, the array is monotone
    return increasing || decreasing;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 3}; // Monotone increasing
   

    cout << "nums1 is monotonic: " << std::boolalpha << isMonotonic(nums1) << endl;
  

    return 0;
}
