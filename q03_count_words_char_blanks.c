// Count the number of characters, words, and blank spaces in a string.

#include <stdio.h>
int main()
{
    char str[100];
    int i, character = 0, words = 0, blank = 0;
    printf("Enter A String: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        character++;
        if (str[i] == ' ') // assume that user not enter multiple time spaces
        {
            blank++;
        }
    }
    printf("Character = %d\n", character);
    printf("Words = %d\n", blank + 1);
    printf("Blank Space = %d\n", blank);
    return 0;
}
