#include "../libs/Student.h"

struct STUDENT {
  int resgistry;
  char name[40];
  ListDiscipline listDiscipline; 
  ListPhones listPhones;
  char email[120];
};

bool isNull(Student student) {
  return student == NULL;
}

Student new_Student(int registry, const char* name,const char* email) {
  Student student = (Student) malloc(sizeof(struct STUDENT));
  if(isNull(student)) {
    return NULL;
  }
  student->resgistry = registry;
  strcpy(student->name, name);
  student->listDiscipline = new_ListDiscipline();
  student->listPhones = new_ListPhones();
  strcpy(student->email, email);

  return student;
}

void destruct_Student(Student student) {
  
  if(isNull(student)) {
    return;
  }

  destruct_ListDiscipline(student->listDiscipline);
  destruct_ListPhones(student->listPhones);
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

ListDiscipline student_getListDiscipline(Student student) {
  
  if(isNull(student)) {
    return NULL;
  }
  
  return student->listDiscipline;
}

ListPhones student_getListPhones(Student student) {
  
  if(isNull(student)) {
    return NULL;
  }

  return student->listPhones;
}

void student_toString(Student student) {

  if(isNull(student)) {
    return;
  }

  printf("=====================Dados Pessoais=====================\n");
  printf("Matricula: %d\n", student_getRegistry(student));
  printf("Nome: %s\n", student_getName(student));
  printf("Email: %s\n", student_getEmail(student));
  printf("======================Dados Contato=====================\n");
  listPhone_toString(student_getListPhones(student));
  printf("=======================Disciplinas======================\n");
  listDiscipline_toPrint(student_getListDiscipline(student));
  printf("========================================================\n\n");

}