#pragma once

void run_test1(void (*func)(int*, int), int * tab, int n, char d_type);

void run_test2(void (*func)(int*, int, int), int* tab, int n, char d_type);

void test_bubble_sort(int* tab_asc, int* tab_desc, int* tab, int size);

void test_insertion_sort(int* tab_asc, int* tab_desc, int* tab, int size);

void test_selection_sort(int* tab_asc, int* tab_desc, int* tab, int size);

void test_quick_sort(int* tab_asc, int* tab_desc, int* tab, int size);

void test_heap_sort(int* tab_asc, int* tab_desc, int* tab, int size);