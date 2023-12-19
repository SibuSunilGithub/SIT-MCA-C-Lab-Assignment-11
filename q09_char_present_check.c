//  Check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>
int main()
{
    char ch, str[100]; // string size limit to 100
    int find = 0;
    printf("Enter A String: ");
    gets(str);
    printf("Enter The Character You Want To check: ");
    scanf("%c", &ch);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            find = 1;
            break;
        }
    }
    if (find)
    {
        printf("Character Present.");
    }
    else
    {
        printf("Character Not Present.");
    }
    return 0;
}