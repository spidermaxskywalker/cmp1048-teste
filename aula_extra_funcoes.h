#ifndef AULA_EXTRA_FUNCOES_H
#define AULA_EXTRA_FUNCOES_H

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
/*
   void nome_da_funcao ()
   {
       linhas de codigo da função
   }

   void nome_da_funcao (tipo_par_1 nome_par_1, tipo_par_2, nome_par_2, ...)
   {
       linhas de codigo da função
   }

   TIPO_DO_RETORNO nome_da_funcao (tipo_par_1 nome_par_1, tipo_par_2, nome_par_2, ...)
   {
       linhas de codigo da função

       return VALOR_RETORNO_COM_MESMO_TIPO_DO_RETORNO
   }
*/

#include <iostream>

using namespace std;

void print_cabecalho();

int maior(int a, int b);

void linha_antiga();

void linha(char c);

double calcular_area_circunferencia(double r);

double calcular_volume(double r);

void troca_ref(int& a, int& b);

void troca_pto(int* a, int* b);

double calcula_media(double* p, int n);

double* soma_vet(double* a, double* b, int n);

#endif // AULA_EXTRA_FUNCOES_H
