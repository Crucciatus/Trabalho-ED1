#include <stdio.h>
#include <stdlib.h>

#include "libs/student.h"

int main() {

  Student student = new_Student("Rodrigo", 20);

  printf("%s\n", getName(student));

  destruct_Student(student);

  return EXIT_SUCCESS;
}