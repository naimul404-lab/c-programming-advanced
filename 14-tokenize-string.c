#include <stdio.h>
#include <string.h>
int main(void) {
    char line[200];
    printf("Enter words separated by spaces: ");
    if (!fgets(line, sizeof line, stdin)) return 1;
    char *token = strtok(line, " \t\n");
    while (token) {
        puts(token);
        token = strtok(NULL, " \t\n");
    }
    return 0;
}
