#include <iostream>
#include <limits.h>
using namespace std;

void printLargestSumRow(int arr[][3], int row, int col) {

    int maxSum = INT_MIN;
    int rowIndex = -1;

    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout << "The maximim sum (row) is : " << maxSum << endl;

    cout << "The row index which has the largest sum is : " << rowIndex << endl;
}

void printLargestSumCol(int arr[][3], int row, int col) {

    int maxSum = INT_MIN;
    int colIndex = -1;

    for(int i=0; i<col; i++) {
        int sum = 0;
        for(int j=0; j<row; j++) {
            sum += arr[j][i];
        }

        if(sum > maxSum) {
            maxSum = sum;
            colIndex = i;
        }
    }

    cout << "The maximim sum (col) is : " << maxSum << endl;

    cout << "The row index which has the largest sum is : " << colIndex << endl;
}

int main() {

    // Create 2D Array
    int arr[3][3];

    cout << "Enter values in 2D array : " << endl;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Output of 2D array : " << endl;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing the Maximum sum of row in 2D array - " << endl;

    printLargestSumRow(arr, 3, 3);

    cout << endl;

    cout << "Printing the Maximum sum of column in 2D array - " << endl;

    printLargestSumCol(arr, 3, 3);

    return 0;
}