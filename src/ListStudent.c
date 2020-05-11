#include "../libs/ListStudent.h"

struct LIST_STUDENT {
  // Student student;
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

  listStudent->next = NULL;

  return listStudent;
}

void destruct_ListStudent(ListStudent listStudent) {
  ListStudent headList = listStudent->next;

  while(!isNull(headList)) {
    ListStudent aux = headList;
    free(headList);
    headList = aux->next;
  }

  free(listStudent);
}
