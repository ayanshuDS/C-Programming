#include <stdio.h>
#include <stdlib.h>

struct STUDENT
{
    int roll_number;
    char name[50];
    int total_marks;
};

void get_student_data(int i, struct STUDENT *St);
void display_student_data(int i, struct STUDENT *St);

int main()
{
    system("cls");

    struct STUDENT S[5];

    printf("\n\nEnter Roll Number, Name and Total Marks.\n");

    for (int i = 0; i < 5; i++)
    {
        get_student_data(i, &S[i]);
    }

    printf("\n_________________________________________\n");

    for (int i = 0; i < 5; i++)
    {
        display_student_data(i, &S[i]);
    }

    return 0;
}

void get_student_data(int i, struct STUDENT *St)
{
    St->roll_number = i + 1;
    printf("\nRoll Number : %d", St->roll_number);
    printf("\nEnter Name : ");
    gets(St->name);
    printf("\nEnter Total Marks : ");
    scanf("%d", &St->total_marks);
    getchar();
}

void display_student_data(int i, struct STUDENT *St)
{
    printf("\n\nSTUDENT %d", i + 1);
    printf("\nRoll Number : %d", St->roll_number);
    printf("\t\tName : %s", St->name);
    printf("\t\tTotal Marks : %d", St->total_marks);
}
