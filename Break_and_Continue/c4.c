#include<stdio.h>
int main()
{
    int i=1;
    int n;    
    while (i<=n)
    {
        if(i%10 == 5)
        continue;
        else
        printf("%d",i);
        ++i;
    }
}