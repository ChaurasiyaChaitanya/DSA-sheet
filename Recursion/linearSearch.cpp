#include <iostream>
using namespace std;

void print(int *arr, int size) {

    cout << "Size of array is : " << size << endl;

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

bool linearSearch(int *arr, int size, int key) {

    print(arr, size);
    
    // Base case
    if(size == 0) 
        return false;

    if(arr[0] == key) {
        return true;
    } else {
        bool remArr = linearSearch(arr+1, size-1, key);
        return remArr;
    }
}


int main() {

    int arr[9] = {1, 3, 5, 8, 0, 9, 4, 7, 2};

    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 6;

    bool answer = linearSearch(arr, size, key);

    if(answer) {
        cout << "Number " << key << " is present in array." << endl;
    } else {
        cout << "Number " << key << " is not present in array." << endl;
    }

    return 0;
}