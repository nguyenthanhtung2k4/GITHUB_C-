#include <iostream> 
using namespace std; 
void mang_new(int n,int mang[]){
     int new_mang[n];
     for(int i=0;i<n;i++){
          if(mang[i]>=0){
               cout<<mang[i]<<" ";
          }else{continue;}
     }
}
int main(){
     int n;
     do { 
          cin>>n;
     }while (n<0);
     int mang[n];
     for(int i=0;i<n;i++)
     {
          cin>>mang[i];
     }
     mang_new(n,mang);
     return 0;
}