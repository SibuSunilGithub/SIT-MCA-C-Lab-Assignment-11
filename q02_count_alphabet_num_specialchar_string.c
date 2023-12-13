// Count the number of alphabets, digits and special characters present in a string.

#include <stdio.h>
int main()
{
    char str[100];
    int i, alpha = 0, dgt = 0, s_char = 0;
    printf("Enter A String: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alpha++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            dgt++;
        }
        else
        {
            s_char++;
        }
    }
    printf("Alphabets = %d\nDigits = %d\nSpecial Characters = %d\n", alpha, dgt, s_char);
    return 0;
}
