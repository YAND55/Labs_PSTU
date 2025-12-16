#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num = 0;
    float max, a;
    double n;

    cin >> n;
    max = sinf(1 + (1 / n));

    for (int i = 2; i <= n; i++) {
        a = sinf(i + (i / n));
        if (a > max) {
            max = a;
        }
    }

    for (int i = 1; i <= n; i++) {
        a = sinf(i + (i / n));
        if (a == max) {
            num += 1;
        }
    }

    cout << "Max: " << max << " Count: " << num << endl;

    return 0;
}