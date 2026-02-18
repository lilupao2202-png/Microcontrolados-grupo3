/*
Ejercicio: 10
Enunciado:
Los sensores analógicos suelen presentar ruido. Definir una lista de 10 lecturas llamada LECTURAS_ADC.
Crear un programa que calcule una nueva lista donde cada elemento sea el promedio de la lectura actual 
y las dos anteriores (esto se le conoce como filtro de media móvil). 
Para la primera posición, segunda y última posición de la nueva lista, dejar en 0.

Compilador usado:
OnlineGDB */

#include <stdio.h>

int main() {

    int LECTURAS_ADC[10] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550}; // Lista de ejemplo con 10 lecturas

     // Nueva lista filtrada
    float FILTRADAS[10]; //  float porque son decimales los promedios

    // Regla: primera, segunda y ultima en 0
    FILTRADAS[0] = 0;
    FILTRADAS[1] = 0;
    FILTRADAS[9] = 0;

    // Filtro de media móvil de 3 puntos
    for (int i = 2; i < 9; i++) {
        FILTRADAS[i] = (LECTURAS_ADC[i] 
                      + LECTURAS_ADC[i - 1] 
                      + LECTURAS_ADC[i - 2]) / 3.0; //para obtener el promedio de los ultimos 3 
    }

    // Mostrar resultados con iteracion
    printf("Lecturas ADC:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", LECTURAS_ADC[i]);
    }

    printf("\n\nLecturas filtradas (media movil):\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", FILTRADAS[i]);
    }

    return 0;
}