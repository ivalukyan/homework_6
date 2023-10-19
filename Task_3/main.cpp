#include <iostream>
#include <math.h>
using namespace std;

// Задание 3

void polar(int &x, int &z, double &d, double &p){
    d = sqrt(pow(x, 2) + pow(z, 2));
    p = atan2(z, x);
    cout << "D: " << d << endl << "P: " << p;
}

int main() {
    int x = 1000;
    int z = -1000;
    double d;
    double p;
    polar(x, z, d, p);
    return 0;
}
