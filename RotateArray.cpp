#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans(n);

    for(int index = 0; index < n; index++) {
        int newIndex = (index + k) % n;                //input number ko formulate kiya using modulus to calculate the output index.
        ans[newIndex] = nums[index];  
    }
    nums = ans;
}

int main() {
    int k = 2;
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);                 // nums.push_back is used for adding the number to the vector/array
    nums.push_back(40);
    nums.push_back(50);

    rotate(nums, k);

    for (int i = 0; i < nums.size(); i++) {       //printing the formatted array
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
