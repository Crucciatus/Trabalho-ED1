#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
#include "libs/ListStudent.h"

int main(void) {

  ListStudent listStudent = new_ListStudent();

  listStudent_add(listStudent, 10);
  listStudent_add(listStudent, 20);
  listStudent_add(listStudent, 30);

  listStudent_toPrint(listStudent);

  destruct_ListStudent(listStudent);

=======
#include "./libs/Student.h"

int main(void) {
>>>>>>> master
  return EXIT_SUCCESS;
}
