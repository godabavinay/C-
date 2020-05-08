#include <iostream>
using namespace std;

int main () {
    int choice;
    
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You choose 1" << endl;
            break;
        default:
            cout << "You choose nothing" << endl;
            break;
        case 2:
            cout << "You choose 2" << endl;
            break;
    }

    return 0;
}