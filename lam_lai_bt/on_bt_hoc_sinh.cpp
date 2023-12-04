#include <iostream>
#include <string>
using namespace std ;
int main(){
     int slg;
     string name,dau,cuoi;
     do{
     cout<<"So luong hoc sinh :";cin>>slg;
     }while(slg <1);
     cin.ignore();
     for(int i=1;i<=slg;i++){
          cout<<"Ten:"<<i<<" : ";
          getline(cin,name);
          if (i==1){
               dau=name;
          }
          if(i==slg){
               cuoi=name;}
          
     }cout<<"Dau hang la:"<<dau<<"\nCuoi hang la:"<<cuoi<<endl;
     return 0;
}