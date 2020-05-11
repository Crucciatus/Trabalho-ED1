#ifndef LIST_STUDENT_H
#define LIST_STUDENT_H

// Includes:
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

ListStudent listStudent_add(ListStudent listStudent, int a);

void listStudent_toPrint(ListStudent listStudent);


#endif