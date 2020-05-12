#include <stdio.h>
#include <stdlib.h>

#include "libs/ListDiscipline.h"

int main(void) {

  ListDiscipline listDiscipline = new_ListDiscipline();

  listDiscipline_add(listDiscipline, new_Discipline(0, "Logica de Programação"));
  listDiscipline_add(listDiscipline, new_Discipline(1, "Programação 1"));
  listDiscipline_add(listDiscipline, new_Discipline(2, "Estrutura de Dados"));

  Discipline discipline = listDiscipline_getDisciplineById(listDiscipline, 0);

  printf("%s\n", discipline_getName(discipline));

  destruct_ListDiscipline(listDiscipline);
  destruct_Discipline(discipline);
  return EXIT_SUCCESS;
}
