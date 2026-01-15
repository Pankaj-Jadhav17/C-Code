#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void mergeAlternately(char *word1, char *word2, char *result) {
    int i = 0, j = 0, k = 0;
    int sz1 = strlen(word1);
    int sz2 = strlen(word2);

    while (i < sz1 && j < sz2) {
        result[k++] = word1[i++];
        result[k++] = word2[j++];
    }
    while (i < sz1) {
        result[k++] = word1[i++];
    }
    while (j < sz2) {
        result[k++] = word2[j++];
    }
    result[k] = '\0';
}

int main() {
    char word1[MAX_LEN], word2[MAX_LEN], result[2 * MAX_LEN];

    printf("Enter first string: ");
    scanf("%s", word1);

    printf("Enter second string: ");
    scanf("%s", word2);

    mergeAlternately(word1, word2, result);

    printf("Merged string: %s\n", result);

    return 0;
}