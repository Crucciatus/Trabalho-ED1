#include "../libs/Discipline.h"

struct DISCIPLINE {
  int id;
  char name[40];
};

static bool isNull(Discipline discipline) {
  return discipline == NULL;
}

Discipline new_Discipline(int id, const char *name) {

  Discipline discipline = (Discipline) malloc(sizeof(struct DISCIPLINE));

  if(isNull(discipline)) {
    return NULL;
  }
  
  discipline->id = id;
  strcpy(discipline->name, name);

  return discipline;
}

void destruct_Discipline(Discipline discipline) {
  if(!isNull(discipline)) {
    free(discipline);
  }
}

int discipline_getId(Discipline discipline) {
  if(isNull(discipline)) {
    return -1;
  }

  return discipline->id;
}

const char* discipline_getName(Discipline discipline) {

 if(isNull(discipline)) {
    return NULL;
  }

  return discipline->name;
}

bool discipline_isEquals(Discipline discipline, Discipline disciplineCompared) {

  if(discipline->id == disciplineCompared->id 
    && strcmp(discipline_getName(discipline), discipline_getName(disciplineCompared)) == 0
  ) {
    return true;
  }
  
  return false;

}
