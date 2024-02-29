#include <iostream>
using namespace std;

int main() {

    // Create 2D Array
    // take values row wise
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    cout << "Output of 2D array1 : " << endl;

    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // setting the values in the rows
    int arr2[3][4] = {{1,4,6,9}, {2,12,7,5}, {3,8,11,17}};

    cout << "Output of 2D array2 : " << endl;

    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}