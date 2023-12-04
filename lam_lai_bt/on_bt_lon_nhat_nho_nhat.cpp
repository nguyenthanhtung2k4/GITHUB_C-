#include <iostream> 
using namespace std; 
int main(){
     int so,min,max;
     int i=true;
     do{
          cout<<"Nhap so ";cin>>so;
          if(i){
               max=so;
               min=so;
               i=false;
          }else{
               if(max<so){
                    max=so;
               }if(min>so){
                    min=so;
               }
          }
     }while(so!=-99);
     cout<<"Max: "<<max<<"\nMin: "<<min;
     return 0;
}