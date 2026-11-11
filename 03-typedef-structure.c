#include <stdio.h>
typedef struct { char name[40]; int age; } Person;
int main(void) {
    Person p = {"Naim", 20};
    printf("%s is %d years old.\n", p.name, p.age);
    return 0;
}
