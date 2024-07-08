// viet ham tinh giai thua bang de quy
#include<iostream>
using namespace std;
int dequy(int n){
     if(n==1){return 1;}
     else{return n*dequy(n-1);}
}
int main(){
     dequy(5);
     return -1;
}
