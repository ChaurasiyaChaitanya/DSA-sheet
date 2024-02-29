#include <iostream>
using namespace std;

void printSumRow(int arr[][3], int row, int col) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void printSumCol(int arr[][3], int row, int col) {
    for(int i=0; i<col; i++) {
        int sum = 0;
        for(int j=0; j<row; j++) {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
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

    cout << "Printing the sum of 2D array (row wise) : " << endl;

    printSumRow(arr, 3, 3);

    cout << "Printing the sum of 2D array (column wise) : " << endl;

    printSumCol(arr, 3, 3);

    return 0;
}