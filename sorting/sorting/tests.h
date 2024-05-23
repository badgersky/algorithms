#pragma once

void run_test(void (*func)(int*, int), int * tab, int n, char d_type);

void test_bubble_sort(int* tab_asc, int* tab_desc, int* tab, int size);

void test_insertion_sort(int* tab_asc, int* tab_desc, int* tab, int size);

void test_selection_sort(int* tab_asc, int* tab_desc, int* tab, int size);