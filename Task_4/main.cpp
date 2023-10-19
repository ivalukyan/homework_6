#include <iostream>
#include <math.h>
using namespace std;

// Задание 4

void back_in_nornal(double &x, double &z, int &d, double &p){
    x = d * cos(p);
    z = d * sin(p);
    cout << "X: " << x << endl << "Z: " << z;
}

int main() {
    double x;
    double z;
    int d = 1000;
    double p = 3.14159265358979323846/2.0;
    back_in_nornal(x, z, d, p);
    return 0;
}
