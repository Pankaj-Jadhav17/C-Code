#include <stdio.h>
#include <stdlib.h>

/*
 * nums      : input array
 * numsSize  : size of array
 * target    : target sum
 * returnSize: number of elements returned
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main() {
    int n, target, returnSize;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* nums = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    int* result = twoSum(nums, n, target, &returnSize);

    if (returnSize == 2) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No two sum solution found\n");
    }

    free(nums);
    free(result);

    return 0;
}









// int main() {
//     int nums[] = {2, 7, 11, 15};
//     int target = 9;
//     int returnSize;

//     int* result = twoSum(nums, 4, target, &returnSize);

//     if (returnSize == 2)
//         printf("[%d, %d]\n", result[0], result[1]);

//     free(result);
//     return 0;
// }

