
/* Se puede calcular el cuadrado de un número NUMERO al sumar los primeros NUMERO números impares. 
Con esta lógica, el cuadrado del número 7 es la sumatoria de los primeros 7 números impares, es decir 1+3+5+7+9+11+13=49. 
Crear un programa que pida al usuario un número y se almacene en la variable NUMERO 
y luego imprima la suma de todos los números impares y su resultado.

Compilador usado:
OnlineGDB*/
#include <stdio.h>

/*
Función que calcula la suma de los primeros NUMERO números impares
*/
int calcular_cuadrado_por_impares(int NUMERO) {

    int suma_impares = 0;
    int numero_impar_actual = 1;

    for (int contador = 1; contador <= NUMERO; contador++) {
        suma_impares = suma_impares + numero_impar_actual;
        numero_impar_actual = numero_impar_actual + 2;
    }

    return suma_impares;
}

int main() {

    int NUMERO;

    printf("Ingrese un numero entero mayor que 0: ");
    scanf("%d", &NUMERO);

    // Validación
    if (NUMERO <= 0) {
        printf("Error: NUMERO debe ser mayor que 0\n");
        return 0;
    }

    int resultado = calcular_cuadrado_por_impares(NUMERO);

    printf("{'NUMERO' : %d, 'Suma impares' : %d, 'Resultado (cuadrado)' : %d}\n",
           NUMERO, resultado, resultado);

    return 0;
}