/*
Ejercicio 6
Leer un número entero en la variable VALOR. Utilizar operadores de bits (bitwise)
para determinar si el número es par o impar (verificando el bit menos significativo)
y mostrar el resultado. No está permitido usar el operador de módulo (%).
*/

#include <stdio.h>

int main(void) {
    int VALOR = 2202;  
    int lsb = VALOR & 1;

    if (lsb == 0) {
        printf("{ 'VALOR' : %d, 'Resultado' : 'PAR' }\n", VALOR);
    } else {
        printf("{ 'VALOR' : %d, 'Resultado' : 'IMPAR' }\n", VALOR);
    }

    return 0;
}