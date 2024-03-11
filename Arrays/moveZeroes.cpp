#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& v) {
    
    int i = 0;

    for(int j=0; j<v.size(); j++) {
        if(v[j] != 0) {
            swap(v[j], v[i]);
            i++;
        }
    }
}

int main() {

    vector<int> v;

    v.push_back(0);
    v.push_back(4);
    v.push_back(3);
    v.push_back(0);
    v.push_back(9);
    v.push_back(7);
    v.push_back(1);

    cout << "Printing Array : ";
    
     for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    moveZeroes(v);

    cout << "Printing Array after Moving zeros to right : ";
    
     for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}