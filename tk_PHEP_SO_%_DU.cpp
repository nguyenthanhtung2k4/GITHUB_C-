#include <iostream>
//#include <iomanip>
using namespace std;
int main(){
     int du_giay,giay,du_phut,phut,gio,du_gio,ngay;
     cout<<"Nhap so giay la: ";cin>>giay;
     //du_giay = giay % 60;
     phut=giay/60;
     giay %=60;
     gio=phut/60;
     phut %= 60;
     ngay=gio/24;
     gio %=24;
     ///cout<<setw(5)<<"Phut, "<<endl;
     if(ngay>0){
          cout<<ngay<<" Ngay, ";
     }
     if(gio>0){
          cout<<gio<<" Gio, ";
     }
     if(phut>0){
          cout<<phut<<" Phut, ";
     }
     if(giay>0){
          cout<<giay<<" Giay ";
     }
     return 0;
}
/* DAU % LA NO SE LAY  PHAN SAU DAU CHAM 
VD :  A=10,B=3;
COUT<<A % B ;
=>>  KQ LA:  1 
==> VI NO LAY  PHAN DU  
*/