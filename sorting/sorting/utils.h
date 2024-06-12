#pragma once
#include <random>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


void generate_random_data(int* tab, int n);

void save_data(int* tab, int n);

void load_data(int * tab_desc, int n);

void copy_arr(int* tab1, int* tab2, int n);

int* allocate_mem(int n);

int min(int* tab, int n, int j);

void max_heapify(int* tab, int i, int n);

void build_max_heap(int* tab, int n);

void insert_shell_sort(int* tab, int n, int h);

void print_arr(int* tab, int n);

int compare_arr(int* tab1, int* tab2, int n);