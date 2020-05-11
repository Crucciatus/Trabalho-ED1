#include "../libs/ListPhones.h"

struct LIST_PHONES {
  char phone[14];
  struct LIST_PHONES* next;
};

static bool isNull(ListPhones listPhones) {
  return listPhones == NULL;
}

ListPhones new_ListPhones() {
  
  ListPhones listPhones = (ListPhones) malloc(sizeof(struct LIST_PHONES));
  
  if(isNull(listPhones)) {
    return NULL;
  }
  
  listPhones->next = NULL;
  
  return listPhones;
}

void destruct_ListPhones(ListPhones listPhones) {
  
  if(isNull(listPhones)) {
    return;
  }
  
  ListPhones node = listPhones->next;
  
  while(!isNull(node)) {
    ListPhones aux = node->next;
    free(node);
    node = aux;
  }

  free(listPhones);
}

ListPhones listPhones_add(ListPhones listPhones, const char* phone) {
  
  if(isNull(listPhones)) {
    return NULL;
  }

  ListPhones node = listPhones->next;
  ListPhones newNode = new_ListPhones();
  
  strcpy(newNode->phone, phone);
  newNode->next = node;
  listPhones->next = newNode;

  return listPhones;
}



