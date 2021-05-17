/*Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos
a los que ya tiene el país. La función no devuelve nada. **/
#include <stdio.h>
#include <stdlib.h>
#define TAM 3
typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais paises, int rec);
int main()
{
    ePais paises[TAM] = {{1,"Argentina", 20000, 200, 50000},
                         {2,"Nigeria", 1000, 50, 500},
                         {3,"Colombia", 5000, 1500, 1}};

    actualizarRecuperados(paises[0], 500);
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
