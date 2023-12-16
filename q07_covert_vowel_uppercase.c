//  Enter a string and convert the vowels into uppercase characters.

#include <stdio.h>
int main()
{
    char str[100]; // string size limit to 100
    printf("Enter A String: ");
    scanf("%[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (
            ch == 'a' ||
            ch == 'e' ||
            ch == 'i' ||
            ch == 'o' ||
            ch == 'u')
        {
            str[i] = ch - 32;
        }
        printf("%c", str[i]);
    }

    return 0;
}