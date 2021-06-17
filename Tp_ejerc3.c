#include <stdio.h>
#include <string.h>
/*
3) realizar una función que reciba un caracter en minúscula como parámetro y devuelva
convertido a mayúscula. Hacer la función inversa, que convierta de mayúscula a
minúscula. Crear un programa que utilice ambas funciones.
*/
main ()
{ 
//ASIGNO VARIABLES
char cLetra[256];
char Minuscula[256];
char Mayuscula[256];

printf ("Ingrese una letra:"); //Se ingresa la letra o texto
scanf ("%s",&cLetra);

strcpy (Mayuscula,cLetra);
strcpy (Minuscula,cLetra);

strupr (Mayuscula); //Convierte en mayus
strlwr (Minuscula); //Convierte en minus

printf ("Letra original: %s \n\n",&cLetra); //muestra letra o texto original
printf ("Letra en Mayuscula: %s \n ",Mayuscula); //lo muestra en mayuscula
printf ("Letra en Minuscula: %s \n",Minuscula); //lo muestra en minuscula

}


