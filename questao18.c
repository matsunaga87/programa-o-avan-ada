//18)
#include <stdio.h>
#include <stdlib.h>

void fucao(int *vetor, int *vetor8, int *soma0, int T)
{
    int i;
    for(i=0; i<T; ++i)
    {
        soma0[i]=vetor[i]+vetor8[i];
    }
    for(i=0; i<T; ++i)
    {
        printf("%d, ",soma0[i]);
    }
}
int main(void)
{
    int T;
    int *vetor1,*vetor2,*soma;
    int i;
    printf("digite o tamanho do vetor \n");
    scanf("%i",&T);
    vetor1=malloc(T*sizeof(int));
    vetor2=malloc(T*sizeof(int));
    soma=malloc(T*sizeof(int));

    printf("complete o vetor 1\n");
    for(i=0; i<T; ++i)
    {
        printf(" o vetor1 %i recebe: ",i);
        scanf("%i",&vetor1[i]);
    }
    printf("complete o vetor 2\n");
    for(i=0; i<T; ++i)
    {
        printf(" o vetor2 %i recebe: ",i);
        scanf("%i",&vetor2[i]);
    }

    fucao(vetor1,vetor2,soma,T);


    free(vetor1);
    free(vetor2);
    free(soma);
    return 0;
}

