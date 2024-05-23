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
