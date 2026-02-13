/*
Ejercicio 9
Simular un detector de secuencia para una cerradura electrónica.

El programa recibe una lista de bits (0 o 1) almacenados en una variable.
Si detecta que los últimos bits ingresados forman la secuencia 1011,
debe mostrar:

"Cerradura abierta"

Si el bit ingresado rompe la secuencia, no debe mostrar nada.
*/

#include <stdio.h>

/*
Verifica que el valor sea un bit válido (0 o 1)
*/
int es_bit_valido(int bit) {
    return (bit == 0 || bit == 1);
}

/*
Función que actualiza el estado de la máquina
según la secuencia objetivo: 1 → 0 → 1 → 1
*/
int actualizar_estado(int estado_actual, int bit_recibido) {

    switch (estado_actual) {

        case 0:
            if (bit_recibido == 1) return 1;
            return 0;

        case 1:
            if (bit_recibido == 0) return 2;
            if (bit_recibido == 1) return 1;
            return 0;

        case 2:
            if (bit_recibido == 1) return 3;
            return 0;

        case 3:
            if (bit_recibido == 1) return 4;
            if (bit_recibido == 0) return 2;
            return 0;

        case 4:
            return 0;
    }

    return 0;
}

int main(void) {

    /* Secuencia simulada de bits ingresados */
    int lista_bits[] = {1,0,1,0,1,0,1,0,1,1};
    int cantidad_bits = sizeof(lista_bits) / sizeof(lista_bits[0]);

    int estado_maquina = 0;

    for (int i = 0; i < cantidad_bits; i++) {

        int bit_actual = lista_bits[i];

        /* Validación del bit */
        if (!es_bit_valido(bit_actual)) {
            return 0;  // No imprime nada si el dato no es válido
        }

        estado_maquina = actualizar_estado(estado_maquina, bit_actual);

        if (estado_maquina == 4) {
            printf("Cerradura abierta\n");
            estado_maquina = 0;  // Reinicia para permitir nueva detección
        }
    }

    return 0;
}
