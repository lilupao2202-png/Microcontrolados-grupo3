/*
Ejercicio 8
Crear una función que reciba tres variables booleanas (A, B, C)
y retorne el resultado de la expresión lógica:

F = (A · B) + C̅
*/

#include <stdio.h>

/*
Se verifica si el valor recibido es booleano válido (0 o 1)
*/
int es_valor_booleano(int valor) {
    return (valor == 0 || valor == 1);
}

/*
Se calcula la función lógica:
F = (A AND B) OR (NOT C)
*/
int calcular_funcion_logica(int variable_A, int variable_B, int variable_C) {
    int resultado_logico = (variable_A && variable_B) || (!variable_C);
    return resultado_logico ? 1 : 0;
}

int main(void) {

    printf("Tabla de verdad para F = (A·B) + C̅\n");
    printf("----------------------------------\n");
    printf(" A  B  C | F\n");
    printf("----------|---\n");

    for (int variable_A = 0; variable_A <= 1; variable_A++) {
        for (int variable_B = 0; variable_B <= 1; variable_B++) {
            for (int variable_C = 0; variable_C <= 1; variable_C++) {

                /* En este caso siempre serán booleanos porque los for van de 0 a 1 */
                if (!es_valor_booleano(variable_A) ||
                    !es_valor_booleano(variable_B) ||
                    !es_valor_booleano(variable_C)) {
                    printf("Error: valores no booleanos. El programa no se puede ejecutar.\n");
                    return 0;
                }

                int resultado_funcion = calcular_funcion_logica(variable_A, variable_B, variable_C);

                printf(" %d  %d  %d | %d\n",
                       variable_A, variable_B, variable_C,
                       resultado_funcion);
            }
        }
    }

    return 0;
}