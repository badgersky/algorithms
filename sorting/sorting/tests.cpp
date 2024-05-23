#include "tests.h"
#include "utils.h"
#include "sorting.h"

void run_test1(void (*func)(int*, int), int* tab, int n, char d_type) {
	clock_t start, end;
	double time_used;

	start = clock();
	func(tab, n);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("%c\t%d\t%lf\n", d_type, n, time_used);
}

void run_test2(void (*func)(int*, int, int), int* tab, int n, char d_type) {
	clock_t start, end;
	double time_used;

	start = clock();
	func(tab, 0, n - 1);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("%c\t%d\t%lf\n", d_type, n, time_used);
}

void test_bubble_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("bubble sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test1(bubble_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test1(bubble_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test1(bubble_sort, tab_sort, size, 'd');

	free(tab_sort);
}

void test_insertion_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("insertion sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test1(insertion_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test1(insertion_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test1(insertion_sort, tab_sort, size, 'd');

	free(tab_sort);
}

void test_selection_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("selection sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test1(selection_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test1(selection_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test1(selection_sort, tab_sort, size, 'd');

	free(tab_sort);
}

void test_quick_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("quick sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test2(quick_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test2(quick_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test2(quick_sort, tab_sort, size, 'd');

	free(tab_sort);
}

void test_heap_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("heap sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test1(heap_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test1(heap_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test1(heap_sort, tab_sort, size, 'd');

	free(tab_sort);
}

void test_shell_sort(int* tab_asc, int* tab_desc, int* tab, int size) {
	printf("shell sort\n");
	int* tab_sort = allocate_mem(size);

	// random data
	copy_arr(tab, tab_sort, size);
	run_test1(shell_sort, tab_sort, size, 'r');

	// ascending data
	copy_arr(tab_asc, tab_sort, size);
	run_test1(shell_sort, tab_sort, size, 'a');

	// descending data
	copy_arr(tab_desc, tab_sort, size);
	run_test1(shell_sort, tab_sort, size, 'd');

	free(tab_sort);
}
