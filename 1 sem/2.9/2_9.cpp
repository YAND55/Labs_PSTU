#include <iostream>
using namespace std;
int main(){
    int N, d; 
    cin >> N; 
    d = N/2; 
    // Zadnyaya gran' 
    for (int i = 0; i < d; i++){
        cout << " "; 
    }
    for (int i = 0; i < N; i++){
        cout << "* "; 
    }
    cout << endl; 
    // Verhnyaya diagonal' 
    for (int i = 0; i < d-1; i++){
        for(int j = 1; j < d-i; j++){
            cout << " "; 
        }
        cout << "* "; 
        for (int j = 0; j < N-2; j++){
            cout << "  "; 
        }
        cout << "*"; 
        for(int j = 1; j < i; j++){
            cout << " "; 
        }
        cout << "*";
        cout << endl; 
    }
    //Perednyaya gran' + part of the back 
    for (int i = 0; i < N; i++){
        cout << "* ";
    }
    for (int i = 0; i < d-2; i++){
        cout << " "; 
    }
    cout << "*" << endl; 
    // part of the emrpy square
    for (int i = 0; i < N-d-1; i++){
        cout << "* ";
        for (int j = 0; j < N-2; j++){
            cout << "  ";
        }
        cout << "* ";
        for (int j = 0; j < d-2; j++){
            cout << " "; 
        }
        cout << "*" << endl;
    }
    for (int i = 0; i < d-1; i++){
        cout << "* ";
        for (int j = 0; j < N-2; j++){
            cout << "  "; 
        }
        cout << "*"; 
        for(int j = 1; j < d-i-1; j++){
            cout << " "; 
        }
        for(int j = 1; j < d-1-i; j++){
            cout << " "; 
        }
        cout << "*" << endl; 
    }
    //nizhnyaya gran' 
    for (int i =0; i < N; i++){
        cout << "* ";
    }
    cout << endl; 
    return 0;
}