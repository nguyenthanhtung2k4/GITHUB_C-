#include <iostream> 
using namespace std ;
void max(int mang[],int nhap, int size){
     int max;
     for(int i=0;i<=size;i++){
          if(mang[i]>nhap){
               cout<<"\nPhan tu lon hon N la: "<<mang[i];
          }
     }
}
int main(){
     int mang[]={1,35,7,3,7,8,36,3,867,34,5,0};
     int nhap; 
     cout<<"Nhap n:";cin>>nhap;
     int size=sizeof(mang)/sizeof(mang[0]);/// tinh tong cac  phan tu 
     max(mang,nhap,size);
}