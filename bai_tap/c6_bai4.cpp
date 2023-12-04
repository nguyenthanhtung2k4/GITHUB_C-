#include <iostream> 
using namespace std; 
void max_n(int mang[],int phan_tu,int n){
     int max =mang[0];
     for(int i=0;i<phan_tu;i++){
          if(mang[i]>n){
               cout<<"So phan tu lon hon n la:"<<mang[i]<<endl;
          }
     }cout<<endl;
}
int main (){
     int n; 
     cout<<"Nhap so n: ";cin>>n; 
     int mang[]={12,13,5,36,3,7,8,453,24,6,4,8,56,6,4,59};
     int phan_tu=sizeof(mang)/sizeof(mang[0]);// size de biet bao nhieu phan tu trong mang;
     max_n(mang,phan_tu,n);

     
}