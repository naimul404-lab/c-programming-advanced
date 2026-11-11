#include <stdio.h>
int main(void) {
    char text[200];
    size_t length = 0;
    printf("Enter text: ");
    if (!fgets(text, sizeof text, stdin)) return 1;
    while (text[length] != '\0' && text[length] != '\n') length++;
    printf("Length: %zu\n", length);
    return 0;
}
