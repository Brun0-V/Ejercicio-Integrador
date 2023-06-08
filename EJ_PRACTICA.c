#include <stdio.h>
#define LENGTH 99


void Bubble_Sort(int vector[], int length);

int main(){
    float promedio = 0.0;
    int mediana;
    int freq[11] = {0};
    int respuesta[ LENGTH ] =            
      { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7 };
    
    Bubble_Sort(respuesta, LENGTH);

    for (int i = 0; i < LENGTH; i++){
        promedio += respuesta [i];
        ++freq[ respuesta[ i ]];
    }
    promedio = promedio / LENGTH;
    printf("El promedio es de: %.2f\n", promedio);
    mediana = respuesta [LENGTH / 2];
    printf("Mediana (elemento central del vector ordenado): %d\n", mediana);

    for (int i = 1; i < 9; i++){
        printf("Cantidad de notas con %d: %d\n", i, freq[i]);
    }
    return 0;
}

void Bubble_Sort(int vector[], int length)
{
    int i, j;       // Se crea una variable para el numero de pasadas (i) y otra para moverse dentro del array (j)
    float swap;     // Se crea una variable auxiliar para poder intercambiar los valores dentro del array
    for (i = 0; i < length; i++)                // Bucle externo que controla las pasadas completas a través del array
    {
        for (j = 0; j < length - i - 1; j++)    // Bucle interno que realiza las comparaciones y los intercambios en cada pasada
        {
            if (vector[j] > vector[j + 1])      // Compara el elemento actual con el siguiente elemento
            {
                swap = vector[j];               // Realiza el intercambio utilizando la variable auxiliar
                vector[j] = vector[j + 1];
                vector[j + 1] = swap;
            }
        }
    }
}