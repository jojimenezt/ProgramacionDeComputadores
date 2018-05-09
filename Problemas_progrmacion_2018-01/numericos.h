#ifndef NUMERICOS_H_INCLUDED
#define NUMERICOS_H_INCLUDED

double abs(double x);

double pot(int n,int m);

bool div(int x, int y);

bool es_primo(int x);

bool es_primo_temp(int x, int y);

bool es_prelativo(int x, int y);

bool es_msum (int x, int a, int b);

double ev_polinomio(double a, double b, double c, double x);

double ev_coelienal(double a, double b, double c);

double ev_derivada(double a, double b, double c, double punto);

bool es_fibotemp(int fibo, int a, int b, int temp);

bool es_fibo(int a);


#endif // NUMERICOS_H_INCLUDED
