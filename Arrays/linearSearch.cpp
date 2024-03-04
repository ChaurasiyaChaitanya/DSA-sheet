#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[9] = {1, 4, 7, 12, 23, 9, 17, 2, 30};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter Key element to search : " << endl;

    int key;
    cin >> key;

    int index = linearSearch(arr, n, key);

    if(index != -1) {
        cout << "Element " << key << " is present and it is present at index " << index << " in the array." << endl;
    } else {
        cout << "Element " << key << " is not present in the array." << endl;
    }

    return 0;
}