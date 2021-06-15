#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int count_vowel(char string[]);

int main()
{
    system("cls");
    char str[50];

    printf("\n\nEnter the String : \n");
    gets(str);

    printf("\nNumber of Vowels : %d", count_vowel(str));
}

int count_vowel(char string[]){
    int count = 0;

    int i = 0;
    while(i < strlen(string)){
        switch(string[i]){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
        i++;
    }
    return count;
}
