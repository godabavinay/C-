#include <iostream>
using namespace std;

int main () {
    string food = "Chicken";
    string &dish = food;    //  even with a space it works fine. e.g.: string & dish = food;

    cout << food << endl;
    cout << dish << endl;

    cout << &food << endl;
    cout << &dish << endl;

    food = "Chicken fry";
    dish = "Chicken curry";

    cout << food << endl;
    cout << dish << endl;

    cout << &food << endl;
    cout << &dish << endl;

    return 0;
}