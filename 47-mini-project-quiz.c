#include <stdio.h>
int main(void) {
    const char *questions[]={"Which symbol ends a C statement?","Which header declares printf?"};
    const char *options[]={"1) :  2) ;  3) ,","1) stdio.h  2) stdlib.h  3) string.h"};
    int answers[]={2,1}, choice, score=0;
    for(int i=0;i<2;i++) {
        printf("\n%s\n%s\nYour answer: ",questions[i],options[i]);
        if(scanf("%d",&choice)!=1) return 1;
        if(choice==answers[i]) { puts("Correct!"); score++; } else puts("Not quite.");
    }
    printf("Final score: %d/2\n",score);
    return 0;
}
