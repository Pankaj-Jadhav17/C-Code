#include <stdio.h>
#include <stdlib.h>

/*
  The returned array must be malloced,
  assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    // allocate memory for result array
    int* ans = (int*)malloc(sizeof(int) * 2 * n);

    int ans_i = 0;

    for (int i = 0; i < n; i++) {
        ans[ans_i] = nums[i];
        ans[ans_i + 1] = nums[i + n];
        ans_i += 2;
    }

    *returnSize = 2 * n;
    return ans;
}
int main(){
    int numsSize, n, returnSize;
    printf("Enter the size of the array (2n): ");
    scanf("%d", &numsSize);
    n = numsSize / 2;
    int* nums = (int*)malloc(sizeof(int) * numsSize);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int* result = shuffle(nums, numsSize, n, &returnSize);
    printf("Shuffled array: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(nums);
    free(result);
}