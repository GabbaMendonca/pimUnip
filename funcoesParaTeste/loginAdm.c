#include <stdio.h>


////////////////////////////TELA DO LOGIN DO ADM///////////////////////
void loginAdm(void){
    int  resp1, cont;
    int SENHAADM = 148; //Constante
    cont = 1;

    do {
      printf("Usuario: ADM \n");
      printf("Senha:  ");
      scanf("%d", &resp1);
      fflush(stdin);//Limpa o buffer do teclado

      if(resp1 == SENHAADM){ //Senha Adm = digitado
        printf("menuAdm");
        void menuAdm(void);
        } else {
            printf("Senha incorreta \n \n");
            cont++;
            if (cont > 3){
                printf("|---------------------------------------------|\n");
                printf("|       Deseja voltar ao menu principal?      |\n");
                printf("|       Digite 1 retonar ao menu principal.   |\n");
                printf("|---------------------------------------------|\n");
                printf("  Digite:");
                scanf("%d", &resp1);

                if(resp1 != 1){
                    cont = 1;
                    continue; 
                  } else {
                      return; //Retorna ao menu principal
                  }
              }
          }  
      } while (resp1 != SENHAADM);
}

void main () {
  loginAdm(); 
}