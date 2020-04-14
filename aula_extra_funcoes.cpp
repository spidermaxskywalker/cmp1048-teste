#include "aula_extra_funcoes.h"

void print_cabecalho()
{
    cout << "+-------------------------------------------------------+" << endl;
    cout << "|           Meu Programinha de Funçoes                  |" << endl;
    cout << "+-------------------------------------------------------+" << endl;
}

int maior(int a, int b)
{
    int m;
    if (a > b)
    {
        m = a;
    } else {
        m = b;
    }
    return m;
}

void linha_antiga()
{
    cout << "##################################################\n";
}

void linha(char c)
{
    for (int i = 0; i < 50; ++i) {
        cout << c;
    }
    cout << endl;
}

double calcular_area_circunferencia(double r)
{
    double area = M_PI * pow(r, 2);
    return area;
}

double calcular_volume(double r)
{
    double v = (4 * M_PI / 3) * pow(r, 3);
    return v;
}

void troca_ref(int& a, int& b)
{
    int aux = a;
    a = b;
    b = aux;
}

void troca_pto(int* a, int* b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

double calcula_media(double* p, int n)
{
    double m = 0;
    for (int i = 0; i < n; ++i) {
        m = m + p[i];
    }
    m = m / n;
    return m;
}

double* soma_vet(double* a, double* b, int n)
{
    double * c = new double[n];
    for (int i = 0; i < n; ++i) {
        c[i] = a[i] + b[i];
    }
    return c;
}
