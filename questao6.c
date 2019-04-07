/*
6)
    printf("\ni = %d",i);       //i=(numeros rodados no for)//
    printf("vet[%d] = %.1f",i, vet[i]);    //vet[( número gerado pelo for)] =(número em float  guardado na memória de vet[i]) //
    printf("*(f + %d) = %.1f",i, *(f+i));      //(f+”número gerado pelo for”) =(número que f aponta sendo f=0 pois quando f=vet ele guarda a posição  do vet[0] assim *(f+i)=vet[i] ;//
    printf("&vet[%d] = %X",i, &vet[i]);     //&vet[(número gerado pelo for)= (valor hexadecimal que guarda o endereço de vet[i]   //
    printf("(f + %d) = %X",i, f+i);    //(f+(número gerado pelo for)) =(número hexadecimal do endereço de f+i sendo “f”  sempre igual ao primeiro vetor;

saída da maquina:
contador/valor/valor/endereco/endereco
i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 60FEF4(f + 0) = 60FEF4
i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 60FEF8(f + 1) = 60FEF8
i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 60FEFC(f + 2) = 60FEFC
i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 60FF00(f + 3) = 60FF00
i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 60FF04(f + 4) = 60FF04

Assim o código está condizente com o determinado.
/*
