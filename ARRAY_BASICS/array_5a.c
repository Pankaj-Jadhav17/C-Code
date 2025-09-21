#include<stdio.h>
int main()
{
    int n,a[n];
    printf("Enter number of entegers: ");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int i=0;
    int j=n-1;
   
    int flag=1;
    while (i<j)
    {
        if(a[i] != a[j])
        {
           
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag == 1)
    printf("number is palindrome\n");
    else
    printf("number is not palidrome\n");

    return 0;
}


