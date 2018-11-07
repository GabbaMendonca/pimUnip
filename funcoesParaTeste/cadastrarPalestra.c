#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MIN 3
#define MED 50
#define MAX 100



/* inicializando estruturas de variaveis
STRUCTS
*/

typedef struct 
{
    char nome_da_palestra[MED];
    char local[MED];
    char assunto[MAX];
    char sinopse[MAX];
}PALESTRA;

typedef struct data
{
    int dia;
    int mes;
    int ano;
    int hora;
    int min;
}DATA;

/* Fim dos strucs */



/* PROTOTIPOS DAS FUNÇÕES */

    void alteraPalestra();
    void alteraLocal();
    void alteraData();
    void alteraAssunto();
    void alteraSinopse();
    void alteraDados();
    void exibir();

/* FIM DOS PROTOTIPOS DAS FUNÇÕES */



/* FUNÇÃO DE RETONA O ANO ATUAL NA MAQUINA */

int ano()
{
    time_t data_tempo;
    time(&data_tempo);
    struct tm *tempo = localtime(&data_tempo);
    struct tm *data = localtime(&data_tempo);

    return data->tm_year + 1900;
}

/* FIM NA FUNÇÃO ANO */



/* Função principal - cadastrarPalestra - onde que ira manipular as outras funções */

void cadastrarPalestra()
{
    
    PALESTRA palestra;
    DATA data;

    alteraPalestra(&palestra);
    alteraLocal(&palestra);
    alteraData(&data);
    alteraAssunto(&palestra);
    alteraSinopse(&palestra);
    exibir(&palestra,&data);

}

/* Fim da função cadastrarPalestra */



/* Inicio das funções de controle */

void alteraPalestra(PALESTRA *pale)
{    
    system("clear");
    printf("\nNome da Palestra : ");
    fgets(pale->nome_da_palestra,MED,stdin);
}


void alteraLocal(PALESTRA *pale)
{   
    printf("\nLocal : ");
    fgets(pale->local,MED,stdin);
}



/* Redebe a data e valida o formato */

void alteraData(DATA *dat)
{    
    system("clear");

        printf("Data \n\n");

        do
        {
            printf("Dia : ");
            scanf("%d%*c", &dat->dia);

                if (dat->dia > 0 && dat->dia <= 31 )
                {
                    break;
                }
                else
                {
                    printf("Data invalida ! \n");
                    printf("Pressione ENTER para digitar novamente ... ");
                    getchar();
                    system("clear");
                }
        }
        while(1);

        do
        {
            printf("Mes : ");
            scanf("%d%*c", &dat->mes);

                if (dat->mes > 0 && dat->mes <= 12 )
                {
                    break;
                }
                else
                {
                    printf("Data invalida ! \n");
                    printf("Pressione ENTER para digitar novamente ... ");
                    getchar();
                    system("clear");
                }
        }
        while(1);

        do
        {
            printf("Ano : ");
            scanf("%d%*c", &dat->ano);

                if (dat->ano < ano())
                {
                    printf("Data invalida ! \n");
                    printf("Pressione ENTER para digitar novamente ... ");
                    getchar();
                    system("clear");
                }
                else
                {
                    break;
                }
        }
        while(1);

        printf("\n\nHorario \n\n");

        do
        {
            printf("Hora : ");
            scanf("%d%*c", &dat->hora);

                if (dat->hora >= 0 && dat->hora < 24)
                {
                    break;
                }
                else
                {
                    printf("Hora invalida ! \n");
                    printf("Pressione ENTER para digitar novamente ... ");
                    getchar();
                    system("clear");
                }
        }
        while(1);

        do
        {
            printf("Minuto : ");
            scanf("%d%*c", &dat->min);

                if (dat->min >= 0 && dat->min < 60)
                {
                    break;
                }
                else
                {
                    printf("Hora invalida ! \n");
                    printf("Pressione ENTER para digitar novamente ... ");
                    getchar();
                    system("clear");
                }
        }
        while(1);
}




void alteraAssunto(PALESTRA *pale)
{    
    printf("\n --- \n");

    printf("Assusto : ");
    fgets(pale->assunto,MAX,stdin);
}


void alteraSinopse(PALESTRA *pale)
{    
    printf("\n --- \n");

    printf("Sinopse : ");
    fgets(pale->sinopse,MAX,stdin);
}



/* Esta função serve para mostrar na tela os dados a grava-los */

void exibir(PALESTRA *pale, DATA *dat)
{
    int aux;
    aux = 0;

    do
    {
        system("clear");
        printf("Nome da Paletra ... : %s", pale->nome_da_palestra);
        printf("Local ............. : %s", pale->local);
        printf("Data .............. : %d / %d / %d - %d : %d\n", dat->dia, dat->mes, dat->ano, dat->hora, dat->min);
        printf("Assunto ........... : %s", pale->assunto);
        printf("Sinopse ........... : %s \n", pale->sinopse);

            
        printf("Dados estão corretos ? ( S / N ) : ");

        
        char opc;
        opc = getchar();

        switch(opc)
        {
            case 's':

                printf("Dados gravados com sucesso !\n");
                // GRAVAR DADOS
                printf("Pressione ENTER para sair ... !");
                getchar();
                aux = 1;
            break;
            case 'S':

                printf("Dados gravados com sucesso !\n");
                // GRAVAR DADOS
                printf("Pressione ENTER para sair ... !");
                getchar();
                aux = 1;
            break;

            case 'n':
                alteraDados(pale,dat);
            break;
            case 'N':
                alteraDados(pale,dat);
            break;
            
            default:
                printf("Opcão invalida!");
            break;
        }
    }
    while(aux != 1);
}        

/* Fim da função exibir */



/* Apresenta o menu para a alteração dos dados inseridos */

void alteraDados(PALESTRA *pale, DATA *dat)
{ 

    system("clear");
    //fflush(stdin);
    printf("( 1 ) >>> Nome da Paletra ... : %s", pale->nome_da_palestra);
    printf("( 2 ) >>> Local ............. : %s", pale->local);
    printf("( 3 ) >>> Data .............. : %d / %d / %d - %d : %d\n", dat->dia, dat->mes, dat->ano, dat->hora, dat->min);
    printf("( 4 ) >>> Assunto ........... : %s", pale->assunto);
    printf("( 5 ) >>> Sinopse ........... : %s\n", pale->sinopse);

    printf("\nDigite a opcção que deseja alterar ?");

    int opc;
    scanf("%d%*c", &opc);

    
    switch (opc)
    {
        case 1:
            alteraPalestra(pale);
        break;

        case 2:
            alteraLocal(pale);
        break;

        case 3:
            alteraData(dat);
        break;

        case 4:
            alteraAssunto(pale);
        break;

        case 5:
            alteraSinopse(pale);
        break;
    
        default:
            printf("Opc invalida");
        break;
    }

}

/* Fim da função alteraDados */