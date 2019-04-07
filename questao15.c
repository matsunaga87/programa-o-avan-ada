 //15)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare (const void * a, const void * b)
{
  return ( *(float*)a - *(float*)b );
}
int main(void)
{
    int x;
    int i,j;
    float aux;
    float *vetor;
    printf("digite o numero de elementos do vetor \n");
    scanf("%i",&x);                         		// define o número de elementos do array//
    vetor=(float*) malloc(x*sizeof(float));	 // aloca memória//
    for(i=0; i<x; i++)         // completar o array sendo que intercalando positivo com negativo//
    {
        vetor[i]=i*pow(-1,i);
    }
    for(i=0; i<x; i++)                      // exibir  o array sem esta na ordem crescente //
    {
        printf("%f ,",vetor[i]);
    }
    printf("\n");

    qsort(vetor,x,sizeof(float),compare);   //organiza o array em ordem crescente//

    for(i=0; i<x; i++)                      // exibe o array novamente mas agora em ordem crescente//
    {
        printf("%f ,",vetor[i]);
    }
    free(vetor);
    return(0);

}
