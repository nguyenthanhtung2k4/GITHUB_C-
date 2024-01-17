#include <iostream> 
using namespace std ; 
int main(){
     int n; 
     cin>>n;
     if(n<1){
          cout<<"-1";
          return -1;
     }
     for(int i=0;i<n;i++){
          for(int j=n;j>=n-i;j--){
               cout<<j<<" ";
          }
          cout<<endl;
     }
     return 0;
}