#include <stdio.h>
#include <stdlib.h>
#include<string.h>



/* este ejemplo usa structura, declara 2 arrays de estructuras

y pasa como parametros a una funcion los arrays de estructuras


*/
typedef struct Autos
{
    int patente;
    char marca[10];
    int año;
}Autos;
struct Autos* ArrayAutos;


//prototype
void BuscarXaño(int, int, Autos*);



int main(void)
{
    int i;
    int año;
    int cant;
    printf("carga ArrayAutos\n");
    printf("Ingrese la cantidad de autos a registrar\n");
    scanf("%d",&cant);
    ArrayAutos = malloc(sizeof(Autos) * cant);
    for (i=0; i<cant; i++){
        printf("\n ingrese la patente: \n");
        scanf("%d",&ArrayAutos[i].patente);
        printf("\n ingrese la marca: \n");
        scanf("%s", ArrayAutos[i].marca);
        printf("\n ingrese el año: \n");
        scanf("%d", &ArrayAutos[i].año);

    }
    printf("\n Ingrese un año, por favor\n");
    scanf("%d",&año);
    BuscarXaño(año, cant, ArrayAutos);
    free(ArrayAutos);
    return 0;
}

void BuscarXaño(int ani, int cant, Autos* ArrayAutos)
{
    Autos* ArrayAutosaño = alloca(sizeof(Autos)*cant);
    int x=0;
    for(int j=0; j<cant; j++){
        if(ArrayAutos[j].año==ani){
           ArrayAutosaño[x]=ArrayAutos[j];
           x++;
        }

    }
    for(int j=0; j<x; j++){
        printf("patente: %d\t marca: %s\t año: %d\n", ArrayAutosaño[j].patente,ArrayAutosaño[j].marca,ArrayAutosaño[j].año);
    }
}



