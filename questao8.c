/*8)
p= mat +1; est� correto pois p aponta para o endere�o de
mem�ria do mat[0], e como mat � um vetor ele  organizado em o
rdem crescente ele apontaria   para o endere�o de mat +1 que
seria o endere�o de mat[1] sabendo que come�a sempre de mat[0].

p=mat++; n�o funciona  o fato disso n�o funciona e
st� ligado a prioridade de ordem em que mat ainda na
convertido em endere�o de mem�ria.
p=++mat;  mesmo de cima
x=(*mat)++ ; est� correto pois x = o valor de mat[0] e
somando +1 e para esse valor;
*/
