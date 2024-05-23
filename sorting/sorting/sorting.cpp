#include "sorting.h"

void bubble_sort(int* tab, int n) {
	int temp;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (tab[j] > tab[j + 1]) {
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}

void insertion_sort(int* tab, int n) {
	int j, num;

	for (int i = 1; i < n; i++) {
		num = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > num) {
			tab[j + 1] = tab[j];
			j--;
		}

		tab[j + 1] = num;
	}
}
