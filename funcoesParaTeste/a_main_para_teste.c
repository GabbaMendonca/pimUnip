#include <stdio.h>
#include <stdlib.h>

#include "a_cabecalho_para_teste.h"
#include "_Terminal.h"

void main()
{


        printf("1 - Testar Cadastrar Palestra\n");
        printf("2 - Testar Cadastrar Pessoa\n\n");

        int opc;
        scanf("%d%*c", &opc);

        switch(opc)
        {
            case 1:
                cadastrarPalestra();
            break;
                
            case 2:
                cadastrarPessoa();
            default:
            break;
        }

}
