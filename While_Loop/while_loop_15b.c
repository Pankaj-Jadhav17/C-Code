//right angle triangle
#include<stdio.h>
int main()
{
    int height,i=1,j;
    printf("Enter a Height: ");
    scanf("%d",&height);
    while (i<=height)
    {
        j=1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}


/*
#include <stdio.h>

int main() {
    int height, i = 1, j;

    printf("Enter height: ");
    scanf("%d", &height);

    while (i <= height) {
        j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
*/