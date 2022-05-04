#include <iostream>
#include <math.h>

using namespace std;

class Figure {
    public:
        virtual double area() = 0;
};

class Circle: public Figure {
    public:
        Circle(int r) {
            radius = r;
        }

        double area() {
            return M_PI * radius * radius;
        }

    protected:
        int radius;
};

int main() {
    Circle circle(5);
    cout << circle.area();
}