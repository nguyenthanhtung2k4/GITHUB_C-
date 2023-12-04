// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//      int so,nhap;
//      double tinh=0;
//      do{
//           cout<<"Nhap so: ";cin>>nhap;
//           so=nhap%2;
//      }while(so!=0);
//      for(int i=2;i<=nhap;i+=2){
//           tinh +=1.0/i;
//      }cout<<"Tinh: "<<fixed<<setprecision(2)<<tinh;
//      return 0;
// }

#include <iostream> 
#include <iomanip>
using namespace std;
int main(){ 
     int n;
     double tong=0; 
     do{ 
          cout<<"Nhap N:";cin>>n; 
     }while(n%2!=0); 
     for(int i=2;i<=n;i+=2){
          tong+=1.0/i;
     }cout<<fixed<<setprecision(2)<<tong;
     return 0;
}