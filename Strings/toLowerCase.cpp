#include <iostream>
using namespace std;

char toLowerCase(char ch) {

    if(ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char lower = ch - 'A' + 'a';
        return lower;
    }

}

int main() {   

    char ch;
    cin >> ch;

    cout << toLowerCase(ch) << endl;

    return 0;
}