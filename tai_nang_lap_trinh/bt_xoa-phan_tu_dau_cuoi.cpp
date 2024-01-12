#include <iostream> 
using namespace std ;
void new_mang(int n,int mang[]){
     int new_mang[n];
     for (int i =0; i < n-2; i++)
     {
          new_mang[i]=mang[i+1];
          cout<<"new: "<<new_mang[i]<<" ";
     }
}
 int main(){
     int a;
     do{
          cin>>a;
     }while(a<1);
     int mang[a];
     for(int i=0;i<a;i++){
          cin>>mang[i];
          
     }
     new_mang(a,mang );
 }