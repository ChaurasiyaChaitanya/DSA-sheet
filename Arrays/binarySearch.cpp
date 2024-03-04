#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {

    int start = 0;
    int end = n-1;

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

int main() {

    int oddArr[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};

    int evenArr[9] = {2, 4, 6, 8, 10, 12, 14, 16, 18};

    int n1 = sizeof(oddArr)/sizeof(oddArr[0]);

    int n2 = sizeof(evenArr)/sizeof(evenArr[0]);

    cout << "Enter Key element to search in Odd Array : " << endl;

    int key1;
    cin >> key1;

    cout << "Enter Key element to search in Even Array : " << endl;

    int key2;
    cin >> key2;

    int index1 = binarySearch(oddArr, n1, key1);

    int index2 = binarySearch(evenArr, n2, key2);

    if(index1 != -1) {
        cout << "Element " << key1 << " is present and it is present at index " << index1 << " in the Odd array." << endl;
    } else {
        cout << "Element " << key1 << " is not present in the Odd array." << endl;
    }

    if(index2 != -1) {
        cout << "Element " << key2 << " is present and it is present at index " << index2 << " in the Even array." << endl;
    } else {
        cout << "Element " << key2 << " is not present in the Even array." << endl;
    }

    return 0;
}