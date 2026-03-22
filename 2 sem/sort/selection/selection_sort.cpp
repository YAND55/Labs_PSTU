#include <iostream>
using namespace std;
int main()
{
    const int N = 7;
    int tmp, min_index;
    int arr[N] = { 11, 23, 5, 10, 67, 7, 0 };

    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N-1; i++){
        min_index = i;
        for (int j = i+1; j < N; j++)
        {
            if (arr[j] < arr[min_index]){ min_index = j;}
        }
        tmp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = tmp;
    }

    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}