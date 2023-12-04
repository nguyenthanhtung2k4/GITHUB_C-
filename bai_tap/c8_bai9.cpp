#include <iostream>
using namespace std;
void sap_xep(int* p,int n){
     for(int i=0;i<n;i++){
          for(int j=0;j<n-1;j++){
               if(*(p+j)<*(p+j+1)){
                    int sap=*(p+j);
                    *(p+j)=*(p+j+1);
                   *(p+j+1)=sap;
               }
          }
     }
}
double trung_vi(int* p, int n){
     double tb;
     return tb=(*(p+4)+*(p+5))/2.0;
}
int main(){
     int n=10;
     int mang[n]={1,9,2,8,3,7,4,6,5,0};
     int* p=mang;
     cout<<"sap xep: "<<endl;
     
     sap_xep(p,n);
     cout<<"Trung vi la: "<<trung_vi(p,n);


}