#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
      printf("Modified string: %s", str);
}

int main()
{
    char str[100];

    // Taking input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    capitalizeWords(str);

    // Output the modified string
  

    return 0;
}
