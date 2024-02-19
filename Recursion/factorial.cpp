#include <iostream>
using namespace std;

int factorial(int n) {

    //Base case
    if(n == 0) 
        return 1;
    
    // int fact = factorial(n-1);
    // int result = n*fact;
    // return result;

    // Recursive Relation
    return n*factorial(n-1);
}

int main() {
    int n;
    cin >> n;

    int answer = factorial(n);

    cout << "Factorial of " << n << " is : " << answer << endl;

    return 0;
}