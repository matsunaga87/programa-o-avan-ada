/*
13)
Uma função pode aceitar várias variáveis e gera apenas um retorno, os ponteiros serve para mudar isso fazendo não apenas um retorno mas várias modificações nas variáveis.
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
