/**
* @file loginAdm.c
* @brief Tela de login para acesso do ADM
* @autor(es): Gabriel S. Mendonça, Gabriel A. Maranhão,
*             Rodrigo J. da Almeida, Giovane Oliveira.
*             Lucas Apolonio.
*
* @warning --
* @todo - Lista do que implementar
*       - Implimentar a função para procurar login cadastrado na
*       base de dados para a validação
*
* @bug  - Lista de bugs conhecidos
* @Copyright (c) Autores do Projeto. Todos os Direitos reservados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "_Terminal.h"

#define MAX 10

int validaLogin();


void loginAdm(void)
{

    char login[MAX], senha[MAX];   
    int cont;
    cont = 1;

    do
    {
        printf("Login : ");
        fgets(login,10,stdin);

        printf("Senha : ");    
        fgets(senha,10,stdin);

        if(cont == 3)
        { 
            printf("Voce errou a senha 3 vezes. \n");
            return;
        }
        else
        {
            cont++;
        }
    }
    while(validaLogin(login, senha) == 0);

}


int validaLogin(char *strLogin, char *strSenha)
{

    char loginSis[MAX], senhaSis[MAX];
    
    strcpy(loginSis, "adm"); 
    strcpy(senhaSis, "adm");

    /*
        implmentar a função de procura de login
    */

    if ( strcmp (strLogin, loginSis) == 10 ) 
    {
        if( strcmp (strSenha, senhaSis) == 10 )
        {
            LIMPA_TERM
            printf("\n");
            printf("ACESSO PERMITIDO! \n");
            return 1;
        }else
        {
            LIMPA_TERM
            printf("\n");
            printf("SENHA INCORRETA! \n");
            return 0;        
        }
    }
    else
    {
        printf("USUARIO NAO EXISTE! \n");
        return 0;
    }

}
