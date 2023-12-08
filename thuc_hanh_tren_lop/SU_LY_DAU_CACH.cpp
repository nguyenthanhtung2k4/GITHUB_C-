#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "thi       khao sat hoc sinh  gioi mon  tin";

  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      // Nếu ký tự đầu tiên không phải là dấu cách, ta in ra dòng đó
      cout << str.substr(i) << endl;
      break;
    }
  }

  return 0;
}
