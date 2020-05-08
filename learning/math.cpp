#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Max: " << max(x, y) << endl;   //  max is not from math library

    cout << sqrt(3) << endl;
    cout << round(2.2) << endl;
    cout << log(2) << endl;

    return 0;
}