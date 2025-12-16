#include <iostream>

using namespace std;

int main() {
    float l_n = 1, n = 1;
    bool haotic = false;

    while (n != 0) {
        if (n < l_n) {
            haotic = true;
            break;
        }
        l_n = n;
        cin >> n;


    }
    if (haotic == true) {cout << "Haotic!" << endl;}
    else {cout << "Exit 0" << endl;}

    return 0;
}