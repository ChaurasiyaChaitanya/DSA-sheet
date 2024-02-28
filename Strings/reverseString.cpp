#include <iostream>
using namespace std;

void reverse(string &str, int n) {
    
    int s = 0;
    int e = n-1;

    while(s < e) {
        swap(str[s++], str[e--]);
    }

}

int main() {

    string str;

    cin >> str;

    reverse(str, str.length());

    cout << "Reverse String is : " << str << endl;

    return 0;
}