#include <iostream>

using namespace std;

double my_div(double n, double d) {
    return n/d;
}

void g() {
    my_div(5, 0);
}

int main() {
    cout << g();
}