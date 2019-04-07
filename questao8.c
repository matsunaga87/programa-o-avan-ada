/*8)
p= mat +1; está correto pois p aponta para o endereço de
memória do mat[0], e como mat é um vetor ele  organizado em o
rdem crescente ele apontaria   para o endereço de mat +1 que
seria o endereço de mat[1] sabendo que começa sempre de mat[0].

p=mat++; não funciona  o fato disso não funciona e
stá ligado a prioridade de ordem em que mat ainda na
convertido em endereço de memória.
p=++mat;  mesmo de cima
x=(*mat)++ ; está correto pois x = o valor de mat[0] e
somando +1 e para esse valor;
*/
