#include <stdio.h>
#include <stdlib.h>

// Function to swap floats
void swap_float(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Selection sort based on profit_per_weight
void selectionSort(int n, float *weights, float *cost_prices, float *profits, float *profit_per_weight) {
    int i, j, max_idx;
    for (i = 0; i < n - 1; i++) {
        max_idx = i;
        for (j = i + 1; j < n; j++) {
            if (profit_per_weight[j] > profit_per_weight[max_idx]) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            swap_float(&weights[i], &weights[max_idx]);
            swap_float(&cost_prices[i], &cost_prices[max_idx]);
            swap_float(&profits[i], &profits[max_idx]);
            swap_float(&profit_per_weight[i], &profit_per_weight[max_idx]);
        }
    }
}

// Fractional Knapsack algorithm
float fractionalKnapsack(int n, float *weights, float *profits, float capacity) {
    float total_profit = 0.0;

    printf("\nItems taken into knapsack:\n");
    printf("--------------------------------------------------\n");
    printf("| %-8s | %-8s | %-8s | %-8s |\n", "Weight", "Profit", "Fraction", "Used Wt");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < n && capacity > 0; i++) {
        if (weights[i] <= capacity) {
            total_profit += profits[i];
            printf("| %-8.2f | %-8.2f | %-8.2f | %-8.2f |\n", weights[i], profits[i], 1.0, weights[i]);
            capacity -= weights[i];
        } else {
            float fraction = capacity / weights[i];
            total_profit += profits[i] * fraction;
            printf("| %-8.2f | %-8.2f | %-8.2f | %-8.2f |\n", weights[i], profits[i], fraction, capacity);
            capacity = 0;
        }
    }

    printf("--------------------------------------------------\n");
    return total_profit;
}

int main() {
    int n;
    float sell_price, capacity;

    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open input file.\n");
        return 1;
    }

    // Read number of items
    fscanf(file, "%d", &n);

    // Allocate memory
    float *weights = (float *)malloc(n * sizeof(float));
    float *cost_prices = (float *)malloc(n * sizeof(float));
    float *profits = (float *)malloc(n * sizeof(float));
    float *profit_per_weight = (float *)malloc(n * sizeof(float));

    if (!weights || !cost_prices || !profits || !profit_per_weight) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    // Read weight and cost price for each item
    for (int i = 0; i < n; i++) {
        fscanf(file, "%f %f", &weights[i], &cost_prices[i]);
    }

    // Read capacity and selling price
    fscanf(file, "%f", &capacity);
    fscanf(file, "%f", &sell_price);

    fclose(file); // Done reading input

    // Calculate profits and profit per weight
    for (int i = 0; i < n; i++) {
        float revenue = weights[i] * sell_price;
        profits[i] = revenue - cost_prices[i];
        profit_per_weight[i] = profits[i] / weights[i];
    }

    // Sort by profit/weight using selection sort
    selectionSort(n, weights, cost_prices, profits, profit_per_weight);

    // Apply fractional knapsack
    float max_profit = fractionalKnapsack(n, weights, profits, capacity);

    printf("\nMaximum profit achievable = %.2f\n", max_profit);

    // Free memory
    free(weights);
    free(cost_prices);
    free(profits);
    free(profit_per_weight);

    return 0;
}






// #include <stdio.h>
// #include <stdlib.h>

// // Function to swap floats
// void swap_float(float *a, float *b) {
//     float temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Selection sort based on profit_per_weight
// void selectionSort(int n, float *weights, float *cost_prices, float *profits, float *profit_per_weight) {
//     int i, j, max_idx;
//     for (i = 0; i < n - 1; i++) {
//         max_idx = i;
//         for (j = i + 1; j < n; j++) {
//             if (profit_per_weight[j] > profit_per_weight[max_idx]) {
//                 max_idx = j;
//             }
//         }
//         if (max_idx != i) {
//             swap_float(&weights[i], &weights[max_idx]);
//             swap_float(&cost_prices[i], &cost_prices[max_idx]);
//             swap_float(&profits[i], &profits[max_idx]);
//             swap_float(&profit_per_weight[i], &profit_per_weight[max_idx]);
//         }
//     }
// }

// // Fractional Knapsack algorithm
// float fractionalKnapsack(int n, float *weights, float *profits, float capacity) {
//     float total_profit = 0.0;

//     printf("\nItems taken into knapsack:\n");
//     printf("--------------------------------------------------\n");
//     printf("| %-8s | %-8s | %-8s | %-8s |\n", "Weight", "Profit", "Fraction", "Used Wt");
//     printf("--------------------------------------------------\n");

//     for (int i = 0; i < n && capacity > 0; i++) {
//         if (weights[i] <= capacity) {
//             total_profit += profits[i];
//             printf("| %-8.2f | %-8.2f | %-8.2f | %-8.2f |\n", weights[i], profits[i], 1.0, weights[i]);
//             capacity -= weights[i];
//         }
//          else
//          {
//             float fraction = capacity / weights[i];
//             total_profit += profits[i] * fraction;
//             printf("| %-8.2f | %-8.2f | %-8.2f | %-8.2f |\n", weights[i], profits[i], fraction, capacity);
//             capacity = 0;
//         }
//     }

//     printf("--------------------------------------------------\n");
//     return total_profit;
// }

// int main() {
//     int n;
//     float sell_price, capacity;

//     FILE *file = fopen("Knapsack1.txt", "r");
//     // FILE *output = fopen("sorted.txt", "r");
//     if (file == NULL) {
//         printf("Error: Could not open input file.\n");
//         return 1;
//     }

//     // Read number of items
//     fscanf(file, "%d", &n);

//     // Allocate memory
//     float *weights = (float *)malloc(n * sizeof(float));
//     float *cost_prices = (float *)malloc(n * sizeof(float));
//     float *profits = (float *)malloc(n * sizeof(float));
//     float *profit_per_weight = (float *)malloc(n * sizeof(float));

//     if (!weights || !cost_prices || !profits || !profit_per_weight) {
//         printf("Memory allocation failed.\n");
//         fclose(file);
//         return 1;
//     }

//     // Read weight and cost price for each item
//     for (int i = 0; i < n; i++) {
//         fscanf(file, "%f %f", &weights[i], &cost_prices[i]);
//     }

//     // Read capacity and selling price
//     fscanf(file, "%f", &capacity);
//     fscanf(file, "%f", &sell_price);

//     fclose(file); // Done reading input

//     // Calculate profits and profit per weight
//     for (int i = 0; i < n; i++) {
//         float revenue = weights[i] * sell_price;
//         profits[i] = revenue - cost_prices[i];
//         profit_per_weight[i] = profits[i] / weights[i];
//     }

//     // Sort by profit/weight using selection sort
//     selectionSort(n, weights, cost_prices, profits, profit_per_weight);

//     // Apply fractional knapsack
//     float max_profit = fractionalKnapsack(n, weights, profits, capacity);

//     printf("\nMaximum profit achievable = %.2f\n", max_profit);

//     // Free memory
//     free(weights);
//     free(cost_prices);
//     free(profits);
//     free(profit_per_weight);

//     return 0;
// }
