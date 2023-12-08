//// CACH 1
#include <iostream>
using namespace std;

int main() {
    int so1, so2;

    // Nhập giá trị của so1 và so2
    cout << "Nhap so1 va so2 cach nhau 1 dau cach: ";
    cin >> so1 >> so2;

    // Kiểm tra và đếm số lượng số phong phú từ so1 đến so2
    int demSoPhongPhu = 0;
    for (int i = so1; i <= so2; ++i) {
        int tong = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                tong += j;
            }
        }
        if (tong > i) {
            ++demSoPhongPhu;
        }
    }

    cout << "So luong so phong phu tu " << so1 << " den " << so2 << " la: " << demSoPhongPhu << endl;

    return 0;
}


//// CACH 2 
#include <iostream>
using namespace std;

// Hàm kiểm tra số phong phú
bool laSoPhongPhu(int num) {
    int tong = 1; // Khởi tạo tổng là 1 vì 1 luôn là một ước của mọi số
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            tong += i;
        }
    }
    return (tong > num);
}

int main() {
    int so1, so2;

    // Nhập giá trị của so1 và so2
    cout << "Nhap so1 va so2 cach nhau 1 dau cach: ";
    cin >> so1 >> so2;

    // Kiểm tra và đếm số lượng số phong phú từ so1 đến so2
    int demSoPhongPhu = 0;
    for (int i = so1; i <= so2; ++i) {
        if (laSoPhongPhu(i)) {
            ++demSoPhongPhu;
        }
    }

    cout << "So luong so phong phu tu " << so1 << " den " << so2 << " la: " << demSoPhongPhu << endl;

    return 0;
}
