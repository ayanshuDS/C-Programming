#include<stdio.h>
#include<stdlib.h>

struct STUDENT
{
    int roll_number;
    char name[50];
    int total_marks;
};

void get_student_data(int size, struct STUDENT St[]);
void display_student_data(int size, struct STUDENT St[]);

int main()
{
    system("cls");

    struct STUDENT S[5];

    printf("\n\nEnter Roll Number, Name and Total Marks.\n");

    get_student_data(5, S);

    printf("\n_________________________________________\n");

    display_student_data(5, S);

    return 0;
}

void get_student_data(int size, struct STUDENT St[]){
    for(int i = 0; i < size; i++){
        St[i].roll_number = i + 1;
        printf("\nRoll Number : %d", St[i].roll_number);
        printf("\nEnter Name : ");
        gets(St[i].name);
        printf("\nEnter Total Marks : ");
        scanf("%d", &St[i].total_marks);
        getchar();
    }
}

void display_student_data(int size, struct STUDENT St[]){
    for(int i = 0; i < size; i++){
        printf("\n\nSTUDENT %d", i + 1);
        printf("\nRoll Number : %d", St[i].roll_number);
        printf("\t\tName : %s", St[i].name);
        printf("\t\tTotal Marks : %d", St[i].total_marks);
    }
}
