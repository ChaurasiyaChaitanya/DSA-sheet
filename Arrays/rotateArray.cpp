#include <iostream>
#include <vector>
using namespace std;

// Cyclic way to shift an element by k position in array
// arr[(i+k)%n] = arr[i]

void rotate(vector<int>& v, int k) {

    // creating new array cause in the same array elements will be override
    int n = v.size();
    vector<int> temp(n);

    for(int i=0; i<n; i++) {
        temp[(i+k)%n] = v[i];
    }

    for(int i=0; i<v.size(); i++) {
        v[i] = temp[i];
    }

}

int main() {

    vector<int> v;

    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);
    v.push_back(6);

    cout << "Printing Array : ";
    
     for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    int k = 2;

    rotate(v, k);

    cout << "Printing Rotated Array : ";
    
     for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}