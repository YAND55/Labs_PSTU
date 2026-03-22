#include <iostream>
using namespace std;
int main()
{
    const int N = 6;
    int a[N] = { 1, 5, 3, 2, 10, 6 };
    bool sorted = true;
    for (int i = 1; i < N; i++)
    {
        if (a[i] < a[i-1])
        {
            sorted = false;
            break; 
        }
    }
    
    if (sorted == true)
    { 
        cout << "massive is cool" << endl; 
    }
    else 
    { 
        cout << "massive isnt cool" << endl; 
    }
    return 0;
}