#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *f=fopen("input.txt","r");
    if(!f) { puts("Create input.txt first."); return 1; }
    int ch, in_word=0; long lines=0, words=0, chars=0; int last='\n';
    while((ch=fgetc(f))!=EOF) {
        chars++; last=ch;
        if(ch=='\n') lines++;
        if(isspace((unsigned char)ch)) in_word=0;
        else if(!in_word) { words++; in_word=1; }
    }
    if(chars>0 && last!='\n') lines++;
    fclose(f);
    printf("Lines: %ld\nWords: %ld\nCharacters: %ld\n",lines,words,chars);
    return 0;
}
