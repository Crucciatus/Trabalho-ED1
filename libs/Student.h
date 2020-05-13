#ifndef STUDENT_H
#define STUDENT_H

//includes:
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


/**
 * Composição de objetos: 
 * Tem um objeto principal
 * Object(Student) 
*/
#include "ListDiscipline.h"
#include "ListPhones.h"

//tipos definidos:
typedef struct STUDENT *Student;

// métodos públicos:
/**
 * Cria uma nova instancia de <Student>
 * @param Student <Student>
 * */
Student new_Student(int registry, const char* name,const char* email);

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

/**
 * Verifica se dois estudantes são iguais
 * @param student <Student>
 * @param comparedStudent <Student>
 * @return <bool> true se forem iguais e <bool> false se forem diferentes
 * 
*/
bool student_isEquals(Student student, Student comparedStudent);

/**
 * Retorna a lista de disciplina da instância em estudante
 * @param student <Student>
 * @return <ListDiscipline>
*/
ListDiscipline student_getListDiscipline(Student student);

/**
 * Retorna a lista de telefones da instância em estudante
 * @param student <Student>
 * @return <LitPhones>
*/
ListPhones student_getListPhones(Student student);

/**
 * Retorna os campos do <Student> em forma de string
 * @param student <Student>
 * @return <String>
*/
char* student_toString(Student student);

#endif