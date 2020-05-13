#include <stdio.h>
#include <stdlib.h>

#include "libs/Student.h"

int main(void) {

  Student student = new_Students(0, "Rodrigo Andrade", "rod1lindo@gmail.com");
  ListDiscipline listDiscipline = student_getListDiscipline(student);

  listDiscipline_add(listDiscipline, new_Discipline(100, "Lógica de Programação"));
  listDiscipline_add(listDiscipline, new_Discipline(101, "Programação 1"));
  listDiscipline_add(listDiscipline, new_Discipline(102, "Estrutura de dados 1"));

  printf("%s\n", student_toString(student));
  printf("Disciplinas matriculado: \n");

  listDiscipline_toPrint(student_getListDiscipline(student));

  destruct_Student(student);

  return EXIT_SUCCESS;
}