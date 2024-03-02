#include <iostream>
#include <vector>
using namespace std;

// Binary search in Matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        // middle value using row index [mid/col] and column index [mid%col]
        int element = matrix[mid/col][mid%col];

        if(element == target) {
            return 1;
        }

        if(element < target) {
            start = mid + 1;
        } else  {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return 0;
}


int main() {

    // create a matrix using vector
    // Integers in each row are sorted from left to right
    vector<vector<int>> matrix = {{1,2,3,5}, {7,8,9,11}, {13,15,16,17}};

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