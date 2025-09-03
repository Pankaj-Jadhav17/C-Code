#include<stdio.h>
int main()
{
    int height,i=0,j;
    printf("Enter a Height: ");
    scanf("%d",&height);

    while(i<height)
    {
        int j=0;
        while(j<height)
        {
            printf("* ");
            j++;
        }
        
        printf("\n");
        i++;
    }
    return 0;
}