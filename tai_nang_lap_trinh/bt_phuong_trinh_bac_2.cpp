#include <iostream> 
#include <math.h>
using namespace std; 
int main(){
     float a,b,c ;
     cin>>a;
     if(a==0){
          cout<<"sai"<< endl;
          return 0;
     }
     cin>>b>>c;
     float benta=(b*b)-(4*a*c);
     if(benta>0){
          float x1=(-b+sqrt(benta))/(2*a);
          float x2=(-b-sqrt(benta))/(2*a);
          cout<<x1<<endl<<x2;
     }else if(benta==0){
          cout<<(-b/(2*a)) <<endl;
     }
     else{
          cout<<"vonghiem"<<endl;
     }
     return 0;
}