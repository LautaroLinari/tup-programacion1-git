#include <stdio.h>
/*
 INSERTION SORT:
 -Es un algoritmo simple que funciona de manera similar a la clasificacion de naipes/cartas en sus manos.
 -La matriz se divide en una parte ordenada y otra sin clasificar.
 -Los valores de la parte sin clasificar se seleccionan y colocan en la posición correcta en la parte clasificada.

 Algoritmo:
 1- Itera de arr[1] a arr[n] sobre la matriz.
 2- Compara el elemento actual(llamado clave) con su predecesor.
 3- Si el elemento clave es más pequeño que su predecesor, compárelo con los elementos anteriores,
    Mueva los elementos mayores una posición hacia arriba para dejar espacio para el elemento intercambiado.

 Ejemplo:
 12, 11, 13, 5, 6
 Hagamos un bucle para i = 1 (segundo elemento de la matriz) a 4 (último elemento de la matriz)
 i= 1: Dado que 11 es menor que 12, mueva 12 e inserte 11 antes de 12
 11, 12, 13, 5, 6
 i= 2: 13 permanecerá en su posición ya que todos los elementos en A [0..I-1] son menores que 13
 11, 12, 13, 5, 6
 i= 3: 5 se mueve al principio y todos los demás elementos del 11 al 13 se moverán una posición por delante de su posición actual.
 5, 11, 12, 13, 6
 i= 4: 6 se mueve a la posición después de la 5, y los elementos del 11 al 13 se moverán una posición por delante de su posición actual.
 5, 6, 11, 12, 13


 Funcion para ordenar la matriz por insertion sort */
void insertionSort(int arr[], int n)
{
    int i, clave, j;
    for (i = 1; i < n; i++) {
        clave = arr[i];
        j = i - 1;
 
        /* Mueve los elementos del array que son mayor que la clave a una posicion por delante de su actual */
        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = clave;
    }
}
 
// Una funcion de utilidad para mostrar/imprimir una matriz
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
}
 
/* Probar el algoritmo insertion sort */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}