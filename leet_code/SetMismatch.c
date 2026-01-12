#include <stdio.h>
#include <stdlib.h>

int* MissNums(int* nums, int n, int* returnSize) {
    int dup = -1, miss = -1;
    for (int i = 0; i < n; i++) {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] < 0)
            dup = abs(nums[i]);
        else
            nums[idx] = -nums[idx];
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            miss = i + 1;
            break;
        }
    }
    int* ans = (int*)malloc(2 * sizeof(int));
    ans[0] = dup;
    ans[1] = miss;

    *returnSize = 2;
    return ans;
}
int main() {
    int nums[] = {1, 2, 2, 4};
    int returnSize;
    int* ans = MissNums(nums, 4, &returnSize);
    printf("Duplicate: %d\n", ans[0]);
    printf("Missing: %d\n", ans[1]);
    free(ans);
    return 0;
}


