#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define DESC 500
#define CP 12



/* inicializando estruturas de variaveis
STRUCTS
*/

typedef struct 
{
    char nome [SIZE];
    char email [SIZE];
    int  idade ;
    char cpf [CP] ;
    int  deficiencia ;
    char descDef [SIZE];
}PESSOA;

        // struct Pessoa pE[SIZE];

/* Fim dos strucs */




/* PROTOTIPOS DAS FUNÇÕES */

    void inseriPessoa();
    void inseriEmail();
    void inseriIdade();
    void inseriCpf();
    void inseriDeficiencia();
    void inseriDescDef();
 
/* FIM DOS PROTOTIPOS DAS FUNÇÕES */





/* Função principal - cadastrarPalestra - onde que ira manipular as outras funções */

void main()
{
    PESSOA pessoa;

    inseriPessoa(&pessoa);
    inseriEmail(&pessoa);
    inseriIdade(&pessoa);
    inseriCpf(&pessoa);
    inseriDeficiencia(&pessoa);
    inseriDescDef(&pessoa);
}

// void novaPessoa(void)
// {
//     int i;

//     for (i = 0; i < SIZE; i++)
//     {
//         struct Pessoa pE[i];

//         void cadastraPessoa(void);
//         cadastraPessoa();
//         break;
//     }
// }

void cadastraPessoa(void)
{
    //struct Pessoa pE;
    printf("digite seu nome:");
    fgets(pE[SIZE].nome, SIZE, stdin);

    printf("digite seu email:");
    fgets(pE[SIZE].email, SIZE, stdin);

    printf("digite sua idade:");
    scanf("%d", &pE[SIZE].idade);
    fflush(stdin);

    printf("digite seu cpf:");
    fgets(pE[SIZE].cpf, CP, stdin);

    printf("digite 1 se tiver deficiencia ou 2 caso nao tenha:");
    scanf("%d", &pE[SIZE].deficiencia);
    fflush(stdin);

    if (pE[SIZE].deficiencia == 1)
    {
        printf("diga a sua deficiencia:");
        fgets(pE[SIZE].descDef, SIZE, stdin);
    }
    else
    {
        printf("aguarde");
    }
}
