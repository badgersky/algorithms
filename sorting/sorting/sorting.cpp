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

void selection_sort(int* tab, int n) {
	int min_i, temp;

	for (int i = 0; i < n; i++) {
		min_i = min(tab, n, i);
		temp = tab[min_i];
		tab[min_i] = tab[i];
		tab[i] = temp;
	}
}

void quick_sort(int* tab, int n, int m) {
	if (n >= m) return;

	int i = n, j = m, v, temp;
	v = tab[(i + j) / 2];

	 do {
		while (tab[i] < v) i++;
		while (tab[j] > v) j--;

		if (i <= j) {
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (j > n) quick_sort(tab, n, j);
	if (i < m) quick_sort(tab, i, m);
}

void heap_sort(int* tab, int n) {
	int temp;
	build_max_heap(tab, n);

	for (int i = n - 1; i > 0; i--) {
		temp = tab[0];
		tab[0] = tab[i];
		tab[i] = temp;

		n--;
		max_heapify(tab, 0, n);
	}
}

void shell_sort(int* tab, int n) {
	int h = 1;

	while (h < n / 3) {
		h = 3 * h + 1;
	}

	while (h > 0) {
		insert_shell_sort(tab, n, h);
		h /= 3;
	}
}
