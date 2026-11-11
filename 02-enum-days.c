#include <stdio.h>
enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
int main(void) {
    enum Day today = WEDNESDAY;
    printf("Day code: %d\n", today);
    return 0;
}
