#include <stdio.h>
#include <stdlib.h>

//#include "./libs/Student.h"
#include "./libs/ListPhones.h"

int main(void) {

  ListPhones listPhones = new_ListPhones();

  listPhones_add(listPhones, "991941273");
  listPhones_add(listPhones, "991941275");
  listPhones_add(listPhones, "991941274");

  destruct_ListPhones(listPhones);


  return EXIT_SUCCESS;
}
