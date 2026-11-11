#include <stdio.h>
int main(void) {
    FILE *f=fopen("journal.txt","a");
    if(!f) return 1;
    fputs("A new journal entry.\n",f);
    fclose(f);
    puts("Entry appended to journal.txt");
    return 0;
}
