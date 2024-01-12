#include <iostream>

using namespace std;

int main() {
  int n, dem=0;
  cin >> n;
  int binary[32];
  int i = 0;
  while (n > 0) {
    binary[i++] = n % 2;
    n /= 2;
  }
  for (int j = i - 1; j >= 0; j--) {
    cout << binary[j];
    if(binary[j]==1){
     dem++;
    }
  }
  cout << endl;
  cout<<dem<<endl;
  return 0;
}
