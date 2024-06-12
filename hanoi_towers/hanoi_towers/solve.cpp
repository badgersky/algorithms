#include "solve.h"
#include "utils.h"

int method1(Peg A, Peg B, Peg C, int n)
{
	int steps_num = 0;
	if (n % 2 == 0) {
		while (C.get_size() != n) {
			cout << "-----------------" << endl;
			A.print();
			B.print();
			C.print();
			cout << "-----------------" << endl;
			moveBetweenPegs(&A, &B);
			moveBetweenPegs(&A, &C);
			moveBetweenPegs(&B, &C);
			steps_num += 3;
		}
	}
	else {
		while (B.get_size() != n) {
			cout << "-----------------" << endl;
			A.print();
			B.print();
			C.print();
			cout << "-----------------" << endl;
			moveBetweenPegs(&A, &B); steps_num++;
			if (B.get_size() == n) break;
			moveBetweenPegs(&A, &C);
			moveBetweenPegs(&B, &C);
			steps_num += 2;
		}
	}

	cout << "-----------------" << endl;
	A.print();
	B.print();
	C.print();
	cout << "-----------------" << endl;
	return steps_num;
}
