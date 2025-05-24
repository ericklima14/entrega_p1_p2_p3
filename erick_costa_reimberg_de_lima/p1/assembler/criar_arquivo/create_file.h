#ifndef CREATE_FILE_H
#define CREATE_FILE_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct LISTA LISTA;

typedef struct {
    char *instrucao;
    uint16_t codigo;
} Instrucao;

void creating_file(LISTA* l_code, int start_index_write, int length_data);
void manipulating_file(LISTA *l_code, uint8_t* buffer, int size, int start_index_write, int length_data);
uint16_t pegar_valores_instrucao(uint8_t* instrucao);

#endif