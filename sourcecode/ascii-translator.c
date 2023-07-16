#include <stdio.h>
#include <string.h>
/*
* main - Entry point.
*
* Description - It takes normal characters then translate it into ASCII value.
*
* Return: Always 0 (Success)
*/

int main(void)
{
    int i, a, length;
    char character[i];

    printf("Character(s) you want to translate?\n");
    scanf("%s", character);
    length = strlen(character);
    printf("You entered %d character(s)\nThe character(s) in ASCII is: ", length);
    for (a = 0; a < length; a++)
    {
        printf("%i", character[a]);
        if (a < length - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
    return (0);
}