#include "dichotomyMethod.hpp"


namespace dichotomy {
    double a[3]{-2.5, 0, 1.25};
    double b[3]{0, 1.25, 2.5};
    double results[3]{};
    int count[3]{};
    double e = pow(10, -5);

    double f(double x) {
        return 4 * x - 8 * sin(x) + 1;
    }

    void findX() {
        double c;
        for (int i = 0; i < 3; ++i) {
            while (abs(b[i] - a[i]) >= e) {
                c = (a[i] + b[i]) / 2;
                count[i] +=1;
                if (f(a[i]) * f(c) < 0) b[i] = c;
                else if (f(b[i]) * f(c) < 0) a[i] = c;
            }
            double x_i = (a[i] + b[i]) * 0.5;
            results[i] = round(x_i * 1000000) / 1000000;
        }

    }

    void output() {
        for (int i = 0; i < 3; ++i) {
            cout << "results[" << i << "] = " << results[i] << endl;
            cout << "count = " << count[i] << endl;

        }
    }
}


