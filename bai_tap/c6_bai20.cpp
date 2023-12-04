#include <iostream>
#include <fstream> 
#include <iomanip>
#include <string>
using namespace std;
int main(){
     string so;
     int i=0;
     double max,min,thang_max,thang_min;
     int mang[]={0};
     fstream file("1994_Weekly_Gas_A Average.txt",ios::in);
     if(!file){cout<<"File khong ton tai!";return 1;}
     while(getline(file,so)){
          int SO;
          so=SO;
          mang[i]=SO;
          i++;
     }
    
     int size=sizeof(mang)/sizeof(mang[0]);
     cout<<size;
     for(int i=1;i<=size;i++){
          max=mang[0];
          min=mang[0];
          if(max<mang[i]){
               max=mang[i];
               thang_max=i;
          
          }else if(min>mang[i]){
               min=mang[i];
               thang_min=i;
          }
     }
     cout<<"Gia gas trung binh cao nhat cua nam la: "<<max<<endl;
     cout<<"Thang trung binh cao nhat la: "<<thang_max<<endl;
     cout<<"Gia gas trung binh thap nhat cua nam la: "<<min<<endl;
     return 0;
}