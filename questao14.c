//14)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    for(j=1; j<x; ++j)
    {
        for(i=1; i<x; ++i)
        {
            if(vetor[i-1]>vetor[i])
            {
                aux=vetor[i-1];
                vetor[i-1]=vetor[i];
                vetor[i]=aux;
            }

        }
    }
    for(i=0; i<x; i++)
    {
        printf("%f ,",vetor[i]);
    }
    free(vetor);
    return(0);

}
