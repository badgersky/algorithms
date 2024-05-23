#include "utils.h"

void generate_random_data(int* tab, int n) {
	int max = 100, min = -100, num;
	for (int i = 0; i < n; i++) {
		num = rand() % (max - min) + min;
		tab[i] = num;
	}
}

void save_data(int* tab, int n) {
	FILE* f = NULL;

	fopen_s(&f, "data.txt", "w");
	
	if (f) {
		fprintf(f, "%d\n", n);

		for (int i = 0; i < n; i++) {
			fprintf(f, "%d\n", tab[i]);
		}

		fclose(f);
		f = NULL;
	}
}

void load_data(int * tab_desc, int n) {
	FILE* f = NULL;
	int num;

	fopen_s(&f, "data.txt", "r");

	if (f) {
		fscanf_s(f, "%d", &n);

		for (int i = n - 1; i >= 0; i--) {
			fscanf_s(f, "%d", &num);
			tab_desc[i] = num;
		}

		fclose(f);
		f = NULL;
	}
}

void copy_arr(int* tab1, int* tab2, int n) {
	for (int i = 0; i < n; i++) {
		tab2[i] = tab1[i];
	}
}

int* allocate_mem( int n) {
	return (int*)malloc(n * sizeof(int));
}

int min(int* tab, int n, int j) {
	int min = tab[j], min_i = j;
	for (int i = j + 1; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i];
			min_i = i;
		}
	}
	return min_i;
}

void max_heapify(int* tab, int i, int n) {
	int largest = i;
	int l = 2 * i + 1;
	int r = l + 1;
	int temp;

	if (l < n && tab[l] > tab[largest]) {
		largest = l;
	}

	if (r < n && tab[r] > tab[largest]) {
		largest = r;
	}

	if (largest != i) {
		temp = tab[i];
		tab[i] = tab[largest];
		tab[largest] = temp;
		max_heapify(tab, largest, n);
	}
}

void build_max_heap(int* tab, int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		max_heapify(tab, i, n);
	}
}