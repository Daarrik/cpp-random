# include <iostream>
using namespace std;

int main() {
    double j = 0;
    int count = 0;
    while(j < 2.7) {
        j += 0.3;
        count++;
        cout << j << endl;
    }
    cout << count << endl;
    return 0;
}