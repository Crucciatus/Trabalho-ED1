#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct STUDENT* Student;

Student new_Student(const char *name, int age);

void destruct_Student(Student student);

char *getName(Student student);

#endif