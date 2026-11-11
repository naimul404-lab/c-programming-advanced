#include <stdio.h>
int main(void) {
    FILE *f=fopen("people.csv","r");
    if(!f) { puts("Create people.csv with lines like: Naim,20"); return 1; }
    char line[120], name[80]; int age;
    while(fgets(line,sizeof line,f)) {
        if(sscanf(line,"%79[^,],%d",name,&age)==2)
            printf("Name: %s | Age: %d\n",name,age);
    }
    fclose(f);
    return 0;
}
