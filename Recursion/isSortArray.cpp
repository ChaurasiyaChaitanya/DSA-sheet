#include <iostream>
using namespace std;

bool isSorted(int *arr, int size) {
    
    // Base case
    if(size == 0 || size == 1) {
        return true;
    }   

    if(arr[0] > arr[1]) {
        return false;
    } else {
        bool remArr = isSorted(arr+1, size-1);
        return remArr;
    }
}


int main() {

    int arr[5] = {1, 3, 5, 8, 0};

    // *(&arr + 1) is the address of the next memory location just after the last element of the array
    int size = *(&arr + 1) - arr;

    bool answer = isSorted(arr, size);

    if(answer) {
        cout << "Array is Sorted." << endl;
    } else {
        cout << "Array is not Sorted." << endl;
    }

    return 0;
}