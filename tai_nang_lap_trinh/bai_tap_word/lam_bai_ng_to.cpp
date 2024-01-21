#include <iostream> 
#include <cmath> 
using namespace std; 
bool nguyen(int n){
     if(n<2){return false;}
     for(int  i=0;i<=sqrt(n);i++){ 
          if(n%i==0) { return false; }
     }
     return true;
}
int main(){
     int a,b; 
     cin>>a>>b; 
     if(b<=a){cout<<"-1";}
     else{
          for(int i=a;b>=i;i++){
               if(nguyen(i)){
                    cout<<i;
               }
               else{cout<<"-1";}
          }
     }
}