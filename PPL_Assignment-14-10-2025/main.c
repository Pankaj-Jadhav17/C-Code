#include <stdio.h>
#include <stdlib.h>
#include "itemsort.h"   // For Item and selectionSortByRatio()
#include "knapsack.h"   // For fractionalKnapsack()

int main() {
    int n;
    float M, SP;

    FILE *in = fopen("/home/pankaj/Desktop/c_code/Assignment/Knapsack1.txt", "r");
    if (!in) {
        printf("Error: Cannot open input file\n");
        return 1;
    }

    if (fscanf(in, "n = %d\nM = %f\nSP = %f\n", &n, &M, &SP) != 3) {
        printf("Error: Invalid input file format\n");
        fclose(in);
        return 1;
    }

    Item *items = malloc(n * sizeof(Item));
    if (!items) {
        printf("Error: Memory allocation failed\n");
        fclose(in);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (fscanf(in, "%f %f", &items[i].weight, &items[i].cost) != 2) {
            printf("Error: Invalid item data at line %d\n", i+1);
            free(items);
            fclose(in);
            return 1;
        }
        items[i].profit = (SP * items[i].weight) - items[i].cost;
        items[i].ratio = items[i].profit / items[i].weight;
    }
    fclose(in);

    // Sort items by ratio
    selectionSortByRatio(items, n);

    // Write sorted items to file
    FILE *sortedFile = fopen("sorted.txt", "w");
    if (!sortedFile) {
        printf("Error: Cannot create sorted.txt\n");
        free(items);
        return 1;
    }

    fprintf(sortedFile, "n = %d\nM = %.2f\nSP = %.2f\n", n, M, SP);
    for (int i = 0; i < n; i++) {
        fprintf(sortedFile, "%.2f %.2f %.2f %.2f\n",
                items[i].weight, items[i].cost, items[i].profit, items[i].ratio);
    }
    fclose(sortedFile);

    // Now read sorted.txt again for knapsack (simulate separate use)
    FILE *sortedIn = fopen("sorted.txt", "r");
    if (!sortedIn) {
        printf("Error: Cannot open sorted.txt\n");
        free(items);
        return 1;
    }

    int n2;
    float M2, SP2;
    if (fscanf(sortedIn, "n = %d\nM = %f\nSP = %f\n", &n2, &M2, &SP2) != 3) {
        printf("Error: Invalid sorted.txt format\n");
        free(items);
        fclose(sortedIn);
        return 1;
    }

    // Allocate arrays for knapsack
    float *weight = malloc(n2 * sizeof(float));
    float *cost = malloc(n2 * sizeof(float));
    float *profit = malloc(n2 * sizeof(float));
    float *ratio = malloc(n2 * sizeof(float));

    if (!weight || !cost || !profit || !ratio) {
        printf("Error: Memory allocation failed\n");
        free(items);
        fclose(sortedIn);
        free(weight); free(cost); free(profit); free(ratio);
        return 1;
    }

    for (int i = 0; i < n2; i++) {
        if (fscanf(sortedIn, "%f %f %f %f", &weight[i], &cost[i], &profit[i], &ratio[i]) != 4) {
            printf("Error: Invalid data in sorted.txt at line %d\n", i+1);
            free(items);
            free(weight); free(cost); free(profit); free(ratio);
            fclose(sortedIn);
            return 1;
        }
    }
    fclose(sortedIn);

    // Open output file for knapsack result
    FILE *out = fopen("output.txt", "w");
    if (!out) {
        printf("Error: Cannot create output.txt\n");
        free(items);
        free(weight); free(cost); free(profit); free(ratio);
        return 1;
    }

    // Call knapsack function
    fractionalKnapsack(M2, n2, weight, profit, out);

    fclose(out);

    // Free all allocated memory
    free(items);
    free(weight);
    free(cost);
    free(profit);
    free(ratio);

    printf("Process complete. Sorted data saved to sorted.txt and knapsack result saved to output.txt\n");

    return 0;
}
