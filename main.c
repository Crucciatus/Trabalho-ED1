#include <stdio.h>
#include <stdlib.h>

#include "libs/ListStudent.h"

int main(void) {

  ListStudent listStudent = new_ListStudent();

  listStudent_add(listStudent, new_Students(0, "Rodrigo Andrade", "rod1@gmail.com"));
  listStudent_add(listStudent, new_Students(1, "Julio Cesar", "julin@gmail.com"));
  listStudent_add(listStudent, new_Students(2, "Gabriela Alves", "gabi@ngmail.com"));

  // Busca de estudante pelo registro
  Student student1 = listStudent_getStudentByRegistry(listStudent, 2);
  printf("Estudante encontrado: %s\n", student_toString(student1));

  // Busca de estudante pelo email:
  Student student2 = listStudent_getStudentByEmail(listStudent, "rod1@gmail.com");
  printf("Estudante encontrado: %s\n", student_toString(student2));


  // printf("%s\n", student_toString(student));
  // listStudent_toPrint(listStudent);

  destruct_ListStudent(listStudent);
  destruct_Student(student1);
  destruct_Student(student2);

  return EXIT_SUCCESS;
}
