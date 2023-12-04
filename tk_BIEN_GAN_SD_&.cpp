#include <iostream>
using namespace std; 
void getScore( int &diem){//// & de thay  the gan so  moi vao bien
     do{
          cout<<"So diem bai kiem "<<endl;
          cout<<"Nhap so diem: ";cin>>diem; 

     }while(diem<0 || diem>100);
}
int findLowest(int so1,int so2, int so3 , int so4, int so5){ 
          int min=so1; 
          if(min>so1){ 
               min=so1;
          }
          if(min>so2){ 
               min=so2;
          }
          if(min>so3){ 
               min=so3;
          }
          if(min>so4){ 
               min=so4;
          }
          if(min>so5){ 
               min=so5;
          }
          cout<<"\nDiem thap nhat cua ban la: "<<min;
          return  min;
          //cout<<"Diem tring binh cua 4 bai kiem tra cao nhat la: "<<( so1+so2+so3+so4+so5-min/4);
}
void calcAverage(int so1,int so2,int so3,int so4,int so5){ 
     int min=findLowest(so1,so2,so3,so4,so5);
     int tb=(so1+so2+so3+so4+so5-min)/4;
     cout<<"\nDiem trung binh cua 4 bai kiem tra cao nhat la: "<<tb<<endl;
}
int main(){ 
     int so1=0,so2=0,so3=0,so4=0,so5=0;
     getScore(so1);
     getScore(so2);
     getScore(so3);
     getScore(so4);
     getScore(so5);
     calcAverage(so1,so2,so3,so4,so5);
     return 0;     
}