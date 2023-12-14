// Replace Spaces By # In The Strings.

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter String: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '#';
        }
    }
    printf("Replaced String Is: %s", str);
    return 0;
}
