#include<stdio.h>
#include<math.h>


float CuadradoDeUnNumero(float numero1, float numero2){
    float resultado;
    resultado = pow(numero1, numero2);
    return resultado;
}

void CuadradoDeUnNumeroVoid(float numero1, float numero2){
    float resultado;
    resultado = pow(numero1, numero2);
    printf("El resultado de la potencia es de:  %f ",resultado);
}

void MostrarDireccionYContenido(float numero){
    printf("1... La direccion de memoria de la variable es de %f \n", &numero);
    printf("2... El contenido de la variable es de: %f \n", numero);
}


void Invertir(float *a, float *b){
    int aux;
    aux = (*b);
    *b = (*a);
    *a = aux;
}

void orden(float *a, float *b){
    if ((*a) > (*b))
    {
        Invertir(a, b);
    }
}

int main(void){
    float numero1, numero2;
    printf("Ingrese un numero para trabajar: ");
    scanf("%f",&numero1);
    printf("\nIngrese un segundo numero para trabajr: ");
    scanf("%f",&numero2);

    printf("nEl resultado de elevar el primero numero al segundo es: \n");
    float cuadrado;

    printf("El valor del primer numero es de: %f", numero1);
    printf("\nEl valor del segundo numero es de: %f", numero2);


    cuadrado = CuadradoDeUnNumero(numero1, numero2);
    printf("\n\n");
    CuadradoDeUnNumeroVoid(numero1, numero2);

    
    printf("\n\n");
    MostrarDireccionYContenido(numero1);
    printf("\n\n");

    printf("El valor del primer numero es de: %f", numero1);
    printf("\nEl valor del segundo numero es de: %f", numero2);

    printf("\n\n--- Uso de la funcion Invertir ---\n");
    Invertir(&numero1, &numero2);

    printf("El valor del primer numero es de: %f", numero1);
    printf("\nEl valor del segundo numero es de: %f", numero2);

    printf("\n\n--- Uso de la funcion orden ---\n");
    orden(&numero1, &numero2);

    printf("El numero mayor es: %f\n", numero1);
    printf("El numero menor es: %f", numero2);

    return 0;
}

