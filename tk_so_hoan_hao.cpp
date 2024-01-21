#include <iostream> 
using namespace std ;
bool check(int n){
     //  so hoan hao  la cac so  khi  tach ra va  cong vao  bang chinh so  n  do 
     //  vd:  6= 1+2+3 : la so  hoan hao;
     int num=0;
     for( int i=1;i<=n/2;i++){
          if(n%i==0){
               num+=i;
          }
     }
     if(num==n)return true;
     return false;
}
int main(){
     int n; 
     cin>>n ;
     if(check(n)){
          cout<<"So  hoan hoa";
     }else{
          cout<<"Khong so  hoan hao";
     }
     return 0;     
}