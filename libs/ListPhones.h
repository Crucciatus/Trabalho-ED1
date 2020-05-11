#ifndef LIST_PHONES_H
#define LIST_PHONES_H

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct LIST_PHONES *ListPhones;

ListPhones new_ListPhones();

void destruct_ListPhones(ListPhones listPhones);

ListPhones listPhones_add(ListPhones listPhones, const char* phone);

ListPhones listPhones_search(ListPhones listPhones, const char* phone);

void listPhones_remove(ListPhones listPhones, const char* phone);

#endif