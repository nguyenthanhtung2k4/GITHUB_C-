#include <iostream> 
#include <cmath>
using namespace std;
int main(){
     int a,b,c,p,heron; //heron =can p(p-a)(p-b)(p-c) // p=(a+b+c)/2; 
     //=> tam gaic deo khong tinh duoc p
     cin>>a>>b>>c;
     if(a<1||b<1||c<1||a+b<=c||a+c<=b||c+b<=a ){cout<<"-1";return 0;}
     else{
          if(a+b>c||a+c>b||c+b>a ){
               p=(a+b+c)/2;
               heron=sqrt(p*(p-a)*(p-b)*(p-c));
               cout<<heron<<endl;
          }
     }
     return 0;
}