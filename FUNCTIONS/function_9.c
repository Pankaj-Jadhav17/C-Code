#include<stdio.h>
void printArray(int a[],int n)
{
    for (int i = 0; i < n; i++){
    printf("%d",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[4]={1,2,3,4};
    printArray(a,4);
    return 0;
}