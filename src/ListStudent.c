#include "../libs/ListStudent.h"

struct LIST_STUDENT {
  Student student;
  struct LIST_STUDENT *next;
};

static bool isNull(ListStudent listStudent) {
  return listStudent == NULL;
}

ListStudent new_ListStudent() {

  ListStudent listStudent = (ListStudent) malloc(sizeof(struct LIST_STUDENT));

  if(isNull(listStudent)) {
    // Emite um erro
    return NULL;
  }
  
  listStudent->student = NULL;
  listStudent->next = NULL;

  return listStudent;
}

void destruct_ListStudent(ListStudent listStudent) {
  ListStudent node = listStudent->next;

  while(!isNull(node)) {
    ListStudent aux = node->next;
    destruct_Student(node->student);
    free(node);
    node = aux;
  }

  free(listStudent);
}

ListStudent listStudent_add(ListStudent listStudent, Student student) {

  if(isNull(listStudent))
    return listStudent;
  
  ListStudent node = listStudent->next;

  ListStudent newNode = new_ListStudent();
  newNode->student = student;

  newNode->next = node;
  listStudent->next = newNode;

  return listStudent;

}

ListStudent listStudent_remove(ListStudent listStudent, Student student) {
  
  if(isNull(listStudent) || student == NULL) {
    return NULL;
  }

  ListStudent prev = NULL;
  ListStudent node = listStudent->next;

  while(!isNull(node) && !student_isEquals(node->student, student)) {
    prev = node;
    node = node->next;
  }


  if(isNull(prev)) { // Remove do inicio da list
    listStudent->next = node->next;
  } else { // Remove do meio ou do final da lista
    prev->next = node->next;
  }
  destruct_Student(node->student);
  free(node);
}

Student listStudent_getStudentByRegistry(ListStudent listStudent, int registry) {

  if(isNull(listStudent)) {
    return NULL;
  }

  ListStudent node = listStudent->next;

  while(!isNull(node)) {
    if(student_getRegistry(node->student) == registry) {
      Student student = new_Students(registry, student_getName(node->student), student_getEmail(node->student));
      return student;
      
    }
    node = node->next;
  }

  return NULL;
}

Student listStudent_getStudentByEmail(ListStudent listStudent, const char* email) {

  if(isNull(listStudent)) {
    return NULL;
  }

  ListStudent node = listStudent->next;

  while(!isNull(node)) {
    if(strcmp(student_getEmail(node->student), email) == 0) {
      Student student = new_Students(student_getRegistry(node->student), student_getName(node->student), email);
      return student;
      
    }
    node = node->next;
  }

  return NULL;
}

void listStudent_toPrint(ListStudent listStudent) {
  ListStudent node = listStudent->next;
  
  if(isNull(listStudent) || isNull(node)) {
    printf("[ ]");
    return;
  }


  printf("List Student: { \n");
  while(!isNull(node->next)) {
    printf("%s, \n", student_toString(node->student));
    node = node->next;
  }
  printf("%s }\n", student_toString(node->student));
}
