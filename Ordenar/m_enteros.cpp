#include "m_enteros.h"
using namespace std;
int** crear_matriz_int(int n, int m){
    int** X=new int*[n];
    for(int i=0;i<n;i++){
        X[i]=new int[m];
    }
    return X;
}
int** cuadrado_componentes_matriz(int** X,int n, int m){
    int** Y=crear_matriz_int(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            Y[i][j]=X[i][j] * X[i][j];
        }
    }
    return Y;
}
int** leer_matriz_int(int** X,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"X["<<i<<"]["<<j<<"]=";
            cin>>X[i][j];
            cout<<endl;
        }
    }
}
void escribir_matriz_int(int** X,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"|"<<X[i][j]<<"\t";
        }
        cout<<"|"<<endl;
    }
}
void liberar_matriz_int(int** X, int n, int m){
    for(int i = 0; i < n; i++){
        delete[] X[i];
    };
    delete[] X;
    return ;
};
