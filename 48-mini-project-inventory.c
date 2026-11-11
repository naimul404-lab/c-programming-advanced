#include <stdio.h>
typedef struct { int id, quantity; char name[40]; } Product;
int main(void) {
    Product p[50]; int count=0, choice;
    do {
        printf("\n1.Add 2.List 3.Exit: ");
        if(scanf("%d",&choice)!=1) return 1;
        if(choice==1 && count<50) {
            printf("ID: "); scanf("%d",&p[count].id);
            printf("Name (one word): "); scanf("%39s",p[count].name);
            printf("Quantity: "); scanf("%d",&p[count].quantity);
            if(p[count].quantity<0) { puts("Quantity cannot be negative."); continue; }
            count++;
        } else if(choice==2) {
            for(int i=0;i<count;i++) printf("%d | %s | %d\n",p[i].id,p[i].name,p[i].quantity);
        } else if(choice==1) puts("Inventory full.");
    } while(choice!=3);
    return 0;
}
