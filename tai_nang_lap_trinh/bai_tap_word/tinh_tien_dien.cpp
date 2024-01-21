#include <iostream>
using namespace std;

double tinh(int& thud) {
  if (50 >= thud >= 0) {
    return thud * 1.0;
  }
  if (51 <= thud <= 100) {
    return thud * 1.5;
  }
  if (101 <= thud <= 200) {
    return thud * 2.0;
  }
  if (201 <= thud <= 300) {
    return thud * 2.5;
  }
  if (301 <= thud <= 400) {
    return thud * 3.0;
  }
  if (thud > 400) {
    return thud * 3.5;
  }
  return 0.0;
}

int main() {
  int new_number, old_number;
  do {
    cout << "Nhập số mới: ";
    cin >> new_number;
    cout << "Nhập số cũ: ";
    cin >> old_number;
  } while (new_number < old_number || new_number < 1 || old_number < 1);

  int difference = new_number - old_number;
  cout << "Số chênh lệch là: " << difference << endl;

  // Chỉ in kết quả của hàm tinh()
  cout << "Kết quả của hàm tinh(): " << tinh(difference) << endl;

  return 0;
}
