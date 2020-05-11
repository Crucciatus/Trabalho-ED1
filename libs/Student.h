#ifndef STUDENT_H
#define STUDENT_H

//includes:
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//tipos definidos:
typedef struct STUDENT *Student;

// métodos públicos:
/**
 * Cria uma nova instancia de <Student>
 * @param Student <Student>
 * */
Student new_Students(int registry, const char* name,const char* email);

/**
 * Destroi uma nova instancia de <Student>
 * @param Student <Student>
 * */

void destruct_Student(Student student);

int student_getRegistry(Student student);

const char* student_getName(Student student);

const char* student_getEmail(Student student);

#endif