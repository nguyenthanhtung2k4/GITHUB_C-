#include <iostream> 
using namespace std ;
int main(){
     int mang[10],min,max;
     for(int i=0;i<=10;i++){
          cout<<"Vui long nhap mang["<<i<<"] : ";cin>>mang[i];
     }
     for(int i=0;i<10;i++){
          if(max<mang[i]){mang[i]=max;}
          if(min>mang[i]){min=mang[i];}
     }cout<<"max ="<<max<<"\nMin="<<min;
     return 0;
}