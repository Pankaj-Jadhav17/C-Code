#include<stdio.h>
int main()
{
int n=0;
int ans=0;
printf("enter a number");
scanf("%d",&n);
for(int i=0;n>0;i++)
{
int R=n%10;
ans=(ans*10)+R;
n=n/10;
printf("ans = %d",ans);
}
}

