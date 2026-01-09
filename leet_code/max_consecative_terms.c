#include<stdio.h>
int MaxConsecativeTerms(int nums[], int n)
{
    int cnt=0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if (nums[i]==1){
        cnt++;
        if(cnt>ans){
            ans = cnt;
        }
    }else{
            cnt = 0;
    }
    }
      return ans;
}
void printArray(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 1, 0, 1, 1, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    printArray(nums, n);

    int result = MaxConsecativeTerms(nums, n);
    printf("Maximum consecutive 1s: %d\n", result);

    return 0;
}