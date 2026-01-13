#include <stdio.h>
#include <stdlib.h>

/* Comparator function for qsort */
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

/* Height Checker Function */
int heightChecker(int* heights, int heightsSize) {
    int i, count = 0;

    /* Create a copy of heights array */
    int* expected = (int*)malloc(heightsSize * sizeof(int));
    if (expected == NULL)
        return 0;

    for (i = 0; i < heightsSize; i++) {
        expected[i] = heights[i];
    }

    /* Sort the copied array */
    qsort(expected, heightsSize, sizeof(int), compare);

    /* Count mismatches */
    for (i = 0; i < heightsSize; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    /* Free allocated memory */
    free(expected);

    return count;
}

/* Main function for testing */
int main() {
    int heights[] = {1, 1, 4, 2, 1, 3};
    int size = sizeof(heights) / sizeof(heights[0]);

    int result = heightChecker(heights, size);
    printf("Number of students in incorrect positions: %d\n", result);

    return 0;
}
