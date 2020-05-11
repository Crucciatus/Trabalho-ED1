#ifndef LIST_STUDENT_H
#define LIST_STUDENT_H

// Includes:
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Student.h"

// Tipos definidos:
typedef struct LIST_STUDENT *ListStudent;

/**
 * Cria um nova instância de <ListStudent>
 * @return <ListStudent>
 * 
*/
ListStudent new_ListStudent();

/**
 * Destrói uma instância de <ListStudent>
 * @param listStudent <ListStudent>
*/
void destruct_ListStudent(ListStudent listStudent);

/**
 * Adciona um novo <Student> a <ListStudent>
 * @param listStudent <ListStudent>
 * @param student <Student>
 * @return <ListStudent>
*/
ListStudent listStudent_add(ListStudent listStudent, Student student);

/**
 * Remove um <Student> da <ListStudent>
 * @param listStudent <ListStudent>
 * @param student <Student>
 * @return <ListStudent>
 * 
*/
ListStudent listStudent_remove(ListStudent listStudent, Student student);

/**
 * Retorna uma instância de um studante passado o seu registro
 * @param listStudent <ListStudent>
 * @param registry <Student->registry int>
 * @return <Student>
 * 
*/
Student listStudent_getStudentByRegistry(ListStudent listStudent, int registry);

/**
 * Retorna uma instância de um studante passado o seu email
 * @param listStudent <ListStudent>
 * @param email <Student->email string>
 * @return <Student>
 * 
*/
Student listStudent_getStudentByEmail(ListStudent listStudent, const char* email);

/**
 * Imprime os elementos contidos dentro da lista
 * @param listStudent
*/
void listStudent_toPrint(ListStudent listStudent);

#endif
