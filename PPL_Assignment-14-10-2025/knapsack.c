#include <stdio.h>
#include <stdlib.h>

// Knapsack function prototype
void fractionalKnapsack(float M, int n, float *weight, float *profit, FILE *out);

int main() {
    int n;
    float M, SP;

    FILE *in = fopen("/home/pankaj/Desktop/c_code/Assignment/sorted.txt", "r");
    if (!in) {
        printf("Error: Cannot open sorted.txt\n");
        return 1;
    }

    if (fscanf(in, "n = %d\nM = %f\nSP = %f\n", &n, &M, &SP) != 3) {
        printf("Error: Invalid sorted file\n");
        fclose(in);
        return 1;
    }

    // Dynamic allocation for arrays
    float *weight = malloc(n * sizeof(float));
    float *cost = malloc(n * sizeof(float));    // cost not used here but read to keep format consistent
    float *profit = malloc(n * sizeof(float));
    float *ratio = malloc(n * sizeof(float));   // ratio not used here but read to keep format consistent

    if (!weight || !cost || !profit || !ratio) {
        printf("Error: Memory allocation failed\n");
        fclose(in);
        free(weight); free(cost); free(profit); free(ratio);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (fscanf(in, "%f %f %f %f", &weight[i], &cost[i], &profit[i], &ratio[i]) != 4) {
            printf("Error: Invalid item data on line %d\n", i+1);
            fclose(in);
            free(weight); free(cost); free(profit); free(ratio);
            return 1;
        }
    }
    fclose(in);

    FILE *out = fopen("output.txt", "w");
    if (!out) {
        printf("Error: Cannot create output.txt\n");
        free(weight); free(cost); free(profit); free(ratio);
        return 1;
    }

    // Call the knapsack function
    fractionalKnapsack(M, n, weight, profit, out);

    fclose(out);
    free(weight); free(cost); free(profit); free(ratio);

    printf("Knapsack done. Output saved to output.txt\n");
    return 0;
}

// Fractional Knapsack function implementation
void fractionalKnapsack(float M, int n, float *weight, float *profit, FILE *out) {
    float remaining = M, total = 0;

    fprintf(out, "Selected Items with weight & profit\n");
    printf("Selected Items with weight & profit\n"); // Also print on console

    for (int i = 0; i < n; i++) {
        if (remaining >= weight[i]) {
            remaining -= weight[i];
            total += profit[i];
            fprintf(out, "%.2f %.2f (Full)\n", weight[i], profit[i]);
            printf("%.2f %.2f (Full)\n", weight[i], profit[i]);
        } else {
            float frac = remaining / weight[i];
            total += profit[i] * frac;
            fprintf(out, "%.2f %.2f (Fraction %.2f)\n", weight[i], profit[i] * frac, frac);
            printf("%.2f %.2f (Fraction %.2f)\n", weight[i], profit[i] * frac, frac);
            break;
        }
    }

    fprintf(out, "\nTotal Profit %.2f\n", total);
    printf("\nTotal Profit %.2f\n", total);
}
