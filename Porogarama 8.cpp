#include<iostream>
//Definimos la función fuera de main
int mayor(int num1, int num2, int num3){
	int respuesta;
	if(num1>num2 && num1>num3){
		respuesta=num1;
	}
	if(num2>num3 && num2>num1){
		respuesta=num2;
	}
	if(num3>num1 && num3>num2){
		respuesta=num3;
	}
	return respuesta;
}
