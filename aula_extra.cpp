#include "aula_extra.h"

void declaracao_variaveis_referencias()
{
    cout << "declaracao_variaveis_referencias\n";

    int x; // cria variavel com nome x e tipo int
    int y; // cria variavel com nome y e tipo int

    x = 10; // atribui valor 10 a variavel x
    y = 20; // atribui valor 20 a variavel y

    int &a = x; // declara referencia (apelido carinhoso) para x

    printf("x  = %ld\n", x);
    printf("a  = %ld\n", a);
    printf("&x = %ld\n", &x);
    printf("&a = %ld\n", &a);
}

void ponteiros()
{
    cout << "ponteiros\n";

    int x = 10;
    int y = 20;

    int* p; // cria variavel com nome p e tipo int*
    p = &x;

    *p = 7;

    printf("x  = %ld\n", x); // valor da caixinha x
    printf("&x = %ld\n", &x); // endereço da caixinha x
    printf("y  = %ld\n", y); // valor da caixinha y
    printf("&y = %ld\n", &y); // endereço da caixinha y
    printf("p  = %ld\n", p); // valor da caixinha p (guardando o endereço de x)
    printf("&p = %ld\n", &p); // endereço da caixinha p
    printf("*p = %ld\n", *p); // obtem REFERENCIA da caixinha apontada por p e imprime o valor (no caso, o valor da caixinha que também é referenciada por x)
    printf("p[0] = %ld\n", p[0]); // endereço da caixinha p
}

void ponteiros_calc_media()
{
    cout << "ponteiros_calc_media\n";

    int x = 7;
    int y = 20;
    double z = 0.0;

    int *p = &x;
    int *q = &y;
    double *r = &z;

    z = (x + y) / 2.0;
    *r = (*p + *q) / 2.0;
    r[0] = (p[0] + q[0]) / 2.0;

    cout << z << endl;
    cout << *r << endl;
    cout << r[0] << endl;
}

void ponteiros_vetor()
{
    cout << "ponteiros_vetor\n";

    int v[5]; // criar um vetor de int com tamanho 5 (onde cada posição é um int)

    int *p;
    p = v;

    for (int i = 0; i < 5; ++i) {
        v[i] = (i + 1) * 3;
    }

    for (int i = 0; i < 5; ++i) {
        printf("v[%d] = %2ld (%ld)\n", i, v[i], &v[i]);
    }

    cout << "------------------------------\n";

    printf("p = %ld\n", p);

    for (int i = 0; i < 5; ++i) {
        p[i] = (i + 1) * 2;
    }

    for (int i = 0; i < 5; ++i) {
        printf("p[%d] = %2ld (%ld)\n", i, p[i], &p[i]);
    }
}

void teste_funcoes_1()
{
    cout << "teste_funcoes_1\n";

    print_cabecalho(); // Chamada a função sem parâmetros e sem retorno

    linha('$'); // Chamada a função com parâmetro e sem retorno
    int x;
    int y;

    cout << "X = ";
    cin >> x;

    linha('@'); // Repetindo chamada a mesma função mas passando parâmetro diferente

    cout << "Y = ";
    cin >> y;

    int m = maior(x, y); // Chama a função com parâmetros e com retorno

    linha('&');

    cout << "Maor: " << m << endl;
}

void teste_funcoes_2()
{
    cout << "teste_funcoes_2\n";

    int qtde_pessoas;
    cout << "Quantos herdeiros: ";
    cin >> qtde_pessoas;

    double raio;
    cout << "Raio da fazenda circular: ";
    cin >> raio;

    double area = calcular_area_circunferencia(raio);

    cout << "Area total: " << area << endl;

    double area_por_herdeiro = area / qtde_pessoas;

    cout << "Area para cada herdeiro = " << area_por_herdeiro << endl;

    cout << "Raio da esfera: ";
    cin >> raio;
    sqrt(81);
    double volume = calcular_volume(raio);

    cout << "Volume: " << volume << endl;
}

void teste_funcoes_3_passagens_parametros()
{
    cout << "teste_funcoes_3_passagens_parametros\n";

    int x;
    int y;

    x = 10;
    y = 25;

    int* p; // Cria um ponteiro de int
    p = &x;

    int z;

    // Passagem de parâmetro por VALOR
    z = maior(x, y);
    cout << "Maior: " << z << endl;

    printf("X = %d | Y = %d\n", x, y);
    // Passagem de parâmetro por REFERÊNCIA
    troca_ref(x, y);
    printf("X = %d | Y = %d\n", x, y);

    printf("X = %d | Y = %d\n", x, y);
    // Passagem de parâmetro por REFERÊNCIA
    troca_pto(p, &y);
    printf("X = %d | Y = %d\n", x, y);
}

void teste_funcoes_4_vetores()
{
    cout << "teste_funcoes_4_vetores\n";

    double v[5];

    for (int i = 0; i < 5; ++i) {
        v[i] = 3 * (i + 1);
    }

    cout << "V = \n";
    for (int i = 0; i < 5; ++i) {
        cout << v[i] << endl;
    }

    double m;
    m = calcula_media(v, 5);

    cout << "Media: " << m << endl;
}

void teste_funcoes_5_vetores_dinamicos()
{
    cout << "teste_funcoes_5_vetores_dinamicos\n";

    double v1[5];
    double v2[5];


    for (int i = 0; i < 5; ++i) {
        v1[i] = 3 * (i + 1);
        v2[i] = 2 * (i + 1);
    }

    cout << "V1 = \n";
    for (int i = 0; i < 5; ++i) {
        cout << v1[i] << endl;
    }

    cout << "V2 = \n";
    for (int i = 0; i < 5; ++i) {
        cout << v1[i] << endl;
    }

    double* vsoma = soma_vet(v1, v2, 5);
    cout << "VSOMAq = \n";
    for (int i = 0; i < 5; ++i) {
        cout << vsoma[i] << endl;
    }

    delete [] vsoma;
}
