#include <iostream> 
using namespace  std; 
int main(){
     int so1,so2,max,min; 
     cout<<"Nhap so1: ";cin>>so1;
     cout<<"Nhap so2: ";cin>>so2;
     max=(so1>so2)?so1:so2;
     min=(so1<so2)?so1:so2;
     cout<<"\n\nMax: "<<max<<"\nMin: "<<min;
     return 0;
}