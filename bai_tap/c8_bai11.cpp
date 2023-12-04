#include <iostream> 
using namespace std;
int* new_mang(int* p,int size){
     //cout<<"p="<<*(p+2)<<endl<<endl;
     int* new_p=new int[size*2];
     int n=size*2;
     for(int i=0;i<n;i++){
          *(new_p+i)=*(p+i);
          if(i>=size){
               *(new_p+i)=0;
          }
     }
     return new_p;
}
void tra_ve(int* new_p,int n){
     cout<<"Phan tu moi"<<endl;
     for(int i=0;i<n*2;i++){
          cout<<"Phan tu: "<<i+1<<" => "<<*(new_p+i)<<endl;
     }
}
int main(){
     int n=5;
     int mang[n]={1,2,3,4,5};
     int* p=mang;
     cout<<"Mang cu "<<endl;
     for(int i=0;i<n;i++){
          cout<<"Phan tu: "<<i+1<<"=> "<<*(p+i)<<endl;
     }
     int* new_p=new_mang(p,n);
     tra_ve(new_p,n);
}