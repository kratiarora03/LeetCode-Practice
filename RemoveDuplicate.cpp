#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int k = 1; // Initialize pointer to track unique elements

    // Iterate through the array starting from the second element
    for (int i = 1; i < nums.size(); ++i) {
        // If the current element is different from the previous one
        if (nums[i] != nums[i - 1]) {
            // Update the next unique element
            nums[k] = nums[i];
            // Move to the next unique element
            ++k;
        }
    }

    // Return the number of unique elements
    return k;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Number of unique elements: " << k << endl;

    return 0;
}
