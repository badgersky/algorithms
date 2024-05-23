#include "tests.h"
#include "utils.h"
#include "sorting.h"

void run_test(void (*func)(int*, int), int* tab, int n, char d_type) {
	clock_t start, end;
	double time_used;

	start = clock();
	func(tab, n);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("%c\t%d\t%lf\n", d_type, n, time_used);
}

void test_bubble_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("bubble sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test(bubble_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test(bubble_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test(bubble_sort, tab_sort, size, 'd');

	free(tab_sort);
}

void test_insertion_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("insertion sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test(insertion_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test(insertion_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test(insertion_sort, tab_sort, size, 'd');

	free(tab_sort);
}

void test_selection_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("selection sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test(selection_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test(selection_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test(selection_sort, tab_sort, size, 'd');

	free(tab_sort);
}
