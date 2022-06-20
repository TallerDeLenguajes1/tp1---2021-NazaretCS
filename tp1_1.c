#include<stdio.h>

int main(void){
    printf("Hola Mundo\n\n");

    int numero, *puntero;
    numero = 30;
    puntero = &numero;
    printf("f)  El contenido del puntero es:  %d  \n", *puntero);
    printf("g)  La direccion de memoria a la que apunta el puntero es:  %d \n", puntero);
    printf("h)  La direccion de memoria de la variable es:  %d  \n",&numero);
    printf("i)  La direccion de memoria del puntero es:  %d \n",&puntero);
    printf("j)  El tamaño de variable utilizada es de:  %d \n",sizeof(numero));
    

    return(0);
}