#include <iostream>
using namespace std;

int main() {

    int r, c;

    cin >> r >> c;

    // Create 2D Array
    int arr[r][c];

    cout << "Enter values in 2D array (row wise) : " << endl;

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> arr[i][j];
        }
    }

    // cout << "Enter values in 2D array (column wise) : " << endl;

    // for(int i=0; i<c; i++) {
    //     for(int j=0; j<r; j++) {
    //         cin >> arr[j][i];
    //     }
    // }

    cout << "Output of 2D array2 (row wise) : " << endl;

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Output of 2D array2 (column wise) : " << endl;

    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}