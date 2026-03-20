#include <stdio.h>
#include <string.h>
#include "student.h"
#include "structure.h"


Student create_student(const char* name, int id, float grade) {
    Student s;
    strncpy(s.name, name, MAX_NAME);
    s.name[MAX_NAME - 1] = '\0';
    s.id = id;
    s.grade = grade;
    return s;
}
    
void print_student(Student s) {
    printf("Ad: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Not: %.1f\n", s.grade);
}
