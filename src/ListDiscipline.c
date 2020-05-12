#include "../libs/ListDiscipline.h"

struct LIST_DISCIPLINE {
  Discipline discipline;
  struct LIST_DISCIPLINE *next;
};

static bool isNull(ListDiscipline listDiscipline) {
  return listDiscipline == NULL;
}

ListDiscipline new_ListDiscipline() {

  ListDiscipline listDiscipline = (ListDiscipline) malloc (sizeof(struct LIST_DISCIPLINE));

  if(isNull(listDiscipline)) {
    return NULL;
  }

  listDiscipline->discipline = NULL;
  listDiscipline->next = NULL;

  return listDiscipline;
}

void destruct_ListDiscipline(ListDiscipline listDiscipline) {
  ListDiscipline node = listDiscipline->next;

  while(!isNull(node)) {
    ListDiscipline aux = node->next;
    // destruct_Discipline(node->discipline);
    free(node);
    node = aux;
  }

  free(listDiscipline);
}

ListDiscipline listDiscipline_add(ListDiscipline listDiscipline, Discipline discipline) {

  if(isNull(listDiscipline))
    return listDiscipline;
  
  ListDiscipline node = listDiscipline->next;

  ListDiscipline newNode = new_ListDiscipline();
  newNode->discipline = discipline;

  newNode->next = node;
  listDiscipline->next = newNode;

  return listDiscipline;
}

void listDiscipline_remove(ListDiscipline listDiscipline, Discipline discipline) {
  
  if(isNull(listDiscipline) || discipline == NULL) {
    return NULL;
  }

  ListDiscipline prev = NULL;
  ListDiscipline node = listDiscipline->next;

  // TODO: Criar os métodos na entidade Discipline
  while(!isNull(node) && !discipline_isEquals(node->discipline, discipline)) {
    prev = node;
    node = node->next;
  }


  if(isNull(prev)) { // Remove do inicio da list
    listDiscipline->next = node->next;
  } else { // Remove do meio ou do final da lista
    prev->next = node->next;
  }
  destruct_Discipline(node->discipline);
  free(node);
}