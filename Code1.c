#include <stdio.h>

int main()
{
    char Name[50] = {};
    int num;

    printf("This code will generate a personalized welcome.\nPlease enter your name: ");
    scanf(" %s", Name);

    printf("Hello %s!! This is the cse1106 lab. Welcome!\nWhen you are ready to exit, type 1 or 0 and hit enter...", Name);
    scanf("%d", &num);

    printf("Wow. Cya! K Bye!!!!\n");

    return 0;
}
