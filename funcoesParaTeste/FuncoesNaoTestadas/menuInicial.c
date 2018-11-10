#include <stdio.h>
//faca uma funcao, tela inicial do programa

//////////////////////////TELA INICIAL///////////////////////

/*Funcao TelaInicial*/
void menuInicial()  {
  printf("\n\n");
  printf("|------------------------------------------------------|\n");
  printf("|                      TELA INICIAL                    |\n");
  printf("|------------------------------------------------------|\n");
  printf("\n");

  printf("OPCOES: \n");
  printf("Digite 1: Para entrar na tela de usuario \n");
  printf("Digite 2: Para entrar na tela de administrador \n");
}

 /*Funcao loginUsuario*/
 //Funcao esta em outra arquivo
 void loginUsuario(){
  }

  /*Funcao loginAdm*/
 //Funcao esta em outra arquivo
  void loginAdm(){
  }

/*Funcao escolha*/
void escolha(){
  //Variveis locais
  int opcao, verificaoOpc;

    do {
      printf("Opcao:");
      scanf("%d", &opcao);
      
      if(opcao == 1){ //Entra na funcao do Usuario
        printf("testeLoginAdm");
        loginUsuario();
        } else if (opcao == 2){
            printf("testeLoginUsuario");
            loginAdm(); //Entra na funcao do Administrador
            } else {
                printf("Valor invalido \n");
                printf("Digite novamente sua opcao:");
            }
    } while(opcao > 2);
}

/*Main de teste*/
void main () {

    menuInicial();
    escolha();

}
