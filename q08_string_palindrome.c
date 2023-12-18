// Check whether the given string is palindrome or not.

#include <stdio.h>
int main()
{
    int palin = 1, str_len = 0;
    char str[100], cp_str[100]; // string size limit to 100
    printf("Enter A String: ");
    scanf("%[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        str_len++;
    }

    // Rverse a string
    for (int i = 0, j = str_len-1; i <= str_len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            palin = 0;
        }
    }
    if (palin)
        printf("Palindrome.");
    else
        printf("Not Palindrome!");

    return 0;
}