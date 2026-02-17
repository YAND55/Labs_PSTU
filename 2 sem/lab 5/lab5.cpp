#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std; 
int a[100][100];
int (*p)[100] = a;
int del(int (*p)[100], int N, int K, int A, int B){
    int c = B - A +1;
    for(int i = 0; i<N; i++){
        if (i < A){
            for (int j = 0; j < K; j++)
                p[i][j] = p[i][j];
        }
        else if ( A<= i <=B){
            for (int j = 0; j < K; j++){
                p[i][j] = p[i+c][j]; 
            }
        }
        else if (i > B){
            for (int j = 0; j < K; j++){
                p[i][j] = 0; 
            }
        }
    }
    return (*p)[100]; 
}

int main(){
    srand(time(0));
    int range_min = -1000;
    int range_max = 1000;
    int N, K;
    cin >> N >> K;
    int a[100][100];
    for (int i = 0; i < 100; i++){
        for (int j = 0; j<100; j++){
            if (i < N && j < K){ 
               a[i][j] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;  
               //cout << a[i][j] << " ";
            }
            else{
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < K; j++){
            cout << a[i][j] << " "; 
        }
        cout << endl;
    }  
    int A, B; 
    cin >> A >> B; 
    del(a, N, K, A, B);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < K; j++){
            cout << a[i][j] << " "; 
        }
        cout << endl; 
    }
}