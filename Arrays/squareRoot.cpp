#include <iostream>
using namespace std;

int squareRootInt(int num) {

    int start = 0;
    int end = num;

    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end) {

        int square = mid*mid;

        if(square == num) {
            return mid;
        }

        if(square < num) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

double getPrecision(int num, int precision, int result) {

    double factor = 1;
    double ans = result;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<num; j=j+factor) {
            ans = j;
        }
    }

    return ans;
}

int main() {

    int num;

    cout << "Enter Number to find the Square Root of it : " << endl;

    cin >> num;

    int result = squareRootInt(num);

    cout << "Square Root of " << num << " is : " << getPrecision(num, 4, result) << endl;

    return 0;
}