#include <iostream>
using namespace std;

void sayDigit(int n, string arr[]) {

    // Base case
    if(n == 0) 
        return;

    // Processing
    int d = n % 10;
    n = n / 10;

    // Recursive call
    sayDigit(n, arr);

    cout << arr[d] << " ";
}

int main() {

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;

    sayDigit(n, arr);

    return 0;
}