#include <iostream>
using namespace std; 
int main(){
     int mang[3][3];
     int hang[3]={0},cot[3]={0} , so[10]={0};
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
               cout<<"Nhap so: ";cin>>mang[i][j];
               hang[i]+=mang[i][j];
               cot[j] +=mang[i][j];
               if(mang[i][j]>9||mang[i][j]<1||so[mang[i][j]]==1){
                    cout<<"Khong phai la: Shu Magic Square";
                    return 0;
               }so[mang[i][j]]=1;
          }
     }
     int Tong_hang=hang[0]+hang[1]+hang[2]; 
     int Tong_cot=cot[0]+cot[1]+cot[2];
     //cout<<Tong_hang<<"\n"<<Tong_cot; 
     if(Tong_cot==45&&Tong_hang==45){
          cout<<"\n\tLa Shu Magic Square";
     }else{cout<<"\n\tKHONG PHAI LA:La Shu Magic Square";}\
     return 0; 
}