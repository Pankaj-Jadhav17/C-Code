#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float weight;
    float cost;
    float profit;
    float ratio;
} Item;

// Selection sort function to sort items by ratio descending
void selectionSortByRatio(Item *items, int n) {
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (items[j].ratio > items[max].ratio)
                max = j;
        }
        if (max != i) {
            Item temp = items[i];
            items[i] = items[max];
            items[max] = temp;
        }
    }
}

int main() {
    int n;
    float M, SP;

    FILE *in = fopen("/home/pankaj/Desktop/c_code/Assignment/Knapsack1.txt", "r");
    if (!in) {
        printf("Error: Cannot open file, Please try again\n");
        return 1;
    }

    // Read first three lines with '=' signs
    if (fscanf(in, "n = %d\nM = %f\nSP = %f\n", &n, &M, &SP) != 3) {
        printf("Error: Invalid file format for n, M, SP\n");
        fclose(in);
        return 1;
    }

    // Dynamically allocate memory for n items
    Item *items = (Item *)malloc(n * sizeof(Item));
    if (items == NULL) {
        printf("Error: Memory allocation failed\n");
        fclose(in);
        return 1;
    }

    // Read item lines: weight and cost
    for (int i = 0; i < n; i++) {
        if (fscanf(in, "%f %f", &items[i].weight, &items[i].cost) != 2) {
            printf("Error: Invalid item line %d\n", i + 1);
            free(items);
            fclose(in);
            return 1;
        }
        items[i].profit = (SP * items[i].weight) - items[i].cost;
        items[i].ratio = items[i].profit / items[i].weight;
    }

    fclose(in);

    // Call the selection sort function to sort the items
    selectionSortByRatio(items, n);

    // Print sorted items to console
    printf("Weight\tCost\tProfit\tRatio\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\t%.2f\t%.2f\t%.2f\n",
               items[i].weight, items[i].cost, items[i].profit, items[i].ratio);
    }

    // Write sorted items to file
    FILE *out = fopen("sorted.txt", "w");
    if (!out) {
        printf("Error: Cannot create sorted.txt\n");
        free(items);
        return 1;
    }

    fprintf(out, "n = %d\nM = %.2f\nSP = %.2f\n", n, M, SP);
    for (int i = 0; i < n; i++) {
        fprintf(out, "%.2f %.2f %.2f %.2f\n",
                items[i].weight, items[i].cost, items[i].profit, items[i].ratio);
    }

    fclose(out);

    printf("Sorted and saved to sorted.txt\n");

    // Free dynamically allocated memory
    free(items);

    return 0;
}
