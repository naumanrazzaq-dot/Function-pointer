#include <iostream>
using namespace std;

void show() {
    cout << 555 << endl;
}

int main() {
    void (*ptr)() = show;
    ptr();

    return 0;
}
