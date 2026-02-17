#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Передвинуть диск 1 с " << from << " на " << to << endl;
    } else {
        hanoi(n - 1, from, aux, to);
        cout << "Передвинуть диск " << n << " с " << from << " на " << to << endl;
        hanoi(n - 1, aux, to, from);
    }
}

int main() {
    int n;
    cout << "Введите число дисков: ";
    cin >> n;

    if (n <= 0) {
        cout << "О-оу! Что-то пошло не так!" << endl;
        return 1;
    }
    hanoi(n, 'A', 'B', 'C');

    return 0;
}