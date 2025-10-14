#include<stdio.h>
int main()
{
    int k,n,fact;
    
    while(1)
    {
        int fact=1;
        for(int f=k;f>0;f--)
        fact = fact*f;
        if(fact<=n)
        {
            ++k;
            continue;
        }
        else
        {
            printf("k=%d",k);
            k--;
            break;
        }
    }
}