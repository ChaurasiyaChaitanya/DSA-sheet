#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int>& v) {

    int s = 0, e = v.size()-1;

    while(s<=e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

int main() {

    vector<int> v;

    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);

    cout << "Printing Array : ";
    
     for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> ans = reverse(v);

    cout << "Printing Reverse Array : ";
    
     for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}