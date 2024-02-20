#include <iostream>
using namespace std;

void print(int *arr, int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k) {

    print(arr, s, e);

    // Base case

    // element not found
    if(s > e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[10] = {1, 4, 7, 13, 25, 42, 39, 20, 50, 66};

    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 66;

    bool answer = binarySearch(arr, 0, size-1, key);

    if(answer) {
        cout << "Number " << key << " is present in array." << endl;
    } else {
        cout << "Number " << key << " is not present in array." << endl;
    }

    return 0;
}
