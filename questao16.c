//16)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
float organiza(float *vetor,int x){
int i,j,aux;
for(i=0;i<x;i++){
    for(j=1;j<x;++j){
        if(vetor[j-1]>vetor[j]){
            aux=vetor[j-1];
            vetor[j-1]=vetor[j];
            vetor[j]=aux;
        }
    }
}

return 0;
}

int main(void)
{
    int x;
    int i,j;
    float aux;
    float *vetor;
    printf("digite o numero de elementos do vetor \n");
    scanf("%i",&x);
    vetor=(float*) malloc(x*sizeof(float));
    for(i=0; i<x; i++)
    {
        vetor[i]=i*pow(-1,i);
    }
    for(i=0; i<x; i++)
    {
        printf("%f ,",vetor[i]);
    }
    printf("\n");
    organiza(vetor,x);

    for(i=0; i<x; i++)
    {
        printf("%f ,",vetor[i]);
    }
    free(vetor);
    return(0);

}
