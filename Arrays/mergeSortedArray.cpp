#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;
    while(i<n && j<m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    // copy remaining element of array 1, if any
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    // copy remaining element of array 2, if any
    while(j<m) {
        arr2[k++] = arr2[j++];
    }
}

int main() {

    int arr1[5] = {1, 4, 7, 12, 19};
    int arr2[4] = {2, 5, 10, 18};

    int arr3[9] = {0};

    cout << "Printing Sorted Array 1 : ";

    for(int i=0; i<5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    cout << "Printing Sorted Array 2 : ";

    for(int i=0; i<4; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    merge(arr1, 5, arr2, 4, arr3);

     cout << "Printing Merged Sorted Array : ";

    for(int i=0; i<9; i++) {
        cout<< arr3[i] <<" ";
    }
    cout << endl;

    return 0;
}