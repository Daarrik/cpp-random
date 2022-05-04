#include <iostream>

using namespace std;

void swap(int &a, int &b) { int temp; temp = a; a = b; b = temp; }

void print(int value, int list[]) {
    cout << "Value: " << value << ". ";
    cout << "List: ";
    for(int i = 0; i < 5; i++) {
        cout << list[i] << " ";
    }
    cout << "\n";
}

int main() {
    int value = 2;
    int list[5] = {2, 4, 6, 7, 8};
    swap(value, list[0]);
    print(value, list);
    swap(list[0], list[1]);
    print(value, list);
    swap(value, list[value]);
    print(value, list);
}

