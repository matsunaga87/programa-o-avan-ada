#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char ***matriz;
    int x,y,z,fatia;
    int i, j, k;
    float cx,cy,cz,elipsoide,rx,rz,ry,raio;
    printf("digite o x da esfera:\n");
    scanf("%i",&x);
    printf("digite o y da esfera:\n");
    scanf("%i",&y);
    printf("digite o z da esfera:\n");
    scanf("%i",&z);
    printf("digite a  fatia que vc quer ver \n");
    scanf("%i",&fatia);
    printf("digite a o centro x que vc quer desenha a elipsoide \n");
    scanf("%f",&cx);
    printf("digite a o centro y que vc quer desenha a elipsoide \n");
    scanf("%f",&cy);
    printf("digite a o centro z que vc quer desenha a elipsoide \n");
    scanf("%f",&cz);
    printf("digite a o raio rx: \n");
    scanf("%f",&rx);
    printf("digite a o raio ry\n");
    scanf("%f",&ry);
    printf("digite a o raio rz \n");
    scanf("%f",&rz);
    matriz=malloc(x*sizeof(char**));
    matriz[0]=malloc(x*y*sizeof(char*));
    matriz[0][0]=malloc(x*y*z*sizeof(char));

    for(i=1;i<x;++i){
        matriz[i]=matriz[i-1]+y;
    }

    for(i=0;i<x;++i){
        for(j=1; j<y; ++j){
            matriz[i][j]=matriz[i][j-1]+z;
        }
        if(i==x-1){
            break;
        }
        matriz[i+1][0]=matriz[i][j-1]+z;
    }
    for(i=0; i<x; ++i){
        for(j=0; j<y; ++j){
            for(k=0; k<z; ++k){
                    elipsoide=pow((i-cx)/(float)rx,2)+pow((j-cy)/(float)ry,2)+pow((k-cz)/(float)rz,2);
                if(elipsoide<=1){
                matriz[i][j][k]='1';
                }
                else{
                    matriz[i][j][k]='0';
                }

            }
        }

    }
    printf("\n");
    for(j=0; j<y; ++j){
        for(k=0; k<z; ++k)
            {
            printf("%c ",matriz[fatia][j][k]);
            }
    printf("\n");
    }

    printf("\n \n \n");



    free(matriz[0][0]);
    free(matriz[0]);
    free(matriz);
    return 0;
}
