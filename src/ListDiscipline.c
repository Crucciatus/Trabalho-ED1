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

Discipline listDiscipline_getDisciplineById(ListDiscipline listDiscipline, int id) {

  if(isNull(listDiscipline)) {
    return NULL;
  }

  ListDiscipline node = listDiscipline->next;

  while(!isNull(node)) {
    if(discipline_getId(listDiscipline->discipline) == id) {
      Discipline discipline = new_Discipline(id, discipline_getName(listDiscipline->discipline));
      return discipline;
    }
  }

  return NULL;

}

Discipline listDiscipline_getDisciplineByName(ListDiscipline listDiscipline, const char* name) {

  if(isNull(listDiscipline)) {
    return NULL;
  }

  ListDiscipline node = listDiscipline->next;

  while(!isNull(node)) {
    if(strcmp(discipline_getName(listDiscipline->discipline), name) == 0) {
      Discipline discipline = new_Discipline(discipline_getId(listDiscipline->discipline), name);
      return discipline;
    }
  }

  return NULL;

}