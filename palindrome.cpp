#include <iostream>
using namespace std;

bool checkPalindrome(string& str, int i, int j) {

    // Base case
    if(i > j) 
        return true;
    
    if(str[i] != str[j]) {
        return false; 
    } else {
        // Recursive call
        return checkPalindrome(str, i+1, j-1);
    }
}

int main() {

    // string str = "abbccbba";
    string str = "recursion";

    bool isPalindrome = checkPalindrome(str, 0 , str.length()-1);

    if(isPalindrome) {
        cout << "This string " << str << " is a Palindrome." << endl;
    } else {
        cout << "This string " << str << " is not a Palindrome." << endl;
    }

    return 0;
}