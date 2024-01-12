#include <iostream>
using namespace std;

void nhap(int &n, int &m) {  
  do {
    cin >> n >> m;
  } while (n < 1 || m < 1);
}

void nhap_mang(int n, int m, int mang[][100]) { 
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mang[i][j];
    }
  }
}

int main() {
  int n, m;
  nhap(n, m);  

  int mang1[n][100];  
  nhap_mang(n, m, mang1);

  nhap(n, m);  
  int mang2[n][100];  
  nhap_mang(n, m, mang2);

  int mang3[n][100];  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      mang3[i][j] = 0;
      for (int k = 0; k < m; k++) { 
        mang3[i][j] += mang1[i][k] * mang2[k][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << mang3[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
