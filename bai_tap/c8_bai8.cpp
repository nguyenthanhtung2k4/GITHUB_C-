#include <iostream>
using namespace std;

void mang(int* mang, int n, int p_bo[]) {
    for (int i = 0; i < n; i++) {
        int so = 0;
        for (int j = 0; j < n; j++) {
            if (mang[i] == mang[j]) {
                so++;
            }
        }
        p_bo[i] = so;
    }
}

void phan_bo(int* mang, int n, int p_bo[]) {
    int max_count = p_bo[0];
    for (int i = 1; i < n; i++) {
        if (p_bo[i] > max_count) {
            max_count = p_bo[i];
        }
    }

    cout << "Phan tu pho bien:";
    for (int i = 0; i < n; i++) {
        if (p_bo[i] == max_count) {
            cout << " " << mang[i];
            break;
        }  
    }
    cout << endl;
}

int main() {
    int n = 5;
    int p_tu[n] = {1, 3, 6,6,6};
    int* p = p_tu;
    int p_bo[n] = {0};

    mang(p, n, p_bo);
    for(int i=0;i<n;i++){
     if(p_bo[i]<=1){
          cout<<"phan tu "<<i<<" = -1"<<endl;
     }
     else{
          phan_bo(p, n, p_bo);
     }
    }
    

    return 0;
}
