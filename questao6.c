/*
6)
    printf("\ni = %d",i);       //i=(numeros rodados no for)//
    printf("vet[%d] = %.1f",i, vet[i]);    //vet[( n�mero gerado pelo for)] =(n�mero em float  guardado na mem�ria de vet[i]) //
    printf("*(f + %d) = %.1f",i, *(f+i));      //(f+�n�mero gerado pelo for�) =(n�mero que f aponta sendo f=0 pois quando f=vet ele guarda a posi��o  do vet[0] assim *(f+i)=vet[i] ;//
    printf("&vet[%d] = %X",i, &vet[i]);     //&vet[(n�mero gerado pelo for)= (valor hexadecimal que guarda o endere�o de vet[i]   //
    printf("(f + %d) = %X",i, f+i);    //(f+(n�mero gerado pelo for)) =(n�mero hexadecimal do endere�o de f+i sendo �f�  sempre igual ao primeiro vetor;

sa�da da maquina:
contador/valor/valor/endereco/endereco
i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 60FEF4(f + 0) = 60FEF4
i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 60FEF8(f + 1) = 60FEF8
i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 60FEFC(f + 2) = 60FEFC
i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 60FF00(f + 3) = 60FF00
i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 60FF04(f + 4) = 60FF04

Assim o c�digo est� condizente com o determinado.
/*
