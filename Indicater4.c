#include <stdio.h>

int stringlength(char *given_string)
{
    int length = 0;
    while (*given_string != '\0')
    {
        length++;
        given_string++;
    }

    return length;
}

int main()
{
    char givenstring[] = "GeeksforGeeks";

    printf("Length of the String: %d",
           stringlength(givenstring));
    return 0;
}