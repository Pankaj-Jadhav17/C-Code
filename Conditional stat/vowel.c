#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    ch = tolower(ch);  

    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    else
    {
        printf("number is not an alphabet\n");
    }
}