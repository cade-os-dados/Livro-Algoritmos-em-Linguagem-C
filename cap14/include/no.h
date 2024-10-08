#pragma once
#include <stdlib.h>
#include <stdio.h>

typedef struct cel
{
    int valor;
    struct cel* e;
    struct cel* d;
} arvore;

typedef struct cel* no;

typedef struct pcel
{
    int valor;
    struct pcel* pai;
    struct pcel* e;
    struct pcel* d;
} arvoreComPai;

typedef struct pcel* noComPai;

void no_append(no node, no e, no d);
void no_malloc_child(no node);
void no_append_child_null(no node);
void no_append_insere_compai(noComPai a, noComPai b, noComPai c,int v1, int v2);
void no_inserenull_compai(noComPai a);
void no_swap(noComPai no1, noComPai no2);
noComPai from_array(int v[], int n);
void print_arvore(noComPai arvore);
void print_no(noComPai arv);
noComPai newcp(int valor);