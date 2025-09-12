#include <stdio.h>
int main()
{
    int i,numbers[6];  
    printf("Enter 6 numbers:\n");
    for(i = 0; i < 6; i++)
     {
        printf("Number %d: ",i + 1);
        scanf("%d",&numbers[i]);
    }
    printf("\nYou entered:\n");
    for(i = 0; i < 6; i++) 
    {
        printf("%d\n",numbers[i]);
    }
    return 0;
}





/*
#include <stdio.h>
int main()
{
    int i,numbers[6];  
    printf("Enter 6 numbers:\n");
    for(i = 0; i < 6; i++)
     {
        printf("Number %d: ",i + 1);
        scanf("%d",&numbers[i]);
    }
    printf("\nYou entered:\n");
    for(i = 6; i >= 0; i--) 
    {
        printf("%d\n",numbers[i]);
    }
    return 0;
}
*/