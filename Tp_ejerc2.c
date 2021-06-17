#include <stdio.h>
/*
2) Un cyber café necesita un programa para procesar la información relacionada con las
computadoras que posee. Se necesita leer cantidad de computadoras, y precio por hora
de uso. Luego ingresar la cantidad de horas de uso de cada computadora en el mes.
se pide:
a) calcular el monto total recaudado por el cyber en el mes.
b) informar cual fue la computadora con menor cantidad de horas de uso y monto recaudado
por la misma.
*/
float main()
{

    float precioxhora = 0;
    int cantidadpc = 0;
    int computadoras[cantidadpc];
    float horasenpc[cantidadpc];
    float precioxpc[cantidadpc];
    float suma = 0, suma1= 0;
    float comparacion=0, x = 0;
    int menor = 800, hsminima=0;

    printf("Ingrese la cantidad de computadores que tiene: ");

    for (int i = 1; i <= cantidadpc; i++)
    {
        computadoras[i] = 0;
    }
    for (int i = 1; i < cantidadpc; i++)
    {
        precioxpc[i] = 0;
    }
    scanf ("%i",&cantidadpc);

    printf("Ingrese el precio de la hora en el cyber: ");
    fflush(stdin);
    scanf("%f",&precioxhora);

    for (int i = 1; i <= cantidadpc; i++)
    {
        printf("Ingrese cuantas horas trabajo la computadora %i :",i);
        fflush(stdin);
        scanf("%f",&horasenpc[i]);
        precioxpc[i] = (horasenpc[i]) * (precioxhora);
        suma += precioxpc[i];
        x= horasenpc[i];
        if (horasenpc[i] <menor)
        {menor = i;
        hsminima = horasenpc[i];
        }
        
    }
        printf("\n El monto total es %1.2f",suma);
        suma1 = hsminima*precioxhora;
        printf("\n La computadora %i es la que menos recaudo con $%1.2f y %ihs de trabajo \n", menor,suma1,hsminima);

}


