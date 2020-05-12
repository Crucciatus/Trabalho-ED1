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

/**
 * Retorna a Matricula do Estudante <Student>
 * @param Student <Student>*/
int student_getRegistry(Student student);

/**
 * Retorna o nome do Estudante <Student>
 * @param Studente <Student>*/
const char* student_getName(Student student);

/**
 * Retorna o email do Estudante <Student>
 * @param Student <Student>*/
const char* student_getEmail(Student student);

#endif