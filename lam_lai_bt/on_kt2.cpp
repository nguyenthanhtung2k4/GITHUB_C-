#include <iostream>
using namespace std ;
int main(){ 
     int so, tong=0;  
     while(true){
          cout<<"Nhap so:";cin>>so;
          if(so<-9)break;
          if(so>10)break;
          if(so%2==0){
               tong +=so;
          }
     }cout<<tong;
}