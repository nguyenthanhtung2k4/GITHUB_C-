#include <iostream> 
using  namespace std;
int main(){
     /// su dung ham do  while 
     //  ham nay  dung de sd lap lai neu nhu nguoi dung nhap sai 
     int nhap, tong=0;
     do {
          cout<<"nhap so nguyen duong:";cin>>nhap;
     }while(nhap<0);
     ////do_while se bat nguoi  dung nhap dau vao la 1 so nguyen se sai no se bat  nguoi dung nhap lai  cho den khi dung 
     ////do_while  tuong duong voi  while(true)--- trong python
     cout<<"so nguyen duong cua ban la: "<<nhap;
     
}