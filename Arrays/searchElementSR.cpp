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

int binarySearch(int arr[], int start, int end, int key) {

    int mid = start + (end - start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    
    return -1;
}

int searchElement(int arr[], int n, int key) {

    int pivot = getPivot(arr, n);

    if(key >= arr[pivot] && key <= arr[n-1]) {
        return binarySearch(arr, pivot, n-1, key);
    } else {
        return binarySearch(arr, 0, pivot-1, key);
    }
}

int main() {

    // Sorted and Rotated array
    int arr[10] = {9, 12, 15, 20, 22, 25, 2, 5, 6, 8};

    int n = sizeof(arr)/sizeof(arr[0]);

    int key;

    cout << "Enter Key element to search in Sorted Rotated Array : " << endl;

    cin >> key;

    int index = searchElement(arr, n, key);

    if(index != -1) {
        cout << "Element " << key << " is present and it is present at index " << index << " in the Sorted Rotated Array." << endl; 
    } else {
        cout << "Element " << key << " is not present in the Sorted Rotated Array." << endl; 
    }

    return 0;
}