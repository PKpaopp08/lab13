#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[]){

    double sum = 0;
    double max = 0;
    double min = 0;
    float sumdot = 0;
    float std=0;
    float sumha=0;

    for(int i=0;i<N;i++){
        sum += A[i];
    }
    double mean = sum/N;
    B[0] = sum/N;

    for(int i = 0; i < N; i++) {
        std += pow(A[i] - mean, 2);
    }
    B[1]= sqrt(std/N) ;

    for(int i=0;i<N;i++){
        if(max<A[i]){
            max = A[i];
        }
    }

    for (int i = 0; i < N; i++){
    sumdot = sumdot + log(A[i]);
    }

    sumdot = sumdot / N;
    B[2] = exp(sumdot);

    for (int i = 0; i < N; i++){ 
      sumha = sumha + (float)1 / A[i];
    }
    B[3] = (float)N/sumha;
    min=max;
    for(int i=0;i<N;i++){
        if(min>A[i]){
            min = A[i];
        }
    }

    B[4] = max;
    B[5] = min;

}