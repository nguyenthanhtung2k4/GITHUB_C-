#include <iostream>
using namespace std;
int main(){ 
     int giay,phut,gio,ngay;
     cout<<"Nhap so giay:";cin>>giay;
     phut=giay/60;
     giay %=60;
     gio=phut/60; 
     phut %=60;
     ngay=gio/24;
     gio %=60;
     if(ngay>0){cout<<ngay<<"Ngay ";}
     if(gio>0){cout<<gio<<"gio ";}
     if(phut>0){cout<<phut<<"phut ";}
     if(giay>0){cout<<giay<<"giay ";}
     return 0;
}