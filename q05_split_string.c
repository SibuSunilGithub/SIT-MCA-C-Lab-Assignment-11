// Split a string into two words whenever any space is found in it.

#include <stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter String: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
        if (str[i] == ' ')
        {
            printf("\n");
        }
    }

    return 0;
}
