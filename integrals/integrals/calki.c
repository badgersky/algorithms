#include "calki.h"

#define lp 10000

double f3(double x) {
    return 2 * x * x * x * x + 3 * x + 1;
}

double f4(double x) {
    return (2 * sin(x) - cos(x));
}

double prostokaty(double(*f)(double)) {
    double step, p, h1, h2, h_avg, sum = 0;
    step = (c_do - c_od) / lp;

    for (p = c_od; p < c_do; p += step) {
        h1 = (*f)(p);
        h2 = (*f)(p + step);
        h_avg = (h1 + h2) / 2;
        sum += step * h_avg;
    }

    return sum;
}

double trapezy(double(*f)(double)) {
    double step, p, b1, b2, area, sum = 0;
    step = (c_do - c_od) / lp;

    for (p = c_od; p < c_do; p += step) {
        b1 = (*f)(p);
        b2 = (*f)(p + step);
        area = ((b1 + b2) * step) / 2;
        sum += area;
    }

    return sum;
}


double mc(double(*f)(double)) {
    srand(time(0));
    int N = 1000000, N1 = 0;
    double max = 0, min = 0, tmp_x, tmp_y, tmp_res, step, y;
    step = (c_do - c_od) / lp;

    for (double p = c_od; p < c_do; p += step) {
        tmp_res = f(p);

        if (tmp_res > max) {
            max = tmp_res;
        }
        if (tmp_res < min) {
            min = tmp_res;
        }
    }

    for (int i = 0; i < N; i++) {
        tmp_x = c_od + (double)rand() / (double)(RAND_MAX) * (c_do - c_od);
        tmp_y = min + (double)rand() / (double)(RAND_MAX) * (max - min);
        y = (*f)(tmp_x);

        if (tmp_y < y) {
            N1 += 1;
        }
        if (tmp_y < 0) {
            N1 -= 1;
        }
    }

    return ((double)N1 / N) * (c_do - c_od) * (max - min);
}
