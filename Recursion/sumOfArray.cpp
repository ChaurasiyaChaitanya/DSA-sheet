#include <iostream>
using namespace std;

int getSum(int *arr, int size) {
    
    // Base case
    if(size == 0) {
        return true;
    }   

    if(size == 1) 
        return arr[0];

    int remArr = getSum(arr+1, size-1);
    int sum = arr[0] + remArr;

    return sum;
}


int main() {

    int arr[5] = {3, 5, 8, 9, 11};

    int size = end(arr) - begin(arr);

    int sum = getSum(arr, size);

    cout << "Sum of array is : " << sum << endl;

    return 0;
}