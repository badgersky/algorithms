#include "tests.h"
#include "utils.h"
#include "sorting.h"

void run_test1(FILE* file, void (*func)(int*, int), int* tab, int n, char d_type) {
	clock_t start, end;
	double time_used;

	start = clock();
	func(tab, n);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	fprintf(file, "%c%lf ", d_type, time_used);
}

void run_test2(FILE* file, void (*func)(int*, int, int), int* tab, int n, char d_type) {
	clock_t start, end;
	double time_used;

	start = clock();
	func(tab, 0, n - 1);
	end = clock();
	time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	fprintf(file, "%c%lf ", d_type, time_used);
}

void test_bubble_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size) {
	fprintf(file, "bubblesort ");
	int* tab_sort = allocate_mem(size);

	//random data
	std::copy(tab, tab + size, tab_sort);
	run_test1(file, bubble_sort, tab_sort, size, 'r');

	// ascending data
	std::copy(tab_asc, tab_asc + size, tab_sort);
	run_test1(file, bubble_sort, tab_sort, size, 'a');

	// descending data
	std::copy(tab_desc, tab_desc + size, tab_sort);
	run_test1(file, bubble_sort, tab_sort, size, 'd');

	fprintf(file, "\n");
	free(tab_sort);
}

void test_insertion_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size) {
	fprintf(file, "insertionsort  ");
	int* tab_sort = allocate_mem(size);

	// random data
	std::copy(tab, tab + size, tab_sort);
	run_test1(file, insertion_sort, tab_sort, size, 'r');

	// ascending data
	std::copy(tab_asc, tab_asc + size, tab_sort);
	run_test1(file, insertion_sort, tab_sort, size, 'a');

	// descending data
	std::copy(tab_desc, tab_desc + size, tab_sort);
	run_test1(file, insertion_sort, tab_sort, size, 'd');

	fprintf(file, "\n");
	free(tab_sort);
}

void test_selection_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size) {
	fprintf(file, "selectionsort ");
	int* tab_sort = allocate_mem(size);

	// random data
	std::copy(tab, tab + size, tab_sort);
	run_test1(file, selection_sort, tab_sort, size, 'r');

	// ascending data
	std::copy(tab_asc, tab_asc + size, tab_sort);
	run_test1(file, selection_sort, tab_sort, size, 'a');

	// descending data
	std::copy(tab_desc, tab_desc + size, tab_sort);
	run_test1(file, selection_sort, tab_sort, size, 'd');

	fprintf(file, "\n");
	free(tab_sort);
}

void test_quick_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size) {
	fprintf(file, "quicksort ");
	int* tab_sort = allocate_mem(size);

	// random data
	std::copy(tab, tab + size, tab_sort);
	run_test2(file, quick_sort, tab_sort, size, 'r');

	// ascending data
	std::copy(tab_asc, tab_asc + size, tab_sort);
	run_test2(file, quick_sort, tab_sort, size, 'a');

	// descending data
	std::copy(tab_desc, tab_desc + size, tab_sort);
	run_test2(file, quick_sort, tab_sort, size, 'd');

	fprintf(file, "\n");
	free(tab_sort);
}

void test_heap_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size) {
	fprintf(file, "heapsort ");
	int* tab_sort = allocate_mem(size);

	// random data
	std::copy(tab, tab + size, tab_sort);
	run_test1(file, heap_sort, tab_sort, size, 'r');

	// ascending data
	std::copy(tab_asc, tab_asc + size, tab_sort);
	run_test1(file, heap_sort, tab_sort, size, 'a');

	// descending data
	std::copy(tab_desc, tab_desc + size, tab_sort);
	run_test1(file, heap_sort, tab_sort, size, 'd');

	fprintf(file, "\n");
	free(tab_sort);
}

void test_shell_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size) {
	fprintf(file, "shellsort ");
	int* tab_sort = allocate_mem(size);

	// random data
	std::copy(tab, tab + size, tab_sort);
	run_test1(file, shell_sort, tab_sort, size, 'r');

	// ascending data
	std::copy(tab_asc, tab_asc + size, tab_sort);
	run_test1(file, shell_sort, tab_sort, size, 'a');

	// descending data
	std::copy(tab_desc, tab_desc + size, tab_sort);
	run_test1(file, shell_sort, tab_sort, size, 'd');

	fprintf(file, "\n");
	free(tab_sort);
}
