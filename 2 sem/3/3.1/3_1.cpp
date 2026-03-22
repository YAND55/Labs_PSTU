#include <iostream>
using namespace std;
int main()
{
    const int N = 4;
    int tmp;
    int a[N] = { 34, 21, 55, 100 };
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N/2; i++)
    {
        tmp = a[i];
        a[i] = a[N-1-i];
        a[N-1-i] = tmp;
    }


    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}