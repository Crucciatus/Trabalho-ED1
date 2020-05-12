#include <stdio.h>
#include <stdlib.h>

#include "libs/ListDiscipline.h"

int main(void) {

  ListDiscipline listDiscipline = new_ListDiscipline();

  listDiscipline_add(listDiscipline, new_Discipline(0, "Logica de Programação"));
  listDiscipline_add(listDiscipline, new_Discipline(1, "Programação 1"));
  listDiscipline_add(listDiscipline, new_Discipline(2, "Estrutura de Dados"));

  Discipline discipline = listDiscipline_getDisciplineByName(listDiscipline, "Estrutura de Dados");

  printf("%s\n", discipline_getName(discipline));
  printf("%d\n", discipline_getId(discipline));

  destruct_ListDiscipline(listDiscipline);
  destruct_Discipline(discipline);
  return EXIT_SUCCESS;
}
