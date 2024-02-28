#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int n) {
    
    int s = 0;
    int e = n-1;

    while(s <= e) {
        if(str[s] != str[e]) {
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;

}

int main() {

    string str;

    cin >> str;

    bool ans = checkPalindrome(str, str.length());

    if(ans) {
        cout << "This string " << str << " is a Palindrome" << endl;
    } else {
        cout << "This string " << str << " is not a Palindrome" << endl;
    }

    return 0;
}