#include <iostream>

using namespace std;

class A {
    public:
        void staticMethod() {
            cout << "Static binding: From A\n";
        }

        virtual void dynaMethod() {
            cout << "Dynamic binding: From A\n";
        }
};

class B: public A {
    public:
        void dynaMethod() {
            cout << "Dynamic binding: From B\n";
        }
};

int main() {
    A a;
    B b;

    a.staticMethod();
    a.dynaMethod();
    b.staticMethod();
    b.dynaMethod();
}