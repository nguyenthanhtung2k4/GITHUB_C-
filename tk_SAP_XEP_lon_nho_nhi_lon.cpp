#include <iostream>
using namespace std;

void nho_den_lon(int mang[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (mang[j] > mang[j+1]) {
               int sap = mang[j];
               mang[j] = mang[j+1];
               mang[j+1] = sap;
            }
        }
    }
}

void lon_den_nho(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (mang[j] < mang[j+1]) {
               int sap = mang[j];
               mang[j] = mang[j+1];
               mang[j+1] = sap;
            }
        }
    }
}

void run(int* chay, int n) {
     for(int i = 0; i < n; i++) {
          cout << chay[i] << " ";
     }
     cout << endl;
}

int main(){
     int n = 5;
     int mang[n] = {3, 2, 1, 5, 6, 7};
     cout << "Tu lon den be" << endl;
     lon_den_nho(mang, n);
     run(mang, n);
     cout << "Tu be den lon" << endl;
     nho_den_lon(mang, n);
     run(mang, n);

     return 0;
}