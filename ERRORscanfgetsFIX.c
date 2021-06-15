#include<stdio.h>
#include<stdlib.h>

struct STUDENT
{
    int roll_number;
    char name[50];
    int total_marks;
};

//Tutorial To Overcome scanf() gets() Mixing Error.

int main()
{
    system("cls");

    struct STUDENT S;

    printf("\n\nEnter Student's Roll Number, Name, Total Marks.");

    printf("\nEnter Roll Number : ");
    scanf("%d%*c", &S.roll_number); // - Option 1
    //getchar(); - Option 2
    //getc(stdin); - Option 3
    printf("\nEnter Name : ");
    gets(S.name);
    //Two gets(S.name) function - Option 4
    printf("\nEnter Total Marks : ");
    scanf("%d", &S.total_marks);

    printf("\n____________________________________________________\n");

    printf("\nStudent Name : %s", S.name);
    printf("\nStudent Roll Number : %d", S.roll_number);
    printf("\nTotal Marks : %d", S.total_marks);
}
