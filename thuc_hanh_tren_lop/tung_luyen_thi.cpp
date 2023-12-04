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
    int n;
    
    // Nhập giá trị của n
    cout << "Nhap so n: ";
    cin >> n;

    // Kiểm tra và đếm số lượng số phong phú từ 1 đến n
    int demSoPhongPhu = 0;
    for (int i = 1; i <= n; ++i) {
        if (laSoPhongPhu(i)) {
            ++demSoPhongPhu;
        }
    }

    cout << "So luong so phong phu tu 1 den " << n << " la: " << demSoPhongPhu << endl;

    return 0;
}
