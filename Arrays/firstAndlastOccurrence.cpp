#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {

    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else if(key < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
} 

int lastOcc(int arr[], int n, int key) {

    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else if(key < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}   

int main() {

    int arr[10] = {1, 2, 3, 4, 4, 4, 4, 4, 5, 6};

    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 4;

    // Pair to store two values in single variable
    pair<int, int> result;

    result.first = firstOcc(arr, n, key);

    result.second = lastOcc(arr, n, key);

    cout << "First occurrence of " << key << " is at index " << result.first << " and last occurrence of " << key << " is at index " << result.second << endl;

    return 0;
}