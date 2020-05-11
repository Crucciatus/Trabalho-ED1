#include "../libs/ListStudent.h"

struct LIST_STUDENT {
  // Student student;
  int a;
  struct LIST_STUDENT *next;
};

bool isNull(ListStudent listStudent) {
  return listStudent == NULL;
}

ListStudent new_ListStudent() {

  ListStudent listStudent = (ListStudent) malloc(sizeof(struct LIST_STUDENT));

  if(isNull(listStudent)) {
    // Emite um erro
    return NULL;
  }

  listStudent->a = -1;
  listStudent->next = NULL;

  return listStudent;
}

void destruct_ListStudent(ListStudent listStudent) {
  ListStudent node = listStudent->next;

  while(!isNull(node)) {
    ListStudent aux = node->next;
    free(node);
    node = aux;
  }

  free(listStudent);
}

ListStudent listStudent_add(ListStudent listStudent, int a) {

  if(isNull(listStudent))
    return listStudent;
  
  ListStudent node = listStudent->next;

  ListStudent newNode = new_ListStudent();
  newNode->a = a;

  newNode->next = node;
  listStudent->next = newNode;

  return listStudent;

}

void listStudent_toPrint(ListStudent listStudent) {
  if(isNull(listStudent)) {
    printf("[ ]");
    return;
  }

  ListStudent node = listStudent->next;

  printf("List Student: [ ");
  while(!isNull(node->next)) {
    printf("%d, ", node->a);
    node = node->next;
  }
  printf("%d ]\n", node->a);
}