#include <stdio.h>
int main(int argc, char *argv[]) {
    printf("Number of arguments (excluding program name): %d\n", argc - 1);
    for (int i = 1; i < argc; i++) printf("Argument %d: %s\n", i, argv[i]);
    return 0;
}
