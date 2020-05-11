#include <stdio.h>
#include <stdlib.h>

#include "libs/ListStudent.h"

int main(void) {

  ListStudent listStudent = new_ListStudent();

  destruct_ListStudent(listStudent);

  return EXIT_SUCCESS;
}
