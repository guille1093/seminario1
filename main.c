#include <stdio.h>
#include <stdlib.h>
#include<string.h>



/* este ejemplo usa structura, declara 2 arrays de estructuras

y pasa como parametros a una funcion los arrays de estructuras


*/



struct Autos
{
    int patente;
    char marca[10];
    int anio;
};
struct Autos ArrayAutos[3];

void BuscarXAnio(int ani, struct Autos ArrayAutos[3])
{
    struct Autos ArrayAutosAnio[3];
    int j;
    int x=0;

    for(j=0; j<3; j++){
        if(ArrayAutos[j].anio==ani){
           ArrayAutosAnio[x]=ArrayAutos[j];
           x++;
        }

    }
    for(j=0; j<x; j++){
        printf("patente: %d\t marca: %s\t anio: %d\n", ArrayAutosAnio[j].patente,ArrayAutosAnio[j].marca,ArrayAutosAnio[j].anio);
    }

}


int main(void)
{
    int i;
    int anio;
    printf("carga ArrayAutos\n");

    for (i=0; i<3; i++){
        printf("\n ingrese la patente: \n");
        scanf("%d",&ArrayAutos[i].patente);
        printf("\n ingrese la marca: \n");
        scanf("%s",ArrayAutos[i].marca);
        printf("\n ingrese el anio: \n");
        scanf("%d", &ArrayAutos[i].anio);

    }
    printf("\n Ingrese un anio, por favor\n");
    scanf("%d",&anio);
    BuscarXAnio(anio, ArrayAutos);

    return 0;
}


