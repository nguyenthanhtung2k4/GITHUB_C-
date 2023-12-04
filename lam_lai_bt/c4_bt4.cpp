#include <iostream> 
using namespace std; 
int main(){
     double  calo=3.6,tinh=0;
     for(int i=1;i<=30;i++){
          tinh=calo*i;
          if(i==5){
               cout<<tinh<<"calo cua "<<i<<endl;
          }
          if(i==10){
               cout<<tinh<<"calo cua "<<i<<endl;
          }
          if(i==15){
               cout<<tinh<<"calo cua "<<i<<endl;
          }
          if(i==20){
               cout<<tinh<<"calo cua "<<i<<endl;
          }
          if(i==25){
               cout<<tinh<<"calo cua "<<i<<endl;
          }
          if(i==30){
               cout<<tinh<<"calo cua "<<i<<endl;
          }
     }
}