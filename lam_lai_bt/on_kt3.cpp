#include <iostream> 
#include <cmath>
using namespace std; 
int main(){ 
     double can_nang, chieu_cao,tinh; 
     cout<<"Nhap can nang (kg): ";cin>>can_nang;
     cout<<"Nhap chieu cao (cm): ";cin>>chieu_cao;
     tinh=can_nang/pow(chieu_cao/100,2);
     ///cout<<tinh<<endl;
     if(tinh<18.5){cout<<"Thieu can BMI";}
     else if(tinh>18.5 && tinh<24.9){cout<<"Binh thuong BMI";}
     else if(tinh>24.9&&tinh<29.9){cout<<"Thua can BMI";}
     else{cout<<"BMI beo phi";}
     return 0;
}

