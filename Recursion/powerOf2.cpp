#include <iostream>
using namespace std;

int power(int n) {

    // Base case
    if (n == 0)
        return 1;

    // int pow = power(n-1);
    // int result = 2*pow;
    // return result;

    // Recursive Relation
    return 2*power(n-1);
}

int main() {
    int n;
    cin >> n;

    int answer = power(n);

    cout << "Power of 2^" << n << " is : " << answer << endl;

    return 0;
}