#include "arreglos.h"
#include <iostream>

int criba_eratostenes(int n){

    int num[n+1];

    for(int i = 0; i <= n; i++){

        num[i] = 1;

    }

    for(int i = 2; i <= n; i++){

        if(num[i] == 1){

            std::cout << i << " ";

            for(int j = i; j < n; j = j + i){

                //std::cout << j << " ";
                num[j] = 0;

            }

        }

    }
}


double suma_arreglo(double n[]){

    int f = 0;
    double suma = 0;

    while(f != (sizeof(n)  - 1)){

        suma = suma + n[f];
        f++;

    }

    return suma;
}


double promedio_arreglo(double n[]){

    return  suma_arreglo(n)/(sizeof(n)-1);

}

double producto_arreglos(double v[], double w[]){

    int f = 0;
    double producto = 0;


    while(f != (sizeof(v)  - 1)){

        producto = producto + (v[f] * w[f]);
        f++;

    }
    return producto;
}

double minimo_arreglo(double v[]){

    double contenedor = v[0];
    int f = 1;



    while(f != (sizeof(v)  - 1)){

        if(contenedor > v[f]) contenedor = v[f];
        f++;
    }

    return contenedor;

}

double maximo_arreglo(double v[]){

    double contenedor = v[0];
    int f = 1;



    while(f != (sizeof(v)  - 1)){

        if(contenedor < v[f]) contenedor = v[f];
        f++;
    }

    return contenedor;

}

double producto_directo(double v[], double w[]){

    int f = 0;
    double producto = 1;


    while(f != (sizeof(v)  - 1)){

        producto = producto * (v[f] * w[f]);
        f++;

    }
    return producto;
}


