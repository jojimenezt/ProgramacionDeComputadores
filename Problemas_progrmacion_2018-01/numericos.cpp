#include "numericos.h"

double abs(double x){

    if (x >= 0) return x;
    else return -x;

}

double pot(int n,int m){

    if (m == 0) return 1;

    if (m > 0){
        return n * pot(n, m-1);
    }

    if (m < 0 ){
        return 1 / pot(n,abs(m));
    }

}

bool div( int x, int y){

    if(x % y == 0) return true;
    else return false;

}

bool es_primo_temp(int x, int y){

    if (y == 1) return true;
    if (x%y == 0) return false;
    else es_primo_temp(x, (y-1));


}

bool es_primo(int x){

    es_primo_temp(x,(x/2));

}

bool es_prelativo(int x, int y){

    if (x > y){

        for(int i = 2; i <= y; i++){

            if ((x % i == 0) && (y % i == 0)) return false;

        }

    }
    if (y > x){

        for(int i = 2; i <= x; i++){

            if ((x % i == 0) && (y % i == 0)) return false;

        }

    }
    return true;
}

bool es_msum(int x, int a, int b){

    if (x % (a+b) == 0) return true;
    else return false;

}

double ev_polinomio(double a, double b, double c, double x){

    return ((a*(x*x))+(b*x)+c);

}

double ev_coelienal(double a, double b, double c){

    return 2*a;

}

double ev_derivada(double a, double b, double c, double punto){

    return (2*(a*punto)) + b;

}

bool es_fibotemp(int fibo, int a, int b, int temp){

    a = 1;
    b = 1;

    while(b <= fibo){

        temp = a + b;
        a = b;
        b = temp;
        if (b == fibo) return true;
    }
    return false;
}

bool es_fibo(int a){

    es_fibotemp(a,1,1,0);

}
