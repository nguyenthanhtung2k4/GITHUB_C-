#include <iostream> 
using namespace std; 
int main(){
     int nhap,tinh=1;
     cout<<"Nhap so: ";cin>>nhap; 
     for(int i=1;i<=nhap;i++){
          tinh=tinh*i;
     }cout<<tinh;
     return 0;
}

