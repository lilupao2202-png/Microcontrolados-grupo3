/******************************************************************************
Crear un programa que pida al usuario un numero entero positivo y almacenarlo en la variable NUMERO.
Usando NUMERO como limite, aplicar la Criba de Eratostenes e imprimir en pantalla todos los numeros menores
a NUMERO que son primos.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> //bibloteca para usar la funcion que reemplaza al scanf//

void criba(int NUMERO) {/**se usa void por que la funcion de devuelve ningun valor, evitando tener que usar return´s
innecesarios al final del codigo**/

	int primo[NUMERO];


	for (int i = 0; i < NUMERO; i++) {
		primo[i] = 1;
	}
	if (NUMERO > 0) primo[0] = 0;
	if (NUMERO > 1) primo[1] = 0;


	for (int i = 2; i * i < NUMERO; i++) {//esta es la condicicion que determina si son primos o no//
		if (primo[i] == 1) {
			for (int j = i * i; j < NUMERO; j += i) {
				primo[j] = 0;
			}
		}
	}

	printf("Los numeros primos menores a %d son:\n", NUMERO);
	for (int i = 2; i < NUMERO; i++) {
		if (primo[i] == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	int NUMERO;
    char buffer[100];  //en esta parte se va a guardar lo que el usuario inglese en el print de abajo//
	printf("Digite aqui su numero: ");
	fgets(buffer, sizeof(buffer), stdin);//esto reemplaza al scanf,se encarga de leer lo que se ingreso al buffer//
        NUMERO = atoi(buffer);//convierte el valor guardado en entero//

	criba(NUMERO);

	return 0;
}
