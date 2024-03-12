#include <iostream>
#include <vector>
using namespace std;

// Sorted and Rotated if either 0 or 1 pair will be there such that arr[i-1] > arr[i]

bool checkSortedRotated(vector<int>& v) {

    int count = 0;
    int n = v.size();

    for(int i=1; i<n; i++) {
        if(v[i-1] > v[i]) {
            count++;
        }
    }

    // compare last element with first element
    if(v[n-1] > v[0]) {
        count++;
    }

    return count<=1;
}

int main() {

    vector<int> v;

    v.push_back(5);
    v.push_back(9);
    v.push_back(13);
    v.push_back(17);
    v.push_back(1);
    v.push_back(4);

    cout << "Printing Array : ";
    
     for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    bool ans = checkSortedRotated(v);

    if(ans) {
        cout << "Given Array is Sorted and Rotated Array." << endl;
    } else {
        cout << "Given Array is not Sorted and Rotated Array." << endl;
    }

    return 0;
}