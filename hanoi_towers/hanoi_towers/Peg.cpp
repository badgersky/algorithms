#include "Peg.h"

Peg::Peg(const string& name, int n) : name(name)
{
	if (n >= 1) {
		for (int num = 1; num <= n; num++) {
			discs.push_back(num);
		}
	}
	else {
		discs = {};
	}
}

Peg::Peg(Peg& other)
{
	name = other.name;
	int size = other.discs.size();
	int num;

	for (int i = 0; i < size; i++) {
		num = other.discs[i];
		discs.push_back(num);
	}
}

int Peg::get_size()
{
	return discs.size();
}

bool Peg::is_empty()
{
	if (discs.size() == 0) {
		return true;
	}
	return false;
}

int Peg::get_top()
{
	int num = -1;
	if (!this->is_empty()) {
		num = discs[0];
		discs.erase(discs.begin());
	}
	
	return num;
}

void Peg::push_top(int num)
{
	if (this->can_push(num)) {
		discs.insert(discs.begin(), num);
	}
}

void Peg::print()
{
	cout << name << ": ";
	for (int i = 0; i < discs.size(); i++) {
		cout << discs[i] << " ";
	}
	cout << endl;
}

bool Peg::can_push(int num)
{
	if (this->is_empty()) {
		return true;
	}
	if (discs[0] > num) {
		return true;
	}
	return false;
}

int Peg::see_top()
{
	if (!is_empty()) {
		return discs[0];
	}
	return -1;
}
