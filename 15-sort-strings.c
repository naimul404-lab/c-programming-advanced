#include <stdio.h>
#include <string.h>
int main(void) {
    char words[5][40], temp[40];
    for (int i = 0; i < 5; i++) {
        printf("Word %d: ", i + 1);
        if (scanf("%39s", words[i]) != 1) return 1;
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (strcmp(words[j], words[j + 1]) > 0) {
                strcpy(temp, words[j]); strcpy(words[j], words[j + 1]); strcpy(words[j + 1], temp);
            }
    puts("Sorted words:");
    for (int i = 0; i < 5; i++) puts(words[i]);
    return 0;
}
