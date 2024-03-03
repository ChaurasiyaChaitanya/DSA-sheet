#include <iostream>
using namespace std;

void getCharaterOccurrence(string s) {
 
    // initialize every character occurrence with 0
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        int number = 0;

        // For lowercase character
        if(ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        } else {
            // for uppercase character
            number = ch - 'A';
        }
        arr[number]++;
    }

    cout << "Character Occurrence - " << endl;

    for(int j=0; j<26; j++) {
        cout << arr[j] << " ";
    }
}

int main() {

    cout << "Enter a String : " << endl;

    string s;

    cin >> s;

    getCharaterOccurrence(s);

    return 0;
}
