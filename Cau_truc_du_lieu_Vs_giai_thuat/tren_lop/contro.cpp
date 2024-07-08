#include <iostream>
#include<string>
#include<bits/stdc++.h> 
using namespace std;
struct NhanVien{
     string ten;
     int manv;
     int heso;
     int tien;
};
void nhap(NhanVien *a,int n){
     for(int i=0;i<n;i++){
          cout<<"Nhap thong tin: "<<i+1<<endl;
          cout<<"ma: ";cin>>a[i].manv;
          cin.ignore();
          cout<<"Ten: ";getline(cin,a[i].ten);
          cout<<"he so: ";cin>>a[i].heso;
          cout<<"Tien: ";cin>>a[i].tien;
     }
}
float thap(NhanVien *a,int n){
     int min=a[0].tien;
     for(int i=0;i<n;i++){
          if(min>a[i].tien){
               min=a[i].tien;
          }
     }
     return min;
}
float tong(NhanVien *a,int n){
     float tong=0;
     for(int i=0;i<n;i++){
          tong+=a[i].tien;
     }
     return tong/n;
}
int main(){
     int n ;
     cout<<"Nhap so luong nv: ";
     cin>>n;
     NhanVien *a= new NhanVien[n];
     nhap(a,n);
     cout<<"\n\tThong tin tung nhan vien"<<endl;
     for(int i=0;i<n;i++){
          cout<<a[i].manv<<"\t"<<a[i].ten<<"\t\t"<<a[i].heso<<"\t"<<a[i].tien<<endl;
     }
     cout<<"\n\nTien luong trung binh nhan vien la: "<<setprecision(3)<<tong(a,n)<<endl;
     cout<<"\nNhan vien co luong thap nhat: "<<thap(a,n)<<endl;
     delete [] a;
     return 0;

}