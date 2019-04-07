//17)
//comparando o tempo de cada resultado, o primeiro organizador teve o tempo de 33 segundos, o segundo usando qsoft teve um tempo de 0 segundos e por último aprimorando a primeira implementação teve um tempo de 29 segundos todos tinha 100000 elementos. Assim pode-se dizer que que o qsort e muito mais eficiente que os método de bolha.

//usando qsort
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int compare (const void * a, const void * b)
{
  return ( *(float*)a - *(float*)b );
}
int main(void)
{
    time_t t_ini,t_fim;
    float tempo;
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
    //for(i=0; i<x; i++)                      // exibir  o array sem esta na ordem crescente //
    //{
    //    printf("%f ,",vetor[i]);
    //}
    printf("\n");
    t_ini=time(NULL);
    qsort(vetor,x,sizeof(float),compare);   //organiza o array em ordem crescente//
    t_fim=time(NULL);
    tempo=difftime(t_fim,t_ini);
    //for(i=0; i<x; i++)                      // exibe o array novamente mas agora em ordem crescente//
    //{
     //   printf("%f ,",vetor[i]);
    //}
    printf("\n");
    printf("tempo= %f",tempo);
    free(vetor);
    return(0);

}

//usando o primeiro metodo criado
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    time_t t_ini,t_fim;
    float tempo;
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
   // for(i=0; i<x; i++)
  //  {
   //     printf("%f ,",vetor[i]);
   // }
    printf("\n");
    t_ini=time(NULL);
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
    t_fim=time(NULL);
    tempo=difftime(t_fim,t_ini);
    //for(i=0; i<x; i++)
   // {
   //     printf("%f ,",vetor[i]);
    //}
    printf("\n");
    printf("tempo= %f",tempo);
    free(vetor);
    return(0);

}

//usando o método aprimorado
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
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
    time_t t_ini,t_fim;
    float tempo;
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
   // for(i=0; i<x; i++)
   // {
   //     printf("%f ,",vetor[i]);
   // }
    printf("\n");

    t_ini=time(NULL);
    organiza(vetor,x);
    t_fim=time(NULL);
    tempo=difftime(t_fim,t_ini);
   // for(i=0; i<x; i++)
   // {
    //    printf("%f ,",vetor[i]);
   // }
    printf("\n");
    printf("tempo= %f",tempo);
    free(vetor);
    return(0);

}
