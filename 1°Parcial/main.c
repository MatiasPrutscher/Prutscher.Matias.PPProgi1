/*Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos
a los que ya tiene el país. La función no devuelve nada. **/
/*Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro y
su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU **/
/*Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro y
su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TAM 3
#define TAMC 3
typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;


void actualizarRecuperados(ePais paises, int rec);
void invertirCadena(char palabra[]);
int ordenarCaracteres(char nombre[20]);
int main()
{
    ePais paises[TAM] = {{1,"Argentina", 20000, 200, 50000},
                         {2,"Nigeria", 1000, 50, 500},
                         {3,"Colombia", 5000, 1500, 1}};
    char nombre[20] = "hola";

    //actualizarRecuperados(paises[0], 500);
    ordenarCaracteres(nombre);
    return 0;
}

void actualizarRecuperados(ePais paises, int rec)
{
    paises.infectados -=rec;
    paises.recuperados += rec;

    printf("El pais: %s\n", paises.nombre);
    printf("Recuperados: %d\n", paises.recuperados);
    printf("infectados: %d\n", paises.infectados);
}
void invertirCadena(char palabra[])
{
    int i;
    int j;
    int tam;
    char aux;

    tam = strlen(palabra);

    for(i = 0; i < tam-1; i++)
    {
        for(j = i+1; j < tam ; j++)
        {
            aux = palabra[i];
            palabra[i] = palabra[j];
            palabra[i] = aux;
        }
    }

    printf("%s", palabra);
}

int ordenarCaracteres(char nombre[20])
{
    char aux[20];
    int todoOk = 0;
    int tam;
    tam = strlen(nombre);

    if(nombre != NULL)
    {

        for(int i = 0; i < tam-1; i++)
        {
            for(int j = i+1; j < tam ; j++)
            {
                if(strcmp(nombre[i], nombre[j]) > 0)
                {
                    strcpy(aux, nombre[i]);
                    strcpy(nombre[i], nombre[j]);
                    strcpy(nombre[j], aux);
                }
            }
        }
        todoOk = 1;
    }
    printf("%s", nombre);
    return todoOk;
}
