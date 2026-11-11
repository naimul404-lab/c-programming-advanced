#include <stdio.h>
int main(void) {
    FILE *f=fopen("expenses.txt","a");
    if(!f) return 1;
    char item[60]; double amount, total=0.0; int count=0;
    printf("Enter expense name (one word): ");
    if(scanf("%59s",item)!=1) { fclose(f); return 1; }
    printf("Enter amount: ");
    if(scanf("%lf",&amount)!=1 || amount<0) { fclose(f); return 1; }
    fprintf(f,"%s %.2f\n",item,amount);
    fclose(f);
    f=fopen("expenses.txt","r");
    if(!f) return 1;
    while(fscanf(f,"%59s %lf",item,&amount)==2) { total+=amount; count++; }
    fclose(f);
    printf("Saved. Entries: %d | Total: %.2f\n",count,total);
    return 0;
}
