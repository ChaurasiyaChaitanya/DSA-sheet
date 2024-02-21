#include <iostream>
using namespace std;

int power(int a, int b) {

    // Base case
    if(b == 0) 
        return 1;
    
    if(b == 1) 
        return a;
    
    // Recursive call
    int answer = power(a, b/2);

    // if b is even
    if(b % 2 == 0) {
        return answer * answer;
    } else {
        // if b is odd
        return a * answer * answer;
    }

}

int main() {

    int a, b;
    
    cin >> a >> b;

    int result = power(a, b);

    cout << "Exponent of " << a << "^" << b << " is : " << result << endl;

    return 0;
}