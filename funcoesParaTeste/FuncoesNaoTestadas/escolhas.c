
void escolha(){
  //Variveis locais
  int opcao, verificaoOpc;


  do {
    scanf("%d", &opcao);
    if(opcao == 1){ //Leva o usu�rio a tela inicial
      //Funcao ACESSO ADM
      printf("Entrando.. na funcao acessoADM");
      loginAdm();
      //printf("Teste retorno ADM");
    } else if (opcao == 2){
      login();

      printf("Entrando.. na funcao Usuario");
    } else {
      printf("Valor invalido");
    }
  } while(opcao > 2);
}
