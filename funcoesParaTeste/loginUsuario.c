#include <stdio.h>


////////////////////////////TELA DO LOGIN DE USUARIO//////////////////////
void loginUsuario(void){
    int resp1, cont, cpf, cpfValido;
    cont = 1;

    do {
      printf("|---------------------------------------|\n");
      printf("|              Menu Usuario             |\n");
      printf("|---------------------------------------|\n");

      printf("CPF:");
      scanf("%d", &cpf);
      fflush(stdin); //Limpa o buffer do teclado

      int procurarUsuario(int *cpf);
      //CPF esta cadastrado? Retonar 1
      if(cpfValido == 1){ 
        printf("menuUsuario");
        void menuUsuario(void);
        } else {
            printf("Usuario nao encontrado.\n\n\n");
            cont++;
            if (cont > 3){
                printf("|---------------------------------------------------|\n");
                printf("|        Deseja voltar ao menu principal?           |\n");
                printf("|        Digite 1 retonar ao menu principal.        |\n");
                printf("|---------------------------------------------------|\n");
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
      } while (cpfValido != 1);
}

void main () {
  loginUsuario(); 
}