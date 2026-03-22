#include <iostream>
using namespace std;
int main()
{
    const int N = 11;
    int tmp, p, q;
    int a[N] = { 34, 67, 89, 100, 20, 45, 31, 78, 90, 25, 57 };
    cout << "введите p и q" << endl;
    cin >> p >> q;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    while (p < q)
    {
        tmp = a[p];
        a[p] = a[q];
        a[q] = tmp;
        p++;
        q--;
    }
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}