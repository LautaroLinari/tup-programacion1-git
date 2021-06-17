#include <stdio.h>
/*
1)- Realizar un programa que lea desde el teclado el ancho, alto y profundidad de un
prisma rectangular (cuerpo geométrico de 6 caras rectangulares, como una caja) e
informe su volumen y área de la superficie formada por sus caras.
*/
main ()
{
//Asigno variables    
float caraA = 0;
float caraB = 0;
float altura = 0;

printf ("Ingrese el valor numerico de la cara de una base (a): ");
scanf ("%f",&caraA); //Se ingresa una cara

printf ("Ingrese el valor numerico de la cara de otra base (b): ");
scanf ("%f",&caraB); //Se ingresa otra cara

printf ("Ingrese la altura del prisma:");
scanf ("%f",&altura); //Se ingresa altura
printf ("\n");

//realizo formulas de area y volumen de un prisma rectangular
printf ("El area del prisma es: %1.3f",(2 * ((caraA * caraB) + (caraA * altura) + (caraB * altura)))); 
printf ("\n");
printf ("El volumen del prisma es: %1.3f",(caraA * caraB * altura));



}