#include <stdio.h>
#include <stdlib.h>

void compute_smaller_counts(const int *nums, int n, int *ans) {
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (j != i && nums[j] < nums[i]) cnt++;
        }
        ans[i] = cnt;
    }
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) {
        putchar('\n');
        return 0;
    }

    int *nums = malloc(n * sizeof(int));
    int *ans = malloc(n * sizeof(int));
    if (!nums || !ans) {
        free(nums); free(ans);
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &nums[i]) != 1) nums[i] = 0;
    }

    compute_smaller_counts(nums, n, ans);

    for (int i = 0; i < n; ++i) {
        if (i) putchar(' ');
        printf("%d", ans[i]);
    }
    putchar('\n');

    free(nums);
    free(ans);
    return 0;
}
