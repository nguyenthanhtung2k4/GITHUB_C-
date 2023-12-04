#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void  nhap(string name[],double diem[][4],int so){
     //int SO=0, TB=0,Tong;
     cout<<"Ten hoc sinh: ";
     cin.ignore();
     getline(cin,name[so]);
     for(int i=0;i<4;i++){
          cout<<"Diem "<<i+1<<": ";
          cin>>diem[so][i];
     }
}
double  diem_tb(double diem[][4],int so){
     int tong=0,tb=0;
     for(int i =0;i<4;i++){
          tong+=diem[so][i];
     }tb=tong/4.0;
     return tb;     
}
void hang_diem(double tb_diem[],string  name[]){
     for(int i=0;i<5;i++){
          if(tb_diem[i]>=90&&tb_diem[i]<=100){cout<<"\n"<<name[i]<<" Diem A"<<endl;;}
          if(tb_diem[i]>=80&&tb_diem[i]<=89){cout<<"\n"<<name[i]<<" Diem B"<<endl;;}
          if(tb_diem[i]>=70&&tb_diem[i]<=79){cout<<"\n"<<name[i]<<" Diem C"<<endl;;}
          if(tb_diem[i]>=60&&tb_diem[i]<=69){cout<<"\n"<<name[i]<<" Diem D"<<endl;;}
          if(tb_diem[i]>=0&&tb_diem[i]<=59){cout<<"\n"<<name[i]<<" Diem F"<<endl;;}
     }
}
int main(){    
     string name[5];
     double diem[5][4];
     double tb_diem[5]={0};
     for(int i=0;i<5;i++){
          cout<<"Hoc sinh: "<<i+1<<endl; 
          nhap(name,diem,i);
          tb_diem[i]=diem_tb(diem,i);
     }
     cout<<"Bang diem cua 5 hoc sinh la";
     hang_diem(tb_diem,name);
     return 0;
}