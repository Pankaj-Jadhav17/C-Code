//​Display all uppercase ASCII characters with their integer values
#include<stdio.h>
int main()
{
    char ch = 'A';
    while(ch<='Z')
    {
        printf("%c : %d\n",ch,ch);
        ch++;
    } 
    return 0;
}