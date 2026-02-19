/*
Ejercicio: 5

Enunciado:
Preguntar al usuario un número entero y almacenarlo en la variable NUMERO.
Imprimir el valor de la posición NUMERO de la secuencia de Fibonacci
asumiendo que f0 = 0 y f1 = 1.
NUMERO debe ser >= 2.

Compilador usado:
OnlineGDB
*/

#include <stdio.h>

/*
Función que calcula el término de Fibonacci en la posición NUMERO
*/
int calcular_fibonacci(int NUMERO) {

    int termino_anterior = 0;   // f0
    int termino_actual = 1;     // f1
    int termino_siguiente;

    for (int indice = 2; indice <= NUMERO; indice++) {
        termino_siguiente = termino_anterior + termino_actual;
        termino_anterior = termino_actual;
        termino_actual = termino_siguiente;
    }

    return termino_actual;
}

int main() {

    int NUMERO;

    printf("Ingrese un numero entero mayor o igual a 2: ");
    scanf("%d", &NUMERO);

    // Validación
    if (NUMERO < 2) {
        printf("Error: NUMERO debe ser mayor o igual a 2\n");
        return 0;
    }

    int resultado = calcular_fibonacci(NUMERO);

    printf("{'NUMERO' : %d, 'Fibonacci' : %d}\n", NUMERO, resultado);

    return 0;
}
