#include <iostream>
using namespace std ;


void arr(int mang[],int n){
     cout<<"Nhap mang "<<endl;
     for(int i=0;i<n;i++){
          cin>>mang[i];
     }
}
void inarr(int mang[],int n){
     cout<<"In mang: "<<endl;
     for (int i = 0; i < n; i++)
     {
          cout<<"Mang "<<mang[i]<<endl;
     }
     
}
int main(){
     // int mang[10];
     int a=0;
     cout<<"Nhap ptu:  ";
     cin>>a;
     int mang[a];
     arr(mang,a);
     inarr(mang,a);
}