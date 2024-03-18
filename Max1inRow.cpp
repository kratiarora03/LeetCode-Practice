#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    vector<int> ans;
    int n = mat.size();
    int OneCount = INT_MIN;
    int rowNo = 0; 

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < mat[i].size(); j++) {
            if(mat[i][j] == 1) {
                count++;
            }
        }
        if (count > OneCount) {
            OneCount = count; 
            rowNo = i;
        }
    }
    ans.push_back(rowNo);
    ans.push_back(OneCount);
    return ans; 
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 1}
    };

    vector<int> result = rowAndMaximumOnes(matrix);
    cout << "Row with maximum ones: " << result[0] << endl;
    cout << "Number of ones in that row: " << result[1] << endl;

    return 0;
}
