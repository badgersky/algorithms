#include "utils.h"
#include "sorting.h"
#include "tests.h"

int main() {
	srand(time(0));                

	const int size = 1000;
	int *tab = allocate_mem(size);
	int *tab_asc = allocate_mem(size);
	int *tab_desc = allocate_mem(size);

	generate_random_data(tab, size);

	copy_arr(tab, tab_asc, size);

	quick_sort(tab_asc, 0, size - 1);
	save_data(tab_asc, size);
	load_data(tab_desc, size);
	
	printf("%d\n", size);
	//test_bubble_sort(tab_asc, tab_desc, tab, size);
	//test_insertion_sort(tab_asc, tab_desc, tab, size);
	//test_selection_sort(tab_asc, tab_desc, tab, size);
	//test_quick_sort(tab_asc, tab_desc, tab, size);
	//test_heap_sort(tab_asc, tab_desc, tab, size);
	//test_shell_sort(tab_asc, tab_desc, tab, size);

	free(tab);
	free(tab_asc);
	//free(tab_desc);

	return 0;
}

