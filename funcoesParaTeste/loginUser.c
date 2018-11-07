#define CP 12

void procuraCpf(void){
    int i,n;
    //funcao de numero de pessoas cadastradas;
    //n=numeroDePessoasCadastradas;
    char cpf[CP];
    for(n=0;n<3;i++){
        novaPessoa();
    }
    printf("------------------------------------------------");
    printf("digite cpf");
    fgets(cpf,CP,stdin);
    for(i=0;i<2;i++){
        if(!strcmp(pE[SIZE].cpf,cpf)){
            mostrarPessoa();
        }else{
            printf("erro");
            continue;
        }

    }
}

