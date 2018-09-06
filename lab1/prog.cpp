#include<iostream>
#include<math.h>

using namespace std;

int main() {
    double
            a = 0,
            b = 10,
            k = 4, // V + 1
            e = 10e-12,
            dx = 1;


    for (double x = a; x <= b; x += dx) {
        double s = 0;
        int n = 1;
        // на сколько отличается числитель следующего члена
        double numenatorDelta = -k * x * k * x;
        // текущий знаменатель
        double denomenator = 1;
        // последний множитель в факториале знаменателя
        double lastNumDenom = 1;
        // значение текущего члена
        double cur = k * x;
        s += cur;
        while (abs(cur) >= e) {
            cur *= numenatorDelta;
            cur /= (lastNumDenom + 1);
            cur /= (lastNumDenom + 2);
            s += cur;
            lastNumDenom += 2;
            n++;
        }
        cout << x << ' ' << s << ' ' << n << endl;
    }

    cout << "---" << endl;
    for (int x = a; x <= b; x += dx) {
        cout << x << ' ' << sin(k * x) << endl;
    }


    return 0;
}