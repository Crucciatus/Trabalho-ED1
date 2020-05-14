#include "../libs/ListPhones.h"

struct LIST_PHONES {
  char phone[25];
  struct LIST_PHONES* next;
};

static bool isNull(ListPhones listPhones) {
  return listPhones == NULL;
}

//cria uma lista
ListPhones new_ListPhones() {
  
  ListPhones listPhones = (ListPhones) malloc(sizeof(struct LIST_PHONES));
  
  if(isNull(listPhones)) {
    return NULL;
  }
  
  listPhones->next = NULL;
  
  return listPhones;
}

//Destrói a Lista de telefones
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

//Adiciona um novo telefone à lista
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

bool listPhones_search(ListPhones listPhones, const char* phone) {
  
  if(isNull(listPhones)) {
    return NULL;
  }

  ListPhones node = listPhones->next;

  while(!isNull(node)) {

    if(strcmp(node->phone, phone) == 0)
      return true;
    else 
      node = node->next;
  }

  return false;
}

//Remove um nó da lista 
ListPhones listPhones_remove(ListPhones listPhones, const char* phone) {

  if(isNull(listPhones)) {
    return NULL;
  }

  // ListPhones verifyPhone = listPhones_search(listPhones, phone);
  ListPhones prev = NULL; // Elemento anterior trackeado
  ListPhones node = listPhones->next; // O nó

  while(!isNull(node) && strcmp(node->phone, phone) != 0) {
    prev = node; // Isso é para saber qual é o elemento anterior
    node = node->next;
  }
  
  // É possível remover de três lugares: Início, meio ou fim.
  if(isNull(prev)) { // Remove do inicio
    listPhones->next = node->next; // A cabeça da lista aponta para o próximo elemento do elemento atual
  } else { // remove do meio ou do fim
    prev->next = node->next; // O elemento anterior aponta para o proximo elemento do elemento atual
  }

  free(node); // Remove o elemento encontrado
  return listPhones;
}

//Edita o telefone (phone) do nó pelo novo telefone(phoneModify)
void listPhones_edit(ListPhones listPhones, const char* phone, const char* newPhone) {

  if(isNull(listPhones)) {
    return;
  }

  ListPhones node = listPhones->next;

  while(!isNull(node)) {

    if(!strcmp(node->phone, phone)) {  //verifica se os número passado por parametro é igual ao da lista 
      strcpy(node->phone, newPhone);  // copia o newPhone para o node->phone
      return;
    }

    node = node->next;
  }
}

//Faz a impressão da lista telefone no terminal com formatação
void listPhone_toString(ListPhones listPhones) {

  ListPhones node = listPhones->next;

  if(isNull(listPhones) || isNull(node)) {
    printf("[ ]\n");
    return;
  }

  int iteration = 1;
  while(!isNull(node)) {
    printf("%d°. %s\n", iteration++, node->phone);
    node = node->next;
  }
}
