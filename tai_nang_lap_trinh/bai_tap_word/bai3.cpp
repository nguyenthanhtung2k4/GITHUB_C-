#include <iostream>
using namespace std;
int main(){ 
     int n;
     int tong=0;
     cin>>n;
     for(int i=1;i<=n;i++){
          tong+=i;
     }cout<<tong;
     return 0;
}