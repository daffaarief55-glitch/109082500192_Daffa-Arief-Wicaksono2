#include <iostream>
using namespace std;

void tukarPointer(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

void tukarReference(int &x, int &y, int &z) {
    int temp = x;
    x = y;
    y = z;
    z = temp;
}

int main() {
    int a, b, c;

    cout << "nilai a : ";
    cin >> a;

    cout << "nilai b : ";
    cin >> b;

    cout << "nilai c : ";
    cin >> c;

    cout << "\nNilai awal : a = " << a
         << ", b = " << b
         << ", c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "Setelah tukar pointer : a = " << a
         << ", b = " << b
         << ", c = " << c << endl;

    tukarReference(a, b, c);

    cout << "Setelah tukar reference : a = " << a
         << ", b = " << b
         << ", c = " << c << endl;

    return 0;
}
