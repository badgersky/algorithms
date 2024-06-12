#pragma once
#include <stdio.h>

void run_test1(FILE* file, void (*func)(int*, int), int * tab, int n, char d_type);

void run_test2(FILE* file, void (*func)(int*, int, int), int* tab, int n, char d_type);

void test_bubble_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size);

void test_insertion_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size);

void test_selection_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size);

void test_quick_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size);

void test_heap_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size);

void test_shell_sort(FILE* file, int* tab_asc, int* tab_desc, int* tab, int size);