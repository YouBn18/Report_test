#include <stdio.h>

void main() {

	int a[3];
	int imsi = 0;

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (a[j] > a[j + 1]) {
				imsi = a[j + 1];
				a[j + 1] = a[j];
				a[j] = imsi;
			}
		}
	}

	printf("%d", a[1]);


}