#include <iostream>
using namespace std;

// Hàm kiểm tra năm nhuận
bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    }
    else {
        return year % 4 == 0;
    }
}

// Hàm trả về số ngày của một tháng trong một năm
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear(year)) {
                return 29;
            }
            else {
                return 28;
            }
        default:
            return -1; // Giá trị không hợp lệ
    }
}

// Hàm tính số ngày từ ngày 1/1/1 đến ngày date/month/year
int daysFromStart(int date, int month, int year) {
    int days = 0;
    for (int y = 1; y < year; y++) {
        if (isLeapYear(y)) {
            days += 366;
        }
        else {
            days += 365;
        }
    }
    for (int m = 1; m < month; m++) {
        days += daysInMonth(m, year);
    }
    days += date;
    return days;
}

// Hàm chính
int main() {
    // Nhập vào các giá trị
    int current_date, current_month, current_year;
    int birth_date, birth_month, birth_year;
    cin >> current_date >> current_month >> current_year;
    cin >> birth_date >> birth_month >> birth_year;

    // Kiểm tra tính hợp lệ của các giá trị
    if (current_date < 1 || current_date > daysInMonth(current_month, current_year) ||
        birth_date < 1 || birth_date > daysInMonth(birth_month, birth_year) ||
        current_month < 1 || current_month > 12 ||
        birth_month < 1 || birth_month > 12 ||
        current_year < 1 || birth_year < 1 ||
        daysFromStart(current_date, current_month, current_year) < daysFromStart(birth_date, birth_month, birth_year)) {
        cout << -1 << endl; // In ra -1 nếu có giá trị không hợp lệ
    }
    else {
        // Tính và in ra số ngày đã sống
        int days_lived = daysFromStart(current_date, current_month, current_year) - daysFromStart(birth_date, birth_month, birth_year);
        cout << days_lived << endl;
    }
    return 0;
}
