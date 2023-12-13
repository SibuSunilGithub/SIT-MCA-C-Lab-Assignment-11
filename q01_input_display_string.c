// Accept a string from keyboard and display it.

#include <stdio.h>
int main()
{
    char str[100]; // string size limit to 100
    printf("Enter A String: ");
    scanf("%[^\n]s", str);
    printf("%s", str);
    return 0;
}
