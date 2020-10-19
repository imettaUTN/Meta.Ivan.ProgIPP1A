#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int id;
    char * procesador;
    char * marca;
    float precio;
} eNotebook;


int contarCaracteres(char cadena[], char caracter);
float aplicarDescuento(float precio);
void makeSwap(eNotebook notes[], int i, int j);
void OrdenarVectorBurbuja(eNotebook notes[], int tam);

eNotebook vNote[] = {{1,"aa","M",100},{1,"aa","M",100},{1,"aa","M",100}};
int main()
{
    char nomb1[] = "Hooola";
    float precioBase = 100;
    printf("El valor del producto es %.2f, el valor con el descuento es %.2f\n",precioBase,aplicarDescuento(precioBase));
    printf("cantidad %d\n",contarCaracteres(nomb1,'o'));
    OrdenarVectorBurbuja(vNote,3);
    return 0;
}

float aplicarDescuento(float precio)
{
    float descuento =0;
    float precioFinal = 0;
    descuento = precio *0.05;
    precioFinal = precio - descuento;
    system("pause");
    return precioFinal;
}
int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    for(int i = 0; i < strlen(cadena) -1 ; i++)
    {
        if(cadena[i] == caracter)
        {
            contador++;
        }
    }
    return contador;
}


void OrdenarVectorBurbuja(eNotebook notes[], int tam)
{
    for(int i =0; i < tam ; i++)
    {
        for(int j = i+1; j <tam; j++)
        {
            if(strcmp(notes[i].marca,notes[j].marca) > 0 || (strcmp(notes[i].marca,notes[j].marca) == 0 && notes[i].precio > notes[j].precio))
            {
                makeSwap(notes,i,j);
            }

        }
    }

}

void makeSwap(eNotebook notes[], int i, int j)
{
    eNotebook auxEmp;
    auxEmp = notes[j];
    notes[j] = notes[i];
    notes[i] = auxEmp;
}
