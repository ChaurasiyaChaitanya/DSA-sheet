#include <iostream>
using namespace std;

int getPivot(int arr[], int n) {

    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start < end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main() {

    // Sorted and Rotated array by 4
    int arr[6] = {4, 6, 8, 9, 1, 2};

    int n = sizeof(arr)/sizeof(arr[0]);

    // pivot element : minimum value of the graph of an array => 1

    cout << "Pivot element of an array is present and it is present at index : " << getPivot(arr, n) << endl;

    return 0;
}