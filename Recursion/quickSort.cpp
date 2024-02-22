#include<iostream>
using namespace std;

int partition(int *arr, int s, int e) {

    int pivot = arr[s];

    int count = 0;

    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // make left part < pivot and right part > pivot
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
}

void quickSort(int *arr, int s, int e) {

    // Base case
    if(s >= e) 
        return;
    
    // partition to get p index - pivot
    int p = partition(arr, s, e);

    // left part sort
    quickSort(arr, s, p-1);

    // right part sort
    quickSort(arr, p+1, e);

}

int main() {

    int arr[10] = {25,12,4,41,36,9,1,30,0,19};

    int n = end(arr) - begin(arr);

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 
    
    cout << endl;

    return 0;
}