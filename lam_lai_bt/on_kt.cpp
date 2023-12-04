#include <iostream>
#include <fstream>
using namespace std ;
int main(){ 
     int so, tong=0,min,max;  
     int i=true;
     while(true){
          cout<<"Nhap so:";cin>>so;
          if(so<-5)break;
          if(so>5)break;
          if(i){
               max=so;
               min=so;
               i=false;
          }
          else{
               if(max<so){max=so;}
               if(so<min){min=so;}
          }
     }
     fstream file("1771020729.txt",ios::out);
     cout<<"Min: "<<min;
     file<<"Min: "<<min;
     return 0;
}