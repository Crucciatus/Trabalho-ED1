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
 * Imprime os elementos contidos dentro da lista
 * @param listStudent
*/
void listStudent_toPrint(ListStudent listStudent);


#endif