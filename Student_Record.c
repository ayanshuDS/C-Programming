#include<stdio.h>
#include<stdlib.h>

struct STUDENT
{
    int roll_number;
    char name[50];
    int total_marks;
};

int main()
{
    system("cls");

    struct STUDENT S[5];

    printf("\n\nEnter Roll Number, Name and Total Marks.\n");

    for(int i = 0; i < 5; i++){
        printf("\nFor Student %d :- ", i + 1);
        S[i].roll_number = i + 1;
        printf("\nRoll Number : %d", S[i].roll_number);
        printf("\nEnter Name : ");
        gets(S[i].name);
        printf("Enter Total Marks : ");
        scanf("%d", &S[i].total_marks);
        getchar();
    }

    printf("\n\n\nSTUDENT DETAILS-------------------------------------------------");
    printf("\n________________________________________________________________");

    for(int i = 0; i < 5; i++){
        printf("\n\nStudent %d", i + 1);
        printf("\nRoll Number : %d", S[i].roll_number);
        printf("\t\tName : %s", S[i].name);
        printf("\t\tTotal Marks : %d", S[i].total_marks);
    }

    printf("\n\n\n\nSTUDENT DETAILS (75 MARKS and ABOVE)----------------------------");
    printf("\n________________________________________________________________");

    for(int i = 0; i < 5; i++){
        if(S[i].total_marks >= 75){
            printf("\n\nStudent %d", i + 1);
            printf("\nRoll Number : %d", S[i].roll_number);
            printf("\t\tName : %s", S[i].name);
            printf("\t\tTotal Marks : %d", S[i].total_marks);
        }
    }

    return 0;
}
