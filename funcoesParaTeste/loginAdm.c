#define SENHAADM 148
void loginAdm(void){
    int  resp1, cont;
    cont = 1;


    do {
    printf(" \n ");
    printf(" \n ");
    printf("Usu�rio ADM\n");
    printf("Senha de ADM: ");

    scanf("%d", &resp1);
    fflush(stdin);
    if(resp1 == SENHAADM){ //Senha Adm
        void menuAdm(void);
    } else {
        cont++;
    if (cont > 3){
        printf("Voce errou a senha tr�s vezes. \n");
        break;
        return;
    }
  }

  } while (resp1 != SENHAADM);

}
