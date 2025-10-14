#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter a alphabet");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch>='a' && ch<='z')
    {
        if("ch='a' || ch='e' || ch='i' || ch='o' || ch='u'")
        {
        printf("vowel\n");
        }
        else
        {
        printf("consonant\n");
        }
    }
    printf("number is not alphabet\n");
}