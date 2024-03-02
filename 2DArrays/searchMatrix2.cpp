#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    // start from last element of 1st row
    // if target is greater than current element, go to the next row
    // if target is less than current element, back to the previous column
    while(rowIndex < row && colIndex >= 0) {

        int element = matrix[rowIndex][colIndex];

        if(element == target) {
            return 1;
        }

        if(element < target) {
            rowIndex++;
        } else {
            colIndex--;
        }
    }
    return 0;
}


int main() {

    // create a matrix using vector
    // Integers in each row are sorted in ascending from left to right
    // Integers in each column are sorted in ascending from top to bottom
    vector<vector<int>> matrix = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {18,21,23,26,30}};

    cout << "Output of Matrix : " << endl;

    for(int i=0; i<matrix.size() ; i++) {
        for(int j=0; j<matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search in matrix : " << endl;

    int target;
    cin >> target;

    bool ans = searchMatrix(matrix, target);

    if(ans) {
        cout << "Element " << target << " is present in the 2D Matrix" << endl;
    } else {
        cout << "Element " << target << " is not present in the 2D Matrix" << endl;
    }

    return 0;
}