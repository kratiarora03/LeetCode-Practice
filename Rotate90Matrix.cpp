#include <iostream>
#include <vector>
#include <algorithm> // Include this for reverse and swap
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) { // Note that the loop should go until n, not matrix[i].size()
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    // Print the rotated matrix
    for(const auto& row : matrix) {
        for(const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
