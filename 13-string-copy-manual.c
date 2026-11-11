#include <stdio.h>
int main(void) {
    char source[100], destination[100];
    size_t i = 0;
    printf("Enter text: ");
    if (!fgets(source, sizeof source, stdin)) return 1;
    while (source[i] != '\0' && i < sizeof destination - 1) {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    printf("Copied: %s", destination);
    return 0;
}
