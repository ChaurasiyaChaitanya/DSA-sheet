#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int>& v) {

    int s =0;
    int e = v.size()-1;

    while(s<=e) {
        swap(v[s++], v[e--]);
    }

    return v;
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {

    vector<int> ans;            

    int i = n-1;
    int j = m-1;

    int carry = 0;

    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;

        ans.push_back(sum);
        i--;
        j--;
    }

    // first case if array a's length > b's length
    while(i>=0) {
        int sum = a[i] + carry;

        carry = sum/10;
        sum = sum%10;

        ans.push_back(sum);
        i--;
    }

    // second case if array a's length < b's length
    while(j>=0) {
        int sum = b[i] + carry;

        carry = sum/10;
        sum = sum%10;

        ans.push_back(sum);
        j--;
    }

    // third case if carry is there
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans);

    return ans;
}

int main() {

    vector<int> a;

    a.push_back(9);
    a.push_back(7);
    a.push_back(5);
    a.push_back(9);

    cout << "Printing Array a : ";
    
    for(int i=0; i<a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    vector<int> b;

    b.push_back(6);
    b.push_back(2);
    b.push_back(7);
    b.push_back(3);

    cout << "Printing Array b : ";
    
    for(int i=0; i<b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    vector<int> ans = findArraySum(a, a.size(), b, b.size());

    cout << "Printing sum of Array a and b : ";

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}