#include "../libs/Student.h"

struct STUDENT {
  int resgistry;
  char name[40];
  //phone <ListPhone>
  //discipline <ListDiscipline>
  char email[40];
};

bool isNull(Student student) {
  return student == NULL;
}

Student new_Students(int registry, const char* name,const char* email) {
  Student student = (Student) malloc(sizeof(struct STUDENT));
  if(isNull(student)) {
    return NULL;
  }
  student->resgistry = registry;
  strcpy(student->name, name);
  strcpy(student->email, email);

  return student;
}

void destruct_Student(Student student) {
  
  if(isNull(student)) {
    return;
  }

  free(student);
}

int student_getRegistry(Student student) {
  
  if(isNull(student)) {
    return -1;
  }

  return student->resgistry;
}

const char* student_getName(Student student) {
  
  if(isNull(student)) {
    return NULL;
  }

  return student->name;
}

const char* student_getEmail(Student student) {
  
  if(isNull(student)) {
    return NULL;
  }

  return student->email;
}

bool student_isEquals(Student student, Student comparedStudent) {
  if(isNull(student) || isNull(comparedStudent))
    return false;
  
  if(student_getRegistry(student) == student_getRegistry(comparedStudent)
  && strcmp(student_getName(student), student_getName(comparedStudent))  == 0
  && strcmp(student_getEmail(student), student_getEmail(comparedStudent))  == 0
  ) {
    return true;
  }

  return false;
}

char* student_toString(Student student) {

  if(isNull(student)) {
    return NULL;
  }

  char *str = malloc(sizeof(char) * 120);
  strcpy(str, "Students [ ");
  // TODO: Converter o registro inteiro para string
  // strcat(str, student_getRegistry(student)));
  // strcat(str, ", ");
  strcat(str, student_getName(student));
  strcat(str, ", ");
  strcat(str, student_getEmail(student));
  strcat(str, " ]\0");
  return str;
}