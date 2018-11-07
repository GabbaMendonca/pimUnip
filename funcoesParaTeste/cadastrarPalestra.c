#define SIZE 100
#define DESC 500

struct Palestra{
    char nomeDoPalestrante[SIZE];
    char nomeDaPalestra[SIZE];
    char descDaPalestra[DESC];
    int localDaPalestra;
}; struct Palestra pA[SIZE];

void novaPalestra(void){
    int i;
    for(i=0;i<SIZE;i++){
        struct Palestra pA[i];
        void CadastrarPalestra(void);
        CadastrarPalestra();
        break;
    }
}
void CadastrarPalestra(void){
    //struct Palestra pA;


    printf("Nome do Palestrante:");
    fgets(pA[SIZE].nomeDoPalestrante, SIZE, stdin);
    printf("Nome da Palestra:");
    fgets(pA[SIZE].nomeDaPalestra, SIZE, stdin);
    printf("descricao da palestra:");
    fgets(pA[SIZE].descDaPalestra, DESC, stdin);
    printf("local da palestra");
    printf("1-Cancioneira\n 2-Rua da Paz\n 3-bla \n 4-blabla\n");
    scanf("%d", &pA[SIZE].localDaPalestra);
    fflush(stdin);

}
