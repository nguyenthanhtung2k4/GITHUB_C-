#include<iostream>
using namespace std;
int dequy(int n){
     if(n==1){
          return 1;
     }
     return dequy(n-1)*n;
}
int main(){
     cout<<dequy(4);
     return -1;
}