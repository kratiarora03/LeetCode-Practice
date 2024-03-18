#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
        int sum= 0;
        int n = nums.size();
        for(int index =0; index<n; index ++){
            sum = sum + nums[index];
        }
        int totalsum= ((n)*(n+1))/2;
        int ans = totalsum - sum ;
        return ans ;  
    }

    int main(){
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(4);
        nums.push_back(5);
        nums.push_back(6);

     int result = missingNumber(nums);
    cout << "The missing number is: " << result << endl;

    return 0;
    


    }