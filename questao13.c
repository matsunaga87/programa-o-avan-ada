/*
13)
Uma fun��o pode aceitar v�rias vari�veis e gera apenas um retorno, os ponteiros serve para mudar isso fazendo n�o apenas um retorno mas v�rias modifica��es nas vari�veis.
*/
#include <stdio.h>
int isso(int *x,int *y){
*x=*x+30;
*y=3333;
return 24;
}
int main(void){
    int *x;
    int *y;
    int z,b=10,c;
    x=&b;
    y=&c;
    z=isso(x,y);
    printf("%i\n",b);
    printf("%i \n",c);
    printf("%i",z);
  return(0);
}
