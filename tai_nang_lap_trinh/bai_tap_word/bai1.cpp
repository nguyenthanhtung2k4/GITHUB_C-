#include <iostream> 
#include <cmath> 
using namespace std ; 
int main(){
     // s=2x binh + 3x +1
     //  beta= b*b -4ac 
     // x1= -b + can beta / 2*a 
     // x1= -b - can beta / 2*a 
     // beta =0 >>> -b/2*a
     int a=2 ,b=3,c=1;
     int benta=(b*b)-(4*a*c);
     if(benta>0){
          int x1=(-b+sqrt(benta))/(2*a);
          int x2=(-b-sqrt(benta))/(2*a);
          cout<<"Gia tri cua x1 la: " <<x1<<endl;
          cout<<"Gia tri cua x2 la: " <<x2<<endl;
     }else if(benta==0){
          int ketqua= -b/2*a;
          cout<<"ket qua la: "<<ketqua;
     }else{
          cout<<"vo nghiem";
     }
     return 0;
}