#include <iostream>
#include <string>

using namespace std;

int main () {
    string s1, s2;

    cout << "Enter 2 strings: ";
    cin >> s1 >> s2;

    cout << s1 + " " + s2 << endl;
    cout << s1.append(" " + s2) << endl;

    string spaced_string;

    cin.ignore();
    cout << "Enter a spaced string: ";
    getline(cin, spaced_string);
    
    cout << "Spaced string is: " << spaced_string << endl;

    return 0;
}