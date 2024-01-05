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
    double x=0, y=0, z=1, a=0;
    B[4] = A[0];
    B[5] = A[0];
    for(int i=0; i<N; i++){
        
    //Arithmetic Mean//
        x += A[i];
        B[0] = x/N;
    
    
    //Standard Deviation//
        y += pow(A[i],2);
        B[1] = sqrt((y / N)-pow(B[0],2));
    
    //Geometric Mean//
        z = z * A[i];
        B[2] = pow(z, 1.0/N);
    
    //Harmonic Mean//
        a += 1.0/A[i];
        B[3] = N/a;
        
    //Find Max & Min//
        if(A[i]>B[4]){
            B[4] = A[i];
        }
        if(A[i]<B[5]){
            B[5] = A[i];
        }
    }
}    