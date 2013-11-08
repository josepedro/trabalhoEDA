#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct no{
       char *cidade;
       char *estado;
       float  rendimento_total;
       float  rendimento_ate_um_salario
       float rendimento_maior_um_dois_salarios;
       float rendimento_maior_dois_tres_salarios;
       float rendimento_maior_tres_cinco_salarios;
       float rendimento_maior_cinco_dez_salarios;
       float rendimento_maior_dez_vinte_salarios;
       float rendimento_maior_vinte_salarios;
       float sem_rendimento;
}No;

typedef struct list{
    No *head;
    No *tail;   
}List;

void inicia(List *list);
void menu_opcao();
void cadastrar(List **list);

int main(){
    int opcao;
    List *list = (List*)malloc(sizeof(List));
    inicia(list);
    
    do{
        menu_opcao();
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;       
        }
    }while(opcao != 6);
 system("pause");
 return 0;   
}
void inicia(List *list){
    list->head = list->tail = NULL;    
    
}
void menu_opcao(){
    
    puts("Menu");
    puts("1. Cadastrar os dados de rendimento de uma cidada");
    puts("2. Consultar os dados de uma cidade");
    puts("3. Excluir uma cidade");
    puts("4. Mostrar a relacao de cidades ordenadas por nome");
    puts("5. Gerar relatorio de cidades");
    puts("6. Sair do programa");
}

void cadastrar(List **list){
    /*Declaração de variaveis*/
    char *cidade;
    char *estado;
    float  rendimento_total;
    float  rendimento_ate_um_salario;
    float rendimento_maior_um_dois_salarios;
    float rendimento_maior_dois_tres_salarios;
    float rendimento_maior_tres_cinco_salarios;
    float rendimento_maior_cinco_dez_salarios;
    float rendimento_maior_dez_vinte_salarios;
    float rendimento_maior_vinte_salarios;
    float sem_rendimento;
    
    /*Alocação de memória */
    cidade = (char *)malloc(70);
    estado =  (char *)malloc(3);
    
        
    /*Entrada de dados*/
    putus("Estado: ");
    fgets(cidade, sizeof(cidade), stdin);
    
    putus("Cidade: ");
    fgets(estado, sizeof(estado), stdin); 
    
    putus("Total de Pessoas de 10 anos ou mais com rendimento nominal mensal: ");
    scanf("%.2f", &rendimento_total);
    
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nominal mensal - Ate 1 salario minimo: ");
    scanf("%.2f", &rendimento_ate_um_salario);
    
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nominal mensal - Mais de 1 a 2 salarios minimos: ");
    scanf("%.2f", &rendimento_maior_um_dois_salarios);
   
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nominal mensal - Mais de 2 a 3 salarios minimos: ");
    scanf("%.2f", &rendimento_maior_dois_tres_salarios);
    
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nominal mensal - Mais de 3 a 5 salarios minimos: ");
    scanf("%.2f", &rendimento_maior_tres_cinco_salarios);
   
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nominal mensal - Mais de 5 a 10 salarios minimos: ");
    scanf("%.2f", &rendimento_maior_cinco_dez_salarios);
    
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nominal mensal - Mais de 10 a 20 salarios minimos: ");
    scanf("%.2f", &rendimento_maior_dez_vinte_salarios);
   
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nominal mensal - Mais de 20 salarios minimos: ");
    scanf("%.2f", &rendimento_maior_vinte_salarios);
    
    putus("Quantidade de pessoas de 10 anos ou mais com rendimento nodminal mensal - sem rendimento: ");
    scanf("%.2f", &sem_rendimento);
    
    
    /*Abrir arquivo para escrita*/
    FILE *f;
    f = fopen("cadastro.txt", "a");
    if(f == NULL){
       puts("Erro na abertura do arquivo cadastro.txt");
       exit(1);     
    }
    
    char texto[100] = "     Meu  3 programa em c";
    int gravar_cidade = fputs(cidade, f);
    int gravar_estado = fputs(estado, f);
    int gravar_total = fputs(rendimento_total, f);
    int gravar_um_salario = fputs(rendimento_ate_um_salario, f);
    int gravar_dois_tres_salarios = fputs(rendimento_maior_dois_tres_salarios, f);
    int gravar_tres_cinco_salarios = fputs(rendimento_maior_tres_cinco_salarios, f);
    int gravar_cinco_dez_salarios = fputs(rendimento_maior_cinco_dez_salarios, f);
    int gravar_dez_vinte_salarios = fputs(rendimento_maior_dez_vinte_salarios, f);
    int gravar_mais_vinte_salarios = fputs(rendimento_maior_vinte_salarios, f);
    int gravar_sem_rendimento = fputs(sem_rendimento, f);
    
    
    if(gravar ==  EOF)
        puts("Erro na gravação");
    fclose(f);
    
    

