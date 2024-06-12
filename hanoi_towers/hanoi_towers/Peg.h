#pragma once

#include <vector>
#include <iostream>

using namespace std;

class Peg
{	
	string name;
	vector<int> discs;
public:
	Peg() = default;
	Peg(const string& name, int n = 0);
	Peg(Peg& other);
	~Peg() = default;

	int get_size();
	bool is_empty();
	int get_top();
	void push_top(int num);
	void print();
	bool can_push(int num);
	int see_top();
};

