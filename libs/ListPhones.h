#ifndef LIST_PHONES_H
#define LIST_PHONES_H

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct LIST_PHONES *ListPhones;

/**
 * Cria uma nova istância de <ListPhones>
 * @param ListPhones <ListPhones>
 * */
ListPhones new_ListPhones();

/**
 * Destrói a instãncia de <ListPhones>
 * @param ListPhones <ListPhones>
 * */
void destruct_ListPhones(ListPhones listPhones);

/**
 * Adiona um novo nó a Lista <ListPhones>
 * @param ListPhones <ListPhones>
 * @param phone <const char*>
 * */
ListPhones listPhones_add(ListPhones listPhones, const char* phone);

/**
 * Busca o nó da Lista <ListPhones>
 * @param ListPhones <ListPhones>
 * @param phone <const char*>
 * */
ListPhones listPhones_search(ListPhones listPhones, const char* phone);

ListPhones listPhones_remove(ListPhones listPhones, const char* phone);

void listPhone_toString(ListPhones listPhones);

#endif