#include <stdio.h>
#include <stdlib.h>

#include "libs/ListDiscipline.h"

int main(void) {

  ListDiscipline listDiscipline = new_ListDiscipline();

  listDiscipline_add(listDiscipline, new_Discipline(0, "Logica de Programação"));

  destruct_ListDiscipline(listDiscipline);
  return EXIT_SUCCESS;
}
