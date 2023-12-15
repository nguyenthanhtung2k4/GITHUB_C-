#include <iostream>
#include <bitset>

using namespace std;

int main() {
     bitset<4> t("0101");
     bitset<4> A("0111");
     bitset<4> SS=t&A;
     int so=SS.count();
     cout<<so;
     return 0;
}
/*
#include <iostream>
#include <bitset>

using namespace std;

int main() {
  bitset<6> x = 101010;
  bitset<6> y = 101011;
  bitset<6> z = 101100;

  // Duyệt qua tất cả các số
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      // So sánh hai số hiện tại
      bitset<6> s = x & y;
      int count = s.count();

      // Kiểm tra xem hai số có phải là họ hàng huyết thống hay không
      if (count >= 3) {
        cout << "Hai số " << i << " và " << j << " là họ hàng huyết thống" << endl;
      }
    }
  }

  return 0;
}

*/