#include <iostream>
using namespace std;

// It is necessary to pass column size when passing a 2D array as a parameter to a function
bool isPresent(int arr[][3], int ele, int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == ele) {
                return 1;
            }
        }
    }
    return 0;
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

    cout << "Enter the element to search in the 2D array : " << endl;

    int ele;
    cin >> ele;

    bool ans = isPresent(arr, ele, 3, 3);

    if(ans) {
        cout << "Element " << ele << " is present in the 2D array" << endl;
    } else {
        cout << "Element " << ele << " is not present in the 2D array" << endl;
    }

    return 0;
}