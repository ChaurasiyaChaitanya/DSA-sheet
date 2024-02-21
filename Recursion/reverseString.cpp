#include <iostream>
using namespace std;

void reverse(string& str, int i, int j) {

    // Base case
    if(i > j) 
        return;
    
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i , j);
}

int main() {

    string str = "abcdef";

    reverse(str, 0 , str.length()-1);

    cout << str << endl;

    return 0;
}