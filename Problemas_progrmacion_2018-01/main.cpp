#include <iostream>
#include "numericos.h"
#include "geometricos.h"
#include "otros.h"
#include "arreglos.h"


using namespace std;



int main(){

    double m[3];

    m[0]= 2;
    m[1]= 2;
    m[2]= 2;

    double n[3];

    n[0]= 2;
    n[1]= 2;
    n[2]= 2;



    cout  << producto_directo(m,n);
    return 0;
}
