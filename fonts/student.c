#include "../libs/student.h"

struct STUDENT {
  char *name;
  int age;
};

Student new_Student(const char *name, int age) {

  Student student = (Student) malloc(sizeof(struct STUDENT));
  // Conferir se não tá nulo

  student->name = name;
  student->age = age;

  return student;
}

void destruct_Student(Student student) {
  free(student);
}

char *getName(Student student) {
  return student->name;
}