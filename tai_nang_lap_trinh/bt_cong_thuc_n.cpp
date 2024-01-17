#include <iostream> 
#include <cmath>
#include  <iomanip>
using namespace std ;
int main( ){
     double s=1,n;
     cin>>n;
     if(n<0||n>10){
          cout<<"-1"; 
          return 0;
          }
     else{
          for(int i=1 ;i<=n;i++){
               s+=pow(n,i)/(i);
          }
          cout<<fixed<<setprecision(2)<<s;
     }
}