#include <iostream>
using namespace std;
void nhap(int empId[],int hour[],double payRate[]){
     for(int i=0;i<7;i++){
          cout<<"\n\t\tCCCD <"<<empId[i]<<">"<<endl;
          do{
               cout<<"Nhap gio lam: ";cin>>hour[i];
          }while(hour[i]<0);
          do{ 
               cout<<"Muc luong: ";cin>>payRate[i];
          }while(hour[i]<15.00);
     }
}
double tong(double wages[],int hour[],double payRate[]){
     int tong=0;
     for(int i=0;i<7;i++){
          wages[i]+=payRate[i]*hour[i];
     }
     return wages[7];
}
int main(){
     int empId[7]={5658845,8451277,4520125,1302850,7895122,7580489,8777541};// cc
     double wages[7]={0};//tong  tien 
     int hour[7]={0};//gio lam 
     double payRate[7]={0};// ty le luomg
     nhap(empId,hour,payRate);
     tong(wages,hour,payRate);
     cout<<"TONG TIEN LUONG CUA TUNG NHANH VIEN LA: \n\n\n";
     for(int i=0;i<7;i++){
          cout<<"\n\t\tCCCD <"<<empId[i]<<">"<<endl;
          cout<<"Tong tien:"<<wages[i]<<endl;
     }
     return 0;
}