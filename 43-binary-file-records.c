#include <stdio.h>
typedef struct { int id; char name[30]; double score; } Record;
int main(void) {
    Record r={101,"Sample Student",88.5}, readback;
    FILE *f=fopen("records.dat","wb");
    if(!f) return 1;
    if(fwrite(&r,sizeof r,1,f)!=1) { fclose(f); return 1; }
    fclose(f);
    f=fopen("records.dat","rb");
    if(!f) return 1;
    if(fread(&readback,sizeof readback,1,f)==1)
        printf("ID: %d\nName: %s\nScore: %.1f\n",readback.id,readback.name,readback.score);
    fclose(f);
    return 0;
}
