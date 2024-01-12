#include <iostream> 
#include <cmath>
using namespace std;
int main(){
     int n,a;
     cout<<"nhap n: ";cin>>n;
     //  a3 +a2+a
     if(n==1){
          cout<<"Nhap a: ";cin>>a;
          int tinh=pow(a,3)+pow(a,2)+pow(a,1);
          cout<<"ket qua: "<<tinh<<endl;
     }else if(n==2){
          cout<<"Nhap a: ";cin>>a;
          int tinh=a*5-2*a+7;
          cout<<"ket qua: "<<tinh<<endl;
     }else if(n==3){
          cout<<"Nhap a: ";cin>>a;
          int tinh=pow(a,2)+5*a-1;
          cout<<"ket qua: "<<tinh<<endl;
     }else{
          return -1;
     }
     return 0;
}