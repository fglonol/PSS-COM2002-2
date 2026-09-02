#include <stdio.h>

unsigned char encender_bit(unsigned char num, int pos){

    return num | (1 << pos);

}

int consultar_bit(unsigned char num, int pos){

    return (num >> pos) & 1;

}

int main(){

    unsigned char valor = 0;
    valor = encender_bit(valor, 3);
    printf("Bit consultado: %d\n", valor);
    printf("Bit en posicion 3: %d\n", consultar_bit(valor, 3));
    return 0;
}
