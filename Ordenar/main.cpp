#include <iostream>
#include "negocio.h"
#include "a_entero.h"
#include "m_enteros.h"
using namespace std;


int main()
{
    int n=5;
    int m=2;
    int** A=crear_matriz_int(n,m);
    leer_matriz_int(A,n,m);
    int** B = cuadrado_componentes_matriz(A,n,m);
    escribir_matriz_int(B,n,m);
    return 0;
}
