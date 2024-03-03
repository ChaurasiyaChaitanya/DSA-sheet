#include <iostream>
using namespace std;

char getMaxOccCharacter(string s) {

    int arr[26] = {0};

    // Create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // Find maximum occurred character
    int maxOcc = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxOcc < arr[i]) {
            ans = i;
            maxOcc = arr[i];
        }
    }

    return 'a'+ans;
}

int main() {

    cout << "Enter a String : " << endl;

    string s;

    cin >> s;

    cout << "Maximum Occurred Character - " << endl;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}
