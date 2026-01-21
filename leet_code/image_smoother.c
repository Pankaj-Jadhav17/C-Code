#include <stdio.h>
#include <stdlib.h>

int** imageSmoother(int** img, int rows, int cols) {
    int** result = malloc(rows * sizeof(int*));
    int* data = malloc(rows * cols * sizeof(int));
    if (!result || !data) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < rows; i++) result[i] = data + i * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int sum = 0;
            int cnt = 0;
            
            int sR = (i > 0) ? i - 1 : 0;
            int eR = (i + 1 < rows) ? i + 1 : rows - 1;
            int sC = (j > 0) ? j - 1 : 0;
            int eC = (j + 1 < cols) ? j + 1 : cols - 1;
            for (int r = sR; r <= eR; r++) {
                for (int c = sC; c <= eC; c++) {
                    sum += img[r][c];
                    cnt++;
                }
            }
            result[i][j] = sum / cnt; /* integer division like original */
        }
    }
    return result;
}

static void free2D(int** arr) {
    if (!arr) return;
    free(arr[0]);
    free(arr);
}

int main(void) {
    int rows = 3, cols = 3;
    /* sample image from common examples */
    int sample[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    /* allocate and copy into int** structure */
    int** img = malloc(rows * sizeof(int*));
    int* idata = malloc(rows * cols * sizeof(int));
    if (!img || !idata) { perror("malloc"); return 1; }
    for (int i = 0; i < rows; i++) img[i] = idata + i * cols;
    for (int i = 0; i < rows; i++) for (int j = 0; j < cols; j++) img[i][j] = sample[i][j];

    int** out = imageSmoother(img, rows, cols);

    printf("Smoothed image:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", out[i][j]);
        }
        printf("\n");
    }

    free2D(out);
    free2D(img);
    return 0;
}
