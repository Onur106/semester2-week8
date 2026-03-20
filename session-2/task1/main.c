#include <stdio.h>
#include "structure.h"
#include "student.h"

int main() {
    Student s = create_student("Ali Yilmaz", 12345, 85.5);
    print_student(s);
    return 0;
}