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
    int isPalindrome=1;
    while (i<n)
    {
        if(a[i] != a[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome)
    printf("number is palindrome\n");
    else
    printf("number is not palidrome\n");
    return 0;
}


