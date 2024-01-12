#include <iostream>
using namespace std ; 
void lap(int a  , string i ,int mang[]){
    
     for(int  i=0;i< a;i++){
        cout<<"phan tu mang "<<i+1<<": ";
        cin>>mang[i];   
     }
}
void xuat_hien(int manga[] ,  int mangb[],int a){
     int so=0;
     manga[0]==so;
     for(int i;i<a;i++){
          if(manga[i]==mangb[i]){
               cout<<"phan tu xuat  hien 2 lan  trong mang";
               cout<<manga[i];
          }
     }
}
int main(){
     int a ,b;
     cout<<"nhap so  phan  tu";
     cin>>a;
     int mang_a[a];
     lap(a,"1",mang_a);
     cout<<"nhap so  phan  tu";
     cin>>b;
     int mang_b[b];
     lap(b,"2",mang_b);
     xuat_hien(mang_a,mang_b,a);
}