/*
Ejercicio 1

Una variable llamada NUMERO contiene un entero de 4 dígitos 
(mayor o igual a 1000 y menor o igual a 9999).
Si está fuera del rango no se debe ejecutar el programa.

Mostrar en pantalla:
'Numero', 'Unidad', 'Decena', 'Centena', 'Unidad de mil'

Integrantes: (Colocar nombres aqui)
Compilador usado: GCC (OnlineGDB)
*/

#include <stdio.h>

int main(void) {

    int NUMERO = 4567;

    if (NUMERO < 1000 || NUMERO > 9999) {
        printf("{ 'Error' : 'El numero no es de 4 digitos, el programa no se puede ejecutar' }\n");
        return 0;
    }

    int UNIDAD = NUMERO % 10;
    int DECENA = (NUMERO / 10) % 10;
    int CENTENA = (NUMERO / 100) % 10;
    int UNIDAD_DE_MIL = NUMERO / 1000;

    printf("{ 'Numero' : %d, 'Unidad' : %d, 'Decena' : %d, 'Centena' : %d, 'Unidad de mil' : %d }\n",
           NUMERO, UNIDAD, DECENA, CENTENA, UNIDAD_DE_MIL);

    return 0;
}
