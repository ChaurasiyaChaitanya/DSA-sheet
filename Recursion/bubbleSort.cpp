#include <iostream>
using namespace std;

void sortArray(int* arr, int n) {

    // Base case - already sorted
    if(n == 0 || n == 1) 
        return;

    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    // Recursive call
    sortArray(arr, n-1);

}

int main() {

    int arr[8] = {8,4,2,5,1,9,3,0};

    int n = end(arr) - begin(arr);

    sortArray(arr, n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}