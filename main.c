#include <stdio.h>
#include <stdlib.h>

#include "./libs/Student.h"

int main(void) {

  Student student = new_Students(5, "Julin", "julin@gmail.com");
  printf("Nome: %s", student_getName(student));

  destruct_Student(student);


  return EXIT_SUCCESS;
}
