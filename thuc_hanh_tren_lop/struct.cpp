#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;
struct tinh
{
     int ma_tinh;
     string ten_tinh;
     int dan_so;
     double die_tich;
};
/// cac ham khai  bao  
void nhap1tinh(tinh &t);
void danh_sach(tinh mang_tinh[],int n);
void xuat_1tinh(tinh t);
void xuat_danh_sach_tinh(tinh mang_tinh[],int n);
void tinh_tren_1trieu(tinh mang_tinh[],int n);
tinh tinh_lon_nhat(tinh mang_tinh[],int n);
void hoan_vi(tinh &t1,tinh &t2);
void sap_xep(tinh mang_tinh[],int n );
int main(){
     int n;
     tinh mang_tinh[100];
     cout<<"Nhap so tinh trong mang: ";
     cin>>n;
     cout<<"Nhap danh sach cac tinh"<<endl;
     danh_sach(mang_tinh,n);
     cout<<"Xuat danh sach cac tinh"<<endl;
     xuat_danh_sach_tinh(mang_tinh,n );
     cout<<"\ntinh co dan lon hon 1 trieu "<<endl;
     tinh_tren_1trieu(mang_tinh,n);
     cout<<"tinh lon nhat la:"<<endl;
     tinh_lon_nhat(mang_tinh,n);
     cout<<"sap  xep danh  sach  tinh:"<<endl<<endl;
     sap_xep(mang_tinh,n);
     return 0;
}
void nhap1tinh(tinh &t){
     cout<<"Nhap ma tinh: ";cin>>t.ma_tinh;
     cout<<"Nhap ten tinh: ";cin.ignore();
     getline(cin,t.ten_tinh);
     cout<<"Nhap dan so tinh: ";cin>>t.dan_so;
     cout<<"Nhap dien tich: ";cin>>t.die_tich;
}
void danh_sach(tinh mang_tinh[],int n){
     for(int i=0;i<n;i++){
          cout<<"\n Nhap thong tin "<<i+1<<endl;
          nhap1tinh(mang_tinh[i]);
     }
}
void xuat_1tinh(tinh t){ 
     cout<<t.ma_tinh<<"\t\n"<<t.ten_tinh<<"\t\n"<<t.dan_so<<"\t\n"<<t.die_tich<<endl;
}
void xuat_danh_sach_tinh(tinh mang_tinh[],int n){
     for(int i=0;i<n;i++){
          cout<<"\nTinh thu "<<i+1<<endl;
          xuat_1tinh(mang_tinh[i]);
     }
}
void tinh_tren_1trieu(tinh mang_tinh[],int n){
     for(int i=0;i<n;i++){
          if(mang_tinh[i].dan_so>1000000){
               cout<<mang_tinh[i].dan_so;
          }
     }
}
tinh tinh_lon_nhat(tinh mang_tinh[],int n){
     int max=mang_tinh[0].dan_so;
     for (int i = 0; i < n; i++)
     {
          if(max<mang_tinh[i].dan_so){
               max=mang_tinh[i].dan_so;
          }
     }
}
void hoan_vi(tinh &t1, tinh &t2){
     tinh t3=t1;
     t1=t2;
     t2=t3;
}
void sap_xep(tinh mang_tinh[],int n ){
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               if(mang_tinh[i].dan_so<mang_tinh[j].dan_so){
                    hoan_vi(mang_tinh[i],mang_tinh[j]);
               }
          }
     }
}