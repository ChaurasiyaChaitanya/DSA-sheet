#include <iostream>
using namespace std;

void print(int n) {

    // Base case
    if(n == 0)
        return;

    // Processing before Recursive Relation - Tail Recursion
    cout << n << endl;

    // Recursive Relation
    print(n-1);

    // Processing After Recursive Relation - Tail Recursion
    // cout << n << endl;
}

int main() {

    int n;
    cin >> n;

    print(n);

    return 0;
}