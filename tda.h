#include <stdio.h>

typedef struct tda {
  int dato;
  int zaraza;
  int pswd;
  char* nombre;
} tda_t;

tda_t* crear_tda();

bool tda_agregar(int dato);
