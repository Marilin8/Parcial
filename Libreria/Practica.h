//LIBRERIA PARACALCULAR AREA DE FIGURAS GEOMETRICAS

//declaramos la libreria predeterminada
#include <iostream>

//Declaramos una constante de pi
#define PI 3.1416

//definimos nuestro espacio de nombres
using namespace std;


/*vamos a declarar una primer funcion que nos servirá para calclular*
el area de un circulo pasando un parametro*/
//el parametro que pasaremos es el Radio y este lo nombrearemos R

float area_circulo(float R) {
	//Definimos la formula para clacular el area de un circulo A= Radio * Radio * PI
	return PI*R*R;
	
}

/*Vamos a declarar una funcion para calcular el area de un cuadrado, donde pasaremos
como parametro cada lado y lo nombraremo L*/
float area_cuadrado(float L){
	//Definimos la formula para calcular el area de un cuadrado A= L * L
	return L*L;
}


/*Vamos a declarar una funcion para calcular el area de un triangulo, donde pasaremos 2 parametros Base y ALTURA
donde Base = B y Altura= H*/
float area_triangulo(float B, float H){
	//DEFINIMOS LA FORMULA A= B * H /2
	return (B*H)/2;
}

/*Vamos a declarar una funcion para calcular el area de un trapecio */
float area_trapecio(float B, float b, float H){
	//Definimos la formula A= (B + b)*H/2
	return (B+b/2)*H;
}

/*Vamos a declarar una funcion para calcular el area de un rectangulo, donde pasaremos 2 parametros base y altura */
float area_rectangulo(float B, float H){
	//DEFINIMOS LA FORMULA A= B * H 
	return (B*H);
}

float area_rombo (float D, float d){
	return (D * d)/2;
}
	
	
	
	
