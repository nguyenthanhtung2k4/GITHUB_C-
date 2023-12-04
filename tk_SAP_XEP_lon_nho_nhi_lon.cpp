#include <iostream> 
using namespace std;
void nho_den_lon(int mang[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (mang[j] >mang[j+1]) {
               int sap=mang[j];
               mang[j]=mang[j+1];
               mang[j+1]=sap;
            }
        }
    }
}
void lon_den_nho(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (mang[j] <mang[j+1]) {
               int sap=mang[j];
               mang[i]=mang[j+1];
               mang[j+1]=sap;
            }
        }
    }
}

void run(int* chay,int n){
     for(int i=0;i<n;i++){
          cout<<chay[i]<<" "<<endl;
     }
}
int main(){
     int n=5;
     int mang[n]={5,7,3,6,8};
     cout<<"tu lon den be"<<endl;
     lon_den_nho(mang,n);
     run(mang,n);
     cout<<"tu be den lon"<<endl;
     nho_den_lon(mang,n);
     run(mang,n);
     nho_den_lon(mang,n);
     //// cach 2 tim lon  den be bang cach dung mang nho_den_lon;
     // for(int i=n;n-1>-1;i--){
     //      cout<<mang[i]<<" "<<endl;
     // }
     // return 0;
}