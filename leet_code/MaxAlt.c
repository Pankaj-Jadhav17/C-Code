#include <stdio.h>
#include <stdlib.h>

int largestAltitude(int *gain, int gainSize) {
	int maxA = 0;
	int currentA = 0;
	for (int i = 0; i < gainSize; ++i) {
		currentA += gain[i];
		if (currentA > maxA) {
			maxA = currentA;
		}
	}
	return maxA;
}

int main(void) {
	int gains1[] = {-5, 1, 5, 0, -7};
	int n1 = sizeof(gains1) / sizeof(gains1[0]);
	printf("Result 1: %d\n", largestAltitude(gains1, n1));

	int gains2[] = {-4, -3, -2, -1, 4, 3, 2};
	int n2 = sizeof(gains2) / sizeof(gains2[0]);
	printf("Result 2: %d\n", largestAltitude(gains2, n2));

	return 0;
}

