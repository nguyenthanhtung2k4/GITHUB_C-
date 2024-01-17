#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std ; 
int main(){
     float a,b,c;
     float tong=0;
     cin>>a>>b>>c;
     if(a,b,c<1)cout<<"-1";
     float tinh=((c*c) - sqrt(1+(a/(b+c)*(b+c)+1)))/((a*a) + (b*b) +((c+1)*(c+ 1))+1);
     // tong=tinh/tinh2;
     cout<<fixed<<setprecision(2)<<tinh;
     return 0;

}