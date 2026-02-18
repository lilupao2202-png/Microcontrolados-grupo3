/*
Ejercicio: 7
Enunciado:
En sistemas embebidos, los registros suelen empaquetar varios estados. 
Leer una variable de 8 bits llamada REGISTRO_ESTADO. 
El programa debe extraer y mostrar por separado el valor de los 4 bits 
menos significativos (nibble inferior) y el estado (0 o 1) del bit número 5. 
Usar exclusivamente operadores de bits (&, >>).

Compilador usado:
OnlineGDB
*/ 

#include <stdio.h>

int main() {

    unsigned char REGISTRO_ESTADO = 0b11011111;  // 8 bits de 0–255, unsigned char ocupa 8 bits y evita numeros negativos

    // Validamos que el tipo de dato sea correcto
    if (sizeof(REGISTRO_ESTADO) != 1) { // verificamos que sea 1 byte (8 bits) con sizedof
        printf("El tipo de dato no es correcto y el programa no se puede ejecutar.");
        return 0;
    }

    unsigned char nibble_inferior = REGISTRO_ESTADO & 0b00001111; // obtenemos los 4 bits menos significativos usando AND con 00001111 (algebra booleana)
    unsigned char bit5 = (REGISTRO_ESTADO >> 5) & 0b00000001; // >> 5 es para mover al bit 5 a la posicion 0 y luego usar el &

    printf("{'Registro' : %u, 'Nibble inferior' : %u, 'Bit 5' : %u}", // usamos %u para imprimir unsigned char como numero entero sin signo
           REGISTRO_ESTADO, nibble_inferior, bit5);

    return 0;
}
