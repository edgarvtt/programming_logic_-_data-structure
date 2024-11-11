#include <stdio.h>

struct cadastro {
        
       int matricula;
       char nome[50];
       int idade;
       double media;
        
    };
    
    
void adicioneAluno(struct cadastro alunos[],int i){
    
        puts(" ");
        printf("digite a matricula do alunos:");
        scanf("%d",&alunos[i].matricula);
        printf("digite a nome do alunos: ");
        scanf("%s",alunos[i].nome);
        printf("digite a idade do alunos: ");
        scanf("%d",&alunos[i].idade);
        printf("digite a media do alunos: ");
        scanf("%lf",&alunos[i].media);
        puts("");
}

void listarAluno(struct cadastro alunos[], int size){
    
       for (int i = 0; i < size; i++) {
        
        puts(" ");
        printf("Matrícula do aluno: %d\n ", alunos[i].matricula);
        printf("Nome do aluno: %s\n", alunos[i].nome);
        printf("Idade do aluno: %d\n", alunos[i].idade);
        printf("Média do aluno: %.2lf\n", alunos[i].media);
        puts("");
    }
    
}

void buscarAluno(struct cadastro aluno[],int search){
    
    int verificar = 0;
    
    for (int i = 0 ; i < 100 ; i++){
    
      if(search == aluno[i].matricula){
        
        printf("Matrícula do aluno: %d\n", aluno[i].matricula);
        printf("Nome do aluno: %s\n", aluno[i].nome);
        printf("Idade do aluno: %d\n", aluno[i].idade);
        printf("Média do aluno: %.2lf\n", aluno[i].media);
        verificar++;
        
    }};
    
    if(verificar == 0){
        printf("não existe aluno com essa matricula");
    }
    
}

int main(){
    
    struct cadastro alunos[100];
    int i = 0;
    int opcao;
    int search;
    
    printf("escolha uma opção: \n");
    printf("1. adicionar Aluno \n");
    printf("2. listar Alunos\n");
    printf("3. buscar Aluno pela matricula\n");
    printf("0. sair\n");
    scanf("%d",&opcao);
    
    while(opcao != 0){
    
    if(opcao == 1){
        
    adicioneAluno(alunos,i);
    i++;
    }
    
    if(opcao == 2){
    listarAluno(alunos,i);
    }
    
    if(opcao == 3){
    printf("digite a matricula do aluno para buscar: ");
    scanf("%d",&search);
    buscarAluno(alunos,search);
    }
    
    puts(" ");
    printf("escolha outra opção \n");
    printf("1. adicionar Aluno \n");
    printf("2. listar Alunos \n");
    printf("3. buscar Aluno pela matricula \n");
    printf("0. sair\n");
    scanf("%d",&opcao);
    };
    
    return 0;
}

/* desafio do cadastro:

by: chagpt
code: edgarvtt

Desafio: Cadastro de Alunos
Objetivo: Crie um programa para cadastrar e gerenciar informações de alunos usando structs. O programa deve permitir ao usuário adicionar novos alunos, exibir a lista de alunos cadastrados e buscar um aluno específico pelo número de matrícula.

Requisitos:

Definição da Struct Aluno:

Crie uma struct chamada Aluno com os seguintes campos:
matricula: número inteiro para identificar o aluno.
nome: string (array de caracteres) para armazenar o nome do aluno (máximo 50 caracteres).
idade: número inteiro representando a idade do aluno.
media: número float para a média de notas do aluno.
Funções:

Adicionar Aluno: Crie uma função para adicionar um novo aluno ao cadastro. A função deve preencher todos os campos da struct Aluno.
Listar Alunos: Crie uma função para listar todos os alunos cadastrados, mostrando os dados de cada aluno na tela.
Buscar Aluno: Crie uma função para buscar um aluno pelo número de matrícula. A função deve exibir os dados do aluno encontrado ou uma mensagem dizendo que a matrícula não foi encontrada.
Estrutura do Programa:

Use um array de structs para armazenar os alunos (máximo de 100 alunos).
Um menu deve ser exibido ao usuário, oferecendo as seguintes opções:
1 - Adicionar Aluno
2 - Listar Alunos
3 - Buscar Aluno pela Matrícula
4 - Sair do Programa */