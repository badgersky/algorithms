#include "tests.h"
#include "utils.h"
#include "sorting.h"

void test_bubble_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	int* tab_sort = allocate_mem(size);
	clock_t start, end;
	double time_used;

	printf("bubble sort\n");

	// random data
	copy_arr(tab, tab_sort, size);
	start = clock();
	bubble_sort(tab_sort, size);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("random: %d - %lf\n", size, time_used);

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	start = clock();
	bubble_sort(tab_sort, size);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("ascending: %d - %lf\n", size, time_used);

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	start = clock();
	bubble_sort(tab_sort, size);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("descending: %d - %lf\n", size, time_used);

	free(tab_sort);
}

void test_insertion_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	int* tab_sort = allocate_mem(size);
	clock_t start, end;
	double time_used;

	printf("insertion sort\n");

	// random data
	copy_arr(tab, tab_sort, size);
	start = clock();
	insertion_sort(tab_sort, size);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("random: %d - %lf\n", size, time_used);

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	start = clock();
	insertion_sort(tab_sort, size);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("ascending: %d - %lf\n", size, time_used);

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	start = clock();
	insertion_sort(tab_sort, size);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("descending: %d - %lf\n", size, time_used);

	free(tab_sort);
}
