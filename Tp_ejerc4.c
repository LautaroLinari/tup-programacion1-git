#include <stdio.h>
#include <string.h>
/*
4) Escribir un programa que para una fecha ingresada por un usuario (año, mes, día)
determine:
a) Si es una fecha válida.
b) Si el año es bisiesto o no.
c) La cantidad de días que faltan para fin de mes.
Nota: un año es bisiesto si es un número divisible por 4, pero no si es divisible por 100, excepto
que también sea divisible por 400.
*/
int main()
{
    int dia, mes, anio;
    int case1 = 31,case2 = 30,case3 = 29,case4 = 28;
    int result1=0, result2=0, result3=0,result4=0;
    int vacio;

    printf( "\n   Introduzca d%ca: ", 161 );
    scanf( "%d", &dia );
    printf( "\n   Introduzca mes: " );
    scanf( "%d", &mes );
    printf( "\n   Introduzca a%co: ", 164 );
    scanf( "%d", &anio );

    if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( dia >= 1 && dia <= 31 )
                          printf( "\n   FECHA CORRECTA \n" );
                          if ( dia >= 1 && dia <= 31 )
                          {
                              result1 = case1 - dia;
                              printf ("  Faltan %d dias para terminar el mes \n ",result1);
                          }
                      else
                          printf( "\n   FECHA INCORRECTA \n" );
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( dia >= 1 && dia <= 30 )
                          printf( "\n   FECHA CORRECTA \n" );
                          if ( dia >= 1 && dia <= 30 )
                          {
                              result2 = case2 - dia;
                              printf("  Faltan %d dias para terminar el mes \n",result2);
                          }
                          
                      else
                          printf( "\n   FECHA INCORRECTA \n" );
                      break;

            case  2 : if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
                          if ( dia >= 1 && dia <= 29 )
                              printf( "\n   FECHA CORRECTA \n" );
                              if ( dia >= 1 && dia <= 29 )
                              {
                                  result3 = case3 - dia;
                                  printf("  Faltan %d dias para terminar el mes \n",result3);
                              }
                              
                          else
                              printf( "\n   FECHA INCORRECTA \n" );
                              if (vacio)
                              {
                                  /* code */
                              }
                              
                      else
                          if ( dia >= 1 && dia <= 28 )
                              printf( "\n   FECHA CORRECTA \n" );
                              if ( dia >= 1 && dia <= 28 )
                              {
                                  result4 = case4 - dia;
                                  printf("  Faltan %d dias para terminar el mes \n",result4);
                              }
                              
                          else
                              printf( "\n   FECHA INCORRECTA \n" );
        }
    }
    else
        printf( "\n   FECHA INCORRECTA \n" );


int iBandera = 0;               // INICIO BANDERA (MARCA = 0  -- APAGADA)
if(anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
    iBandera = 1;           // Activo la bandera si esl año es bisiesto

if (iBandera == 1)
{
    printf("  el A%co ES bisiesto \n",164);
}
else
{
    printf("  el A%co NO es bisiesto \n",164);
}
    return 0;
}