#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
	int cnt = n;
	for (int i = 0; i < flowerbedSize && cnt > 0; ++i) {
		if (flowerbed[i] == 0) {
			bool left = (i == 0) || (flowerbed[i - 1] == 0);
			bool right = (i == flowerbedSize - 1) || (flowerbed[i + 1] == 0);
			if (left && right) {
				flowerbed[i] = 1;
				cnt--;
			}
		}
	}
	return cnt <= 0;
}

int main(void) {
	int flowerbed[] = {1,0,0,0,1};
	int size = sizeof(flowerbed) / sizeof(flowerbed[0]);
	int n = 1;

	bool res = canPlaceFlowers(flowerbed, size, n);
	if (res)
		printf("Can place %d flowers: true\n", n);
	else
		printf("Can place %d flowers: false\n", n);

	return 0;
}
