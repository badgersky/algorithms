#include "utils.h"
#include "sorting.h"
#include "tests.h"

int main() {
	srand(time(0));                
	int size;
	FILE* file;
	file = fopen("results.txt", "r");
	
	for (size = 0; size <= 100000; size += 1000) {
		int* tab = allocate_mem(size);
		int* tab_asc = allocate_mem(size);
		int* tab_desc = allocate_mem(size);

		generate_random_data(tab, size);

		std::copy(tab, tab + size, tab_asc);

		quick_sort(tab_asc, 0, size - 1);
		save_data(tab_asc, size);
		load_data(tab_desc, size);

		fprintf(file, "%d\n", size);
		test_bubble_sort(file, tab_asc, tab_desc, tab, size);
		test_insertion_sort(file, tab_asc, tab_desc, tab, size);
		test_selection_sort(file, tab_asc, tab_desc, tab, size);
		test_quick_sort(file, tab_asc, tab_desc, tab, size);
		test_heap_sort(file, tab_asc, tab_desc, tab, size);
		test_shell_sort(file, tab_asc, tab_desc, tab, size);

		free(tab);
		free(tab_asc);
		free(tab_desc);
	}

	fclose(file);

	return 0;
}

