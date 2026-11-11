#include <stdio.h>
typedef struct { int id; char name[50]; float gpa; } Student;
int main(void) {
    FILE *f; Student s; int choice;
    do {
        printf("\n1.Add student 2.List students 3.Exit: ");
        if(scanf("%d",&choice)!=1) return 1;
        if(choice==1) {
            printf("ID: "); scanf("%d",&s.id);
            printf("Name (one word): "); scanf("%49s",s.name);
            printf("GPA: "); scanf("%f",&s.gpa);
            f=fopen("students.txt","a"); if(!f) return 1;
            fprintf(f,"%d %s %.2f\n",s.id,s.name,s.gpa); fclose(f);
        } else if(choice==2) {
            f=fopen("students.txt","r");
            if(!f) { puts("No records yet."); continue; }
            while(fscanf(f,"%d %49s %f",&s.id,s.name,&s.gpa)==3)
                printf("%d | %s | %.2f\n",s.id,s.name,s.gpa);
            fclose(f);
        }
    } while(choice!=3);
    return 0;
}
