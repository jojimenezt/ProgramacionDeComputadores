#include <iostream>

using namespace std;
char pr(char ch){
    if(ch=='0'){
        return '9';
    }else{
        return ch-1;
    }
}
char sr(char ch){
    if(ch=='9'){
        return '0';
    }else{
        return ch+1;
    }
}
char sr(char x,char y){
    if(x=='0'){
        return y;
    }else if(y=='0'){
        return x;
    }else{
        return sr(pr(x),pr(y));
    }
}
char ar(char x, char y){
    if(x=='0'){
        return '0';
    }else if(y=='0'){
        return '0';
    }else if(x=='9'){
        return '1';
    }else{
        return ar(sr(x),pr(y));
    }
}
char sr(char x,char y, char z){
    return sr(sr(x,y),z);
}
char ar(char x,char y, char z){
    if(z=='0'){
        return ar(x,y);
    }else if(ar(x,y)=='1'){
        return '1';
    }else{
        return ar(sr(x,y),'1');
    }
}
char* sucesor(char x){
    if(x=='9'){
        return "10";
    }else{
        char* a= new char[3];
        a[0]=sr(x);
        a[1]='\0';
        return a;
    }
}
int longitud(char* A, int i){
    if(A[i]=='\0'){
        return i;
    }else{
        return longitud(A,i++);
    }
}
int longitud(char* A){
    return longitud(A,0);
}
char* sucesor(char* A){

}
int main()
{

    return 0;
}
