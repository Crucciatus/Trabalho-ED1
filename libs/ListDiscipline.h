#ifndef LIST_DISCIPLINE_H
#define LIST_DISCIPLINE_H

#include <stdlib.h>
#include <stdbool.h>

#include "Discipline.h"

typedef struct LIST_DISCIPLINE *ListDiscipline;

/**
 * Cria uma nova instância da <ListDiscipline>
 * @return <ListDiscipline>
*/
ListDiscipline new_ListDiscipline();

/**
 * Desaloca memória alocada pela <ListDiscipline>
 * @param listDiscipline <ListDiscipline>
*/
void destruct_ListDiscipline(ListDiscipline listDiscipline);

/**
 * Adciona uma disciplina a lista
 * @param listDiscipline <ListDiscipline>
 * @param discipline <Discipline>
 * @return <ListDiscipline> 
 *
*/
ListDiscipline listDiscipline_add(ListDiscipline listDiscipline, Discipline discipline);

/**
 * Remove uma disciplina da lista
 * @param listDiscipline <ListDiscipline>
 * @param discipline <Discipline>
 *
*/
void listDiscipline_remove(ListDiscipline listDiscipline, Discipline discipline);

#endif