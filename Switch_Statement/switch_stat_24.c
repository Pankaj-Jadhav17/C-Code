#include<stdio.h>
int main()
{
    char grade;
    printf("enter a charcter..");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'A': printf("Excellent \n");
        break;
        case 'B': printf("Very Good\n");
        break;
        case 'C': printf("Good\n");
        break;
        case 'D': printf("improvement\n");
        break;
        case 'F': printf("Fail\n");
        break;
        default : printf("invalid Input\n");
    }
}