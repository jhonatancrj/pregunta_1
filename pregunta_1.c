#include <stdio.h>

// Función para sumar dos números
void sumar(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

// Función para restar dos números
void restar(int *a, int *b, int *resultado) {
    *resultado = *a - *b;
}

// Función para multiplicar dos números usando sumas
void multiplicar(int *a, int *b, int *resultado) {
    *resultado = 0;
    for (int i = 0; i < *b; i++) {
        *resultado += *a;
    }
}

// Función para dividir dos números usando restas
void dividir(int *a, int *b, int *resultado) {
    *resultado = 0;
    int dividendo = *a;
    int divisor = *b;
    
    while (dividendo >= divisor) {
        dividendo -= divisor;
        (*resultado)++;
    }
}

int main() {
    int num1 = 10;
    int num2 = 2;
    int resultado;

    // Suma
    sumar(&num1, &num2, &resultado);
    printf("Suma: %d + %d = %d\n", num1, num2, resultado);

    // Resta
    restar(&num1, &num2, &resultado);
    printf("Resta: %d - %d = %d\n", num1, num2, resultado);

    // Multiplicación
    multiplicar(&num1, &num2, &resultado);
    printf("Multiplicación: %d * %d = %d\n", num1, num2, resultado);

    // División
    dividir(&num1, &num2, &resultado);
    printf("División: %d / %d = %d\n", num1, num2, resultado);

    return 0;
}
