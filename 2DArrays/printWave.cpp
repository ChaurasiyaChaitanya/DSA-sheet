#include <iostream>
#include <vector>
using namespace std;


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

    vector<int> ans;

    for(int col=0; col<3; col++) {
        if(col&1) {
            // odd index - bottom to top
            for(int row=2; row>=0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // even index - top to bottom
            for(int row=0; row<3; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }

    cout << "Printing 2D array like a wave : " << endl;

    for(int i : ans) {
        cout << i << " ";
    }

    return 0;
}