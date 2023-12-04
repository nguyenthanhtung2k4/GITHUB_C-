// #include <iostream> 
// using namespace std ;
// int getline(){
//      int nhap; 
//      cout<<"nhap: ";cin>>nhap; 
//      for(int i=1;i<=nhap/1000;i++){
//           cout<<"*";
//      }cout<<endl;
//      return nhap;
// }
// int main(){
//      int d1=getline();
//      int d2=getline();
//      int d3=getline();
//      int d4=getline();
//      int d5=getline();
//      return 0;
// }

#include <iostream>
using namespace std ;
int main(){
     int  mang[5];
     for (int i = 0; i<5; i++) {
          cout<<"doanh so"<<i+1<<": ";cin >> mang[i] ;
     }

     for(int i=0;i<=4;i++){
          cout<<"doanh so"<<i+1<<": ";
          for(int j=1;j<=mang[i]/1000;j++){
              cout<<"*"; 
          }cout<<endl;
     }
     return 0;
}