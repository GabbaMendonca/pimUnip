
void mostrarPessoa(void){

    printf("%s",pE[SIZE].nome);
    printf("%s",pE[SIZE].email);
    printf("%d",pE[SIZE].idade);
    printf("%d",pE[SIZE].deficiencia);

}

#define SIZE 100
#define DESC 500
#define CP 12
struct Pessoa{
    char nome[SIZE];
    char email[SIZE];
    int idade;
    char cpf[CP];
    int deficiencia;
    char descDef[SIZE];
}; struct Pessoa pE[SIZE];
