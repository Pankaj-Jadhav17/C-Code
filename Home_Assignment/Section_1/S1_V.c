// Get and display the size of int, float, double, and char using sizeof

#include<stdio.h>
int main()
{
    printf("The size of integer = %zu bytes\n",sizeof(int));
    printf("The size of float = %zu bytes\n",sizeof(float));
    printf("The size of double = %zu bytes\n",sizeof(double));
    printf("The size of character = %zu bytes\n",sizeof(char));
    
   return 0;
}
