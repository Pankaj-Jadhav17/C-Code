// Write a program to read two distinct integers from user and 
// print the larger number using ternary operater

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a two numbers: ");
    scanf("%d%d",&a,&b);
    a>b? printf("The number %d is larger\n",a) : printf("The number %d is not larger\n",a);
}