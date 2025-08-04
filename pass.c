#include<stdio.h>
int main()
{
    int marks;
    printf("enter number (0-100)");
    scanf("%d",&marks);
    if(marks>=30)
    {
        printf("PASS\n");
    }
    else{
        printf("FAIL\n");
    }
}