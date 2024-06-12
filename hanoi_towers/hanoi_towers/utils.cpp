#include "utils.h"

void moveBetweenPegs(Peg* peg1, Peg* peg2)
{
	int num1, num2;
	if (peg2->is_empty() && !peg1->is_empty()) {
		num1 = peg1->get_top();
		peg2->push_top(num1);
	}
	else if (!peg2->is_empty() && peg1->is_empty()) {
		num1 = peg2->get_top();
		peg1->push_top(num1);
	}
	else {
		num1 = peg1->see_top();
		num2 = peg2->see_top();
		if (num1 > num2) {
			num2 = peg2->get_top();
			peg1->push_top(num2);
		}
		else {
			num1 = peg1->get_top();
			peg2->push_top(num1);
		}
	}
}
