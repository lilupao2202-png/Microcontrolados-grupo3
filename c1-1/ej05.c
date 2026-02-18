/*
Ejercicio: 5
Enunciado:
Preguntar al usuario un número entero y almacenar en la variable NUMERO. 
Imprimir el valor de la posición NUMERO de la secuencia de Fibonacci asumiendo que f0 = 0 y f1 = 1. 
Verificar que NUMERO debe ser >= 2, en caso contrario, mostrar un mensaje que NUMERO debe cumplir esa condición.

Compilador usado:
OnlineGDB
*/

#include <stdio.h>

int main() {
    int NUMERO =7; //Valor a usar 
    int f0=0;
    int f1=1;
    int fi;

    // Validamos que el numero se pueda usar
    if (NUMERO < 2) {
        printf("NUMERO debe ser mayor o igual a 2\n");
        return 0;

    }
    // Iteracion
    for (int i = 2; i <= NUMERO; i++) {
        fi = f0 + f1;
        f0 = f1;
        f1 = fi;

    }
    printf("{'La posicion es' : %d, 'y la secuencia de Fibonacci es' : %d}\n", NUMERO, fi);

}