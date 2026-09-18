#include <stdio.h>

int main()
{
    char Name[50] = {};


    printf("This code will generate a personalized welcome.\nPlease enter your name: ");
    scanf(" %s", Name);

    printf("Hello %s!! This is the cse1106 lab. Welcome!\n", Name);

    return 0;
}
