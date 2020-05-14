#include "../libs/Schedule.h"
#include "../libs/ListStudent.h"

static ListStudent listStudent;

static enum OPTIONS {
  INSERIR = 1,
  EXCLUIR,
  BUSCAR,
  LISTAR,
  SAIR
};

static int menu() {
  int option;
  printf("1. Inserir aluno\n");
  printf("2. Excluir aluno\n");
  printf("3. Buscar aluno\n");
  printf("4. Listar alunos\n");
  printf("5. Sair\n");

  printf("Escolha uma opção: ");
  scanf("%d", &option);

  return option;
}

static void insertStudent() {

  Student student = NULL;
  int registry = rand();
  char name[50];
  char email[50];

  // LINUX
  system("clear");
  // system("cls");

  setbuf(stdin, NULL);

  printf("Inserir novo estudante: \n");
  printf("Número de matricula: %d\n", registry);
  printf("Digite o nome: ");
  fgets(name, 50, stdin);
  name[strlen(name) - 1] = '\0';

  setbuf(stdin, NULL);

  printf("Digite o email: ");
  fgets(email, 50, stdin);
  email[strlen(email) - 1] = '\0';
  
  student = new_Student(registry, name, email);

  listStudent_add(listStudent, student);

  // printf("Telefones: ");
  // printf("1: ");
  // printf("2: ");

  // printf("Disciplinas: ");
  // printf("1: ");
  // printf("2: ");

  printf("Inserido com seucesso!\n");
}

void start() {
  int keep = 1;
  do {
    int option = menu();

    switch(option) {
      case SAIR:
        keep = 0;
      break;
      case INSERIR:
        insertStudent();
      break;
    }
  } while(keep);
}

void stop() {
  destruct_ListStudent(listStudent);
}