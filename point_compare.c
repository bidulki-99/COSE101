#include <stdio.h>
#include <stdlib.h>

struct Point {
	int x;
	int y;
} point[100000];

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &point[i].x, &point[i].y);
	}

	qsort(point, n, sizeof(int), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", point[i].x, point[i].y);
	}
}
