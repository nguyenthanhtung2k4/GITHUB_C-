#include <iostream>
using namespace std ;
int main(){
     int nhap,tong=0;
     do{
          cout<<"Nhap so  nguyen bat  ki: ";cin>>nhap;

     }while (nhap<0);
     for(int i=1;i<=nhap;i++){
          tong +=i;
     }
     cout<<"tong cac so  nguyen la: "<<tong;
     return 0;
}