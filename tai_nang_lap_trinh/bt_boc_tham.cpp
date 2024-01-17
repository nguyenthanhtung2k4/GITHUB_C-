#include <iostream> 
using namespace std ;
int may_man(int a, int b, int  c){
     if(a==b){
          cout<<"may man";
     }else if(a,b==c){
          cout<<"doc dac";
     }else{
          return  -1;
     }
} 
int check(int a){
     if(a%2==0){
          a*=2;
     }else{
          a+=1;
     }
     return a;
}
int main( ){
     int a,b,c;
     cin>>a>>b>>c;
     if(a,b,c>10 || a,b,c<1){
          cout<<"-1";
     }else{
          may_man(a,b,c);
          int tong =check(a)+check(b)+check(c);
          cout<<tong;
     }
     return 0;
}