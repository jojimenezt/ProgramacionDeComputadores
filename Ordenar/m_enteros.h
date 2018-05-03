#ifndef M_ENTEROS_H_INCLUDED
#define M_ENTEROS_H_INCLUDED

int** crear_matriz_int(int n, int m);
int** cuadrado_componentes_matriz(int** X,int n, int m);
int** leer_matriz_int(int** X,int n,int m);
void escribir_matriz_int(int** X,int n,int m);
void liberar_matriz_int(int** X, int n, int m);

#endif // M_ENTEROS_H_INCLUDED
