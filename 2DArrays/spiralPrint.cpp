#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>>& matrix) {

    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col;

    // index initialization
    int stRow = 0;
    int stCol = 0;
    int endRow = row-1;
    int endCol = col-1;

    while(count < total) {

        // print starting row
        for(int i=stCol; count < total && i<=endCol; i++) {
            ans.push_back(matrix[stRow][i]);
            count++;
        }

        stRow++;

        // print ending column
        for(int i=stRow; count < total && i<=endRow; i++) {
            ans.push_back(matrix[i][endCol]);
            count++;
        }

        endCol--;

        // print starting row
        for(int i=endCol; count < total && i>=stCol; i--) {
            ans.push_back(matrix[endRow][i]);
            count++;
        }

        endRow--;

        // print starting row
        for(int i=endRow; count < total && i>=stRow; i--) {
            ans.push_back(matrix[i][stCol]);
            count++;
        }

        stCol++;
    }

    return ans;
}


int main() {

    // create a matrix using vector
    vector<vector<int>> matrix;

    int num;

    cout << "Enter values in Matrix : " << endl;

    for(int i=0; i<3; i++) {
        vector<int> v;
        for(int j=0; j<3; j++) {
            cin >> num;
            v.push_back(num);
        }
        matrix.push_back(v);
    }

    cout << "Output of Matrix : " << endl;

    for(int i=0; i<matrix.size() ; i++) {
        for(int j=0; j<matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> ans = spiralPrint(matrix);

    cout << "Spiral print of Matrix : " << endl;

    for(int i : ans) {
        cout << i << " ";
    }

    return 0;
}