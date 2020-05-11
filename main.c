#include <stdio.h>
#include <stdlib.h>

#include "libs/ListStudent.h"

int main(void) {

  ListStudent listStudent = new_ListStudent();

  listStudent_add(listStudent, new_Students(0, "Rodrigo Andrade", "rod1@gmail.com"));
  listStudent_add(listStudent, new_Students(1, "Julio Cesar", "julin@gmail.com"));
  listStudent_add(listStudent, new_Students(2, "Gabriela Alves", "gabi@ngmail.com"));

  // Student student = new_Students(2, "Gabriela Alves", "gabi@ngmail.com");
  Student student = listStudent_getStudentByRegistry(listStudent, 2);
  printf("Estudante encontrado: %s\n", student_toString(student));

  // printf("%s\n", student_toString(student));
  // listStudent_toPrint(listStudent);

  destruct_ListStudent(listStudent);
  destruct_Student(student);

  return EXIT_SUCCESS;
}
