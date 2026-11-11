#include <stdio.h>
int main(void) {
    FILE *src=fopen("input.txt","r");
    if(!src) { puts("Create input.txt first."); return 1; }
    FILE *dst=fopen("copy.txt","w");
    if(!dst) { fclose(src); return 1; }
    int ch;
    while((ch=fgetc(src))!=EOF) fputc(ch,dst);
    fclose(src); fclose(dst);
    puts("Copied input.txt to copy.txt");
    return 0;
}
