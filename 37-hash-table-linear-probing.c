#include <stdio.h>
#define SIZE 10
int main(void) {
    int table[SIZE];
    for (int i=0;i<SIZE;i++) table[i]=-1;
    int values[] = {23, 43, 13, 27};
    for (int k=0;k<4;k++) {
        int index=values[k]%SIZE, start=index;
        while (table[index]!=-1) { index=(index+1)%SIZE; if(index==start) break; }
        if(table[index]==-1) table[index]=values[k];
    }
    for(int i=0;i<SIZE;i++) printf("%d: %d\n",i,table[i]);
    return 0;
}
