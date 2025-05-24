#ifndef DATA_H
#define DATA_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct LISTA LISTA;

typedef struct DATA{
    uint8_t* nome;
    uint8_t *tipo_variavel;
    uint8_t valor;
    int stored_index;
} DATA;

DATA* criar_data(uint8_t*, int*, long);
int ler_data(uint8_t*, int*, long, LISTA*);

#endif