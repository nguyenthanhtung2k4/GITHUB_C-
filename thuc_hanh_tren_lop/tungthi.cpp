#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int n;
  do{
    cin>>n;
  }while(n<0);
  double  tong=0,dem=0,gio;
  for(int i=0;i<n;i++){
    do{
    cin>>gio;
    }while(gio>=24||gio<0);
    tong+=gio;
    if(gio>=8){
      dem++;
    }
  }
  cout<<tong<<fixed<<setprecision)<<endl;
  cout<<dem<<endl;
  return 0;
}