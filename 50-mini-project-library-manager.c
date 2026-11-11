#include <stdio.h>
typedef struct { int id; char title[60]; int available; } Book;
int main(void) {
    Book books[100]; int count=0, choice, id;
    do {
        printf("\n1.Add book 2.List books 3.Borrow 4.Return 5.Exit: ");
        if(scanf("%d",&choice)!=1) return 1;
        if(choice==1 && count<100) {
            printf("Book ID: "); scanf("%d",&books[count].id);
            printf("Title (use_underscores): "); scanf("%59s",books[count].title);
            books[count].available=1; count++;
        } else if(choice==2) {
            for(int i=0;i<count;i++)
                printf("%d | %s | %s\n",books[i].id,books[i].title,books[i].available?"Available":"Borrowed");
        } else if(choice==3 || choice==4) {
            printf("Book ID: "); scanf("%d",&id);
            int found=0;
            for(int i=0;i<count;i++) if(books[i].id==id) {
                found=1;
                if(choice==3 && books[i].available) { books[i].available=0; puts("Borrowed."); }
                else if(choice==4 && !books[i].available) { books[i].available=1; puts("Returned."); }
                else puts("Action not possible for current status.");
                break;
            }
            if(!found) puts("Book not found.");
        } else if(choice==1) puts("Book list full.");
    } while(choice!=5);
    return 0;
}
