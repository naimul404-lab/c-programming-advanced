#include <stdio.h>
typedef struct { int id; char name[40]; } Student;
int main(void) {
    Student s = {101, "Naim"};
    Student *ptr = &s;
    printf("ID: %d\nName: %s\n", ptr->id, ptr->name);
    return 0;
}
