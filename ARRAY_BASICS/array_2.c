#include<stdio.h>
int main() 
{
    int a[100],i,n; 
    printf("Enter n integers:\n");
   
    for(i = 0; i < n; i++) 
    {
        printf("Number %d: ",i + 1);
        scanf("%d", &a[i]);
    }
    printf("Even numbers in the array are:\n");
    for(i = 0; i < 10; i++)
     {
        if(a[i] % 2 == 0)
         {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}


/*
#include<stdio.h>
int main() 
{
    int a[10],i; 
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) 
    {
        printf("Number %d: ",i + 1);
        scanf("%d", &a[i]);
    }
    printf("Even numbers in the array are:\n");
    for(i = 0; i < 10; i++)
     {
        if(a[i] % 2 == 0)
         {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
*/