#include <stdio.h>

struct canciones {
    char nombre[40];
    char artista[40];
    int anio;
    float duracion;
};

int main(void) {
    struct canciones till_i_collapse = {"'Till I Collapse", "Eminem", 2002, 4.57};

    printf("La cancion es: %s\n", till_i_collapse.nombre);
    printf("Artista: %s\n", till_i_collapse.artista);
    printf("Año de lanzamiento: %d\n", till_i_collapse.anio);
    printf("Duracion: %.2f minutos\n", till_i_collapse.duracion);

    return 0;
}