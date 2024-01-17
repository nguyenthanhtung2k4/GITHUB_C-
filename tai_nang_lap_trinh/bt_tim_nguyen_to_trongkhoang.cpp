#include <iostream> 
#include <cmath> 
using namespace std ; 
bool nguyento(int n){
     if(n<2){
          return false;
          for(int i=2;i<=sqrt(n);i++){
               if(n%i==0)return false;
          }
     }return true;
}
int main( ){
     int a, b;
     cin>> a>>b;
     if(b<=a || a<2 || b<2){
          cout<<"-1";
     }
     else{
          for(int i =a;i<=b;i++){
              if( nguyento(i)){
               cout<<i<<endl;
              }
          }
     }
     return 0;
}