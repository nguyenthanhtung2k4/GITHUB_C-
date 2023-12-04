#include <iostream> 
using namespace std;
int* cap(int so){
     int* mang= new int [so];
     return mang;
}
double trung_binh(int* mang_kt,int n){
     double tong=0;
     for(int i=0;i<n;i++){
          tong +=*(mang_kt +i);
     }
     return tong/n;
}
void sap_xep(int* mang_kt,int n){
     int sap;
     for(int i=0;i<n-i;i++){
          for(int j=0;j<n-1;j++){
               if(mang_kt[j]>mang_kt[j+1]){
                    sap=mang_kt[j];
                    mang_kt[j]=mang_kt[j+1];
                    mang_kt[j+1]=sap;
               }
          }
     }
}
int main(){
     int so_bai_kt;
     do{
          cout<<"Nhap so bai kiem tra: "; cin>>so_bai_kt;
     }while(so_bai_kt<0);
     int *mang_bai_kt = cap(so_bai_kt);
     for (int i=0;i<so_bai_kt;i++){
     cout<<"Diem kiem tra"<<i<<" : ";
     cin>>mang_bai_kt[i];
     }
     cout<<"Diem trung binh: "<<trung_binh(mang_bai_kt,so_bai_kt)<<" Diem"<<endl;
     sap_xep(mang_bai_kt,so_bai_kt);
     cout<<"sau khi sap xep la"<<endl;
     for(int i =0;i<so_bai_kt;i++){
          cout<<mang_bai_kt[i]<<endl;
     }
     delete[] mang_bai_kt;
     return 0;
}