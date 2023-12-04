#include <iostream> 
using namespace std;
int* nhap( int n){
     int* p=new int [n];
     cout<<"Nhap 5 so nguyen bat ki :"<<endl;
     for (int i =0 ;i<n;i++){
          cout<<"Nhap so"<<i+1<<">> ";cin>>p[i];
     }
     return p;
}
void xuat(int *mang,int n){
     for(int i=0;i<n;i++){
          cout<<"So "<<mang[i]<<endl;
     }
}
void sap_xep(int* mang,  int n ){
     for(int i=0;i<n-1;i++){
          for(int j=0;j<n-1;j++){
               if(*(mang + j) >*(mang + j+1)){
                    int sap=mang[j];
                    mang[j]=mang[j+1];
                    mang[j+1]=sap;
          }
     }
     }
}
int main(){ 
     int n=5;
     int*  mang=nhap(n);
     cout<<"Khi chua sap xep"<<endl;
     xuat(mang,n); 
     cout<<"Khi  da sap xep"<<endl;
     sap_xep(mang,n);
     for(int i =0;i<n;i++){
          cout<<mang[i];
     }
     return 0;
}