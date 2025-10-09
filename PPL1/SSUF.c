// #include<stdio.h>
// void selectionSort(int n, int a[])
// {
//     int min,temp,j,i;
//     for(i=0;i<n-1;i++)
//     {
//         min=i;
//         for (j=i+1;j<n;j++)
//         {
//             if(a[j]<a[i])
//             {
//                 min=j;
//             }
//         }
//         temp=a[i];
//         a[i]=a[min];
//         a[min]=temp;
//     }
// }
// int main()
// {
//     float i,a[100],n;
//     printf("Enter how many numbers: ");
//     scanf("%f",&n);
//     for ( i = 0; i < n; i++)
//     scanf("%f",&a[i]);
//     selectionSort(n,a);
//      printf("Array in sorted order\n");
//     for ( i = 0; i < n; i++)
//         printf("%f",a[i]);
//         printf("\n");
// }


#include<stdio.h>
void selectionSort(int n, int a[])
{
    int min,temp;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for (int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main()
{
    //SELECTION
    int i,n;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    selectionSort(n,a);
     printf("Array in sorted order\n");
    for ( i = 0; i < n; i++)
        printf("%d",a[i]);
        printf("\n");
    
        //SNAPSACK
        
    printf("enter number of items:");
    scanf("%d",&n);
    
    float value[n], weight[n],ratio[0];
    for (int i = 0; i < n; i++)
    {
        printf("enter value of weight of item: %d",i+1);
        scanf("%e%e",&value[i],&weight[i]);
        ratio[i] = value[i]/weight[i];
    }
    float capacity;
    printf("Enter snapsack minimum capacity: ");
    scanf("%f",&capacity);
    for (int i = 0; i < n-1; i++)
    {
        int max_index = i;
        for (int j=0;j<n;j++)
        {
            if (ratio[j]>ratio[max_index])
            {
                max_index = j;
            }
            float temp;
            temp = ratio[i];
            ratio[i]=ratio[max_index];
            ratio[max_index]=temp;

            temp=value[i];
            value[i]=value[max_index];
            value[max_index]=temp;

            temp=weight[i];
            weight[i]=weight[max_index];
            weight[max_index]=temp;

            float total_value = 0.0;
             for (int i = 0; i < n && capacity>0;i++)
             {
                if (weight[i]<=capacity)
                {
                    total_value += value[i];
                    capacity -= weight[i];
                    printf("Look full items %d(value=%2f , weight= %2f)\n",i+1,value[i],weight[i]); 
                }
                {
                    float fraction = capacity/weight[i];
                    total_value += value[i]*fraction;
                    printf("look %2f fraction of item %d (value = %2f, weight = %2f)\n",fraction,i+1,value[i],weight[i]);
                    capacity=0;

                }
                
             }
             printf("\n minimum value that can be llocated = %2f\n",total_value);
             return 0;
             
        }
        
    }
    
    
}