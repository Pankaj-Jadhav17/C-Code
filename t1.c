#include<stdio.h>
int main()
{
     printf("size of int = %ld bytes \n",sizeof(int));
    printf("size of float = %ld bytes \n",sizeof(float));
    printf("size of double = %ld bytes \n",sizeof(double));
    printf("size of char = %ld bytes \n",sizeof(char));
    printf("size of long int = %ld bytes \n",sizeof(long int));
    printf("size of long long int = %ld bytes \n",sizeof(long long int));
    printf("size of unsign long int = %ld bytes",sizeof(unsigned long int));
    printf("size of unsign long long int =%ld bytes \n",sizeof(unsigned long long int));
    printf("size of short = %ld bytes \n",sizeof(short));
    printf("size of unsign int = %ld bytes \n",sizeof(unsigned int));
    printf("size of long double = %ld bytes \n",sizeof(long double));
   // printf("size of bool = %d bytes \n",sizeof(bool));
}