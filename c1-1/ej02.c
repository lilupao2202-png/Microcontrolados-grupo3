/*Ejercicio 2 
De un número entero positivo que está guardado en una 
variable llamada NUMERO, mostrar en pantalla su raíz cuadrada
 usando el método de Newton. Para este ejercicio debe realizarse 
 una función que acepte el valor la variable NUMERO y retorne el 
 resultado usando el método de Newton,sin usar una librería que contenga 
 esa función. Resultado esperado en pantalla: {'Número' : NUMERO, 'Raíz cuadrada usando Newton' : RESULTADO}*/
 
 #include<stdio.h>
double Raiz(int NUMERO){ //funcion para hallar la raiz con el metodo newton
double Xn=NUMERO; //iteracion inicial
double Xi; //valor a medida que avanzan las iteraciones

for(int i=0;i<20;i++){//se usan 20 iteraciones buscando la mayor exactitud
    Xi=0.5*(Xn+NUMERO/Xn);//formula del metodo
    Xn=Xi;//aqui se actualiza el nuevo valor de la iteracion y continua el proceso
}
return Xn;
    

}
int main(){
    int NUMERO=180107;
    double resultado=Raiz(NUMERO);
    printf("Número:%i, Raiz cuadrada usando Newton:%.6f",NUMERO,resultado);
    
    return 0;
}
