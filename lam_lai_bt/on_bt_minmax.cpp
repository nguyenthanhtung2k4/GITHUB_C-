#include <iostream> 
using namespace std; 
int main(){ 
     int so,max,min;
     bool i=true;
     while(true){
          cout<<"Nhap so: ";cin>>so;
          if(so!= -99){
               if(i){
                    max=so;
                    min=so;
                    i=false;
               }else{
                    if(so<max){
                         max=so;
                    }
                    if(min<so){
                         min=so;
                    }
               }
          }else{break;} 
     }
     cout<<"Max: "<<max<<"\nMin: "<<min;
     return 0;
}