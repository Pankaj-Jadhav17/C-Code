#include<stdio.h>
int main()
{
    int n,i=2;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("print even number is 1 to %d",i);

    while (i<=n)
    {
       printf("%d\n",i);
       i = i+2;//i+=2
    }
    printf("\n");
    return 0;
}



/*
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("print odd number  =%d",i);
    i=1;
    while (i<=n)
    {
      printf("%d\n",i);
        i+=2;
    }
    printf("\n");
    return 0;
}
*/