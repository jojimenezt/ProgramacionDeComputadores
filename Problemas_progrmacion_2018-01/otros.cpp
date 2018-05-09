#include "otros.h"

int un_podaarboles(int p, int k, int t){

    return t/(k*p);

}


int i_simpleamigo(int k, int i){

    return k + (i * 7);

}

double i_compuesamigo(int k, int i){

    double temp1;
    double temp2;

    temp2 = ((i*1.0)/(k*1.0)+1.0);

    return (k*1.0)*(temp2*temp2*temp2*temp2*temp2*temp2*temp2);

}

