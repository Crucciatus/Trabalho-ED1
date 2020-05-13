#ifndef DISCIPLINE_H
#define DISCIPLINE_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct DISCIPLINE *Discipline;

/**
 * Cria uma nova instância de Disciplina
 * @return <Discipline>
*/
Discipline new_Discipline(int id, const char *name);

/**
 * Destrói uma Discipline
 * @param discipline <Discipline>
*/
void destruct_Discipline(Discipline discipline);

/**
 * Retorna o Id de uma disciplina
 * @param discipline <Discipline>
 * @return <int>
*/
int discipline_getId(Discipline discipline);

/**
 * Retorna o nome de uma disciplina
 * @param discipline <Discipline>
 * @return <string>
*/
const char* discipline_getName(Discipline discipline);

/**
 * Compara a igualdade entre duas Disciplinas
 * @param discpline <Discipline>
 * @param discplineCompared <Discipline>
 * @return <true> Caso sejam iguais, <false> caso sejam diferentes ou alguma seja nula
*/
bool discipline_isEquals(Discipline discipline, Discipline disciplineCompared);

#endif