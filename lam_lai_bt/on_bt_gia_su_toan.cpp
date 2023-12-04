#include <iostream> 
#include <ctime>
#include<cstdlib>
using namespace std ;
int main(){
     int so1 , so2,tong,nhap;
     srand(time(0));
     so1=rand()%1000;
     so2=rand()%1000;
     cout<<"  "<<so1<<"\n+ "<<so2<<"\n------\n";
     cin>>nhap;
     tong=so1+so2;
     if(nhap==tong){ 
          cout<<"Chuc mung ban"<<endl;
     }
     else{cout<<"Ket qua sai roi\nKet qua la: "<<tong;}
     return 0;
}