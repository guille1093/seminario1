//
//  main.c
//  test1
//
//  Created by Guillermo  Quintana on 19/04/2022.
//
//Header
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


//structures
typedef struct GRADOS
{
    float Celcius;
    float Kelvin;
}GRADOS;
struct GRADOS* ArrayGRADOS;


//prototypes
void Mostrar(int, GRADOS*);


//main
int main(void)
{
    const float k= 273.15;
    int cant=5;
    printf("carga ArrayGRADOS\n");
    //printf("Ingrese la cantidad de GRADOS a registrar\n");
    //scanf("%d",&cant);
    ArrayGRADOS = malloc(sizeof(GRADOS) * cant);
    for (int i=0; i<cant; i++){
        printf("\n Ingrese los grados en Celcius del elemento %d : ",i);
        scanf("%f",&ArrayGRADOS[i].Celcius);
        printf("\n");
        ArrayGRADOS[i].Kelvin=ArrayGRADOS[i].Celcius+k;
        Mostrar(i, ArrayGRADOS);
    }
    free(ArrayGRADOS);
    return 0;
}
//function body
void Mostrar(int c, GRADOS* ArrayGRADOS)
{
    printf("C: %.3f\t K: %.3f\n", ArrayGRADOS[c].Celcius,ArrayGRADOS[c].Kelvin);
}
