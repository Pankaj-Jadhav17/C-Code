#include<stdio.h>
int main()
{
    int num=0;
    printf("\n enter a number=");
    scanf("%d",&num);
    if(num>100 && num<200)
    {
        num=num/3;
        if(num>50)
            printf("number is small");
            else
            printf("number is not greater");
    }
        else if(num>200 && num<300)
        {
            num=num/2;
            if(num<110)
                printf("number is small");
                else
                {
                    num=num/5;
                     printf("number is not greater");
                }

        }
        else if(num>300)
        printf("very big number\n");
        else
        printf("very small number\n");
        return 0;
}
