#include <iostream>
using namespace std;
int main()
{
    const int N = 7;
    int tmp;
    int arr[N] = {7, 4, 5, 1, 3, 8, 2};
    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";}
    cout << endl;

    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}