#include "geometricos.h"


char* ev_dosrectas(double ma, double ba, double mb, double bb){

    if((ma == mb)&&(ba != bb)) return "Son Paralelas";
    if((ma == mb)&&(ba == bb)) return "Son la misma Recta";
    if((-(1/ma)) == mb) return "Son Perpendiculares";

}

double intersecx(double ma, double ba, double mb, double bb){

    return (bb-ba)/(ma-mb);

}

double intersecy(double ma, double ba, double mb, double bb){

    return ma * (intersecx(ma, ba, mb, bb)) + ba;

}

/*                                                      FALTAN DOS ULTIMOS EJERCICIOS
double a_tricircuns(double r){



}
*/
