#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    // Nhập vào 3 cạnh của tam giác
    cin >> a >> b >> c;

    // Kiểm tra loại tam giác
    if (a == b && b == c) {
        cout << "deu" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "can" << endl;
    } else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2)) {
        cout << "vuong" << endl;
    } else {
        cout << "khong" << endl;
    }

    return 0;
}
