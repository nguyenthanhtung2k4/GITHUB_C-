#include <iostream> 
using namespace std ; 
int main(){
     int msv=0,diem=0;
     int mang_ms[4]={1771020002,1771020001,1771020003};
     int mang_diem[4]={50,70,80};
     cin>>msv>>diem;

     // cout<<diem<<"diem"<< endl;
     if(diem>100 || diem<0){
          cout<<"-1";
          return -1;
     }
     mang_ms[3] =msv;
     mang_diem[3]=diem;

     for(int i=0;i<4-1;i++){
          for(int j=0;j<4-1;j++){
               if(mang_diem[j]>mang_diem[j+1]){
                    int sap=mang_diem[j];
                    mang_diem[j]=mang_diem[j+1];
                    mang_diem[j+1]=sap;
                    int sap2=mang_ms[j];
                    mang_ms[j]=mang_ms[j+1];
                    mang_ms[j+1]=sap2;
               }
          }
     }
     for (int i = 0; i <4; i++)
     {
          cout<<mang_ms[i]<<" "<<mang_diem[i];
          cout<<endl;

     }cout<<endl;

     return 0;
}