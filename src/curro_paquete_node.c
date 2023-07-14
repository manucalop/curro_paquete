#include "curro_paquete.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define filas 15
#define butacas 20

bool asientos_libres[filas][butacas];

bool esta_ocupado(int fila, int butaca, bool sala[filas][butacas]) {
  return sala[fila][butaca];
}

int main() {
  int i, j;

  srand(time(NULL)); // funcion para generar de forma aleatoria

  for (i = 0; i < filas; i++) {
    for (j = 0; j < butacas; j++) {
      asientos_libres[i][j] = rand() % 2;//uso de funcion rand para generar aleatorios
    }
  }

  printf("Asientos inicializados:\n");

  for (i = 0; i < filas; i++) {
    for (j = 0; j < butacas; j++) {
      printf("%d ", asientos_libres[i][j]);
    }
    printf("\n");
  }

  return 0;
}


