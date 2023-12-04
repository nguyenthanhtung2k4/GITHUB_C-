#include <iostream> 
#include <cstdlib>
#include <time.h>
using namespace std; 
void nhap(int user[5],int so){
     do{
          cout<<"Nhap so"<<so+1<<" : ";cin>>user[so];
     }while(user[so]>9 || user[so]<0);
}
int soso(int so,int lottery[5],int i){
     so=rand()%10;  
     lottery[i]=so;
     //cout<<so;
     return so;
}
int main(){ 
     int so=0,co=0;
     int lottery[5],user[5];
     cout<<"Nhap 5 chu so ngau nhien: "<<endl;
     for(int i=0;i<5;i++){
          soso(so,lottery,i);
          nhap(user,i);
          
     }
     for(int i=0;i<5;i++){
          if(user[i]==lottery[i]){co=1;}
          else{co=0;}
     }
     if(co==1){cout<<"Ban da trung giai doc dac ";}
     else{cout<<"Chuc ban may man lan sau";}
     return 0;
}