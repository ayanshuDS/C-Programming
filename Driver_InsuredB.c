#include<stdio.h>

struct DRIVER
{
    int age;
    char gender, status;
};

int main()
{
    struct DRIVER D1;

    printf("\n\nEnter AGE, GENDER and MARTIAL STATUS of Driver.\n");

    printf("\nEnter AGE : ");
    scanf("%d", &D1.age);
    printf("\nEnter GENDER(M/F) : ");
    scanf(" %c", &D1.gender);
    printf("\nEnter MARTIAL STATUS(M/U) : ");
    scanf(" %c", &D1.status);

    if((D1.status != ('U'|'u')) || (D1.gender != ('M'|'m'|'F'|'f'))){
        printf("\nINVALID INPUT.");
        return 0;
    }

    if(D1.status == ('M'|'m')){
        printf("\nDriver is INSURED.");
    }else if((D1.status == ('U'|'u')) && (D1.gender == ('M'|'m')) && (D1.age > 30)){
        printf("\nDriver is INSURED.");
    }else if((D1.status == ('U'|'u')) && (D1.gender == ('F'|'f')) && (D1.age > 25)){
        printf("\nDriver is INSURED.");
    }else{
        printf("\nDriver NOT INSURED.");
    }
}
