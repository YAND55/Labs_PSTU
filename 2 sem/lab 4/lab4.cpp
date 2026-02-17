#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std; 
int main(){ 
    srand(time(0));
    int N; 
    cin >> N;
    int a[N];  
    int K;
    int D;
    if (N%3 == 0){K = (N / 3)*2 + 1;}
    else{K = (N / 3)*2 + (N%3);} 
    int b[K];
    int k = 1;
    int neg_num = 0;
    int range_min = -1000;
    int range_max = 1000;

    for (int i = 0; i < N; i++)
    {
        a[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) +
        range_min;
        cout << a[i] << " ";
    }   
    cout << endl;
    b[0] = a[0];
    cout << "K = " << K << endl;  
    for (int i = 1; i < N; i++){
        if (i%3 != 0){
            if (k < K){ 
                b[k] = a[i]; 
                k++; 
            }
        }
    }

    for (int i = 0; i < K; i++){
        cout << b[i] << " "; 
    }

    for(int i =0; i < K; i ++){
        if (b[i] < 0){
            neg_num ++;
        }
    }
    
    D = K + neg_num;

    int d = 0;
    int c[D]; 

    cout << "D = " << D << endl;

    for( int i = 0; i < K; i++){
        if (b[i] >= 0){
            if (d < D){
                c[d] = b[i];
                d++;
            }
        }
        else{
            if(d<D){
                c[d] = b[i]; 
                c[d+1] = abs(c[d] + 1);
                d+=2;
            }
        }
    }
    for (int i = 0; i < D; i++){
        cout << c[i] << " ";
    }
    return 0;
}