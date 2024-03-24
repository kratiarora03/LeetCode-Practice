#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row*col;

        int s = 0; 
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<=e){
            int rowIndex = mid/col;
            int colIndex = mid%col;
            int CurrNumber = matrix[rowIndex][colIndex];

            if(CurrNumber == target){
                return true;
            }else if(CurrNumber > target){
                e= mid-1;
            }else {
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return false;
    }
    int main() {
    // Test input
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    // Call searchMatrix function
    bool result = searchMatrix(matrix, target);

    // Output result
    if (result) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}