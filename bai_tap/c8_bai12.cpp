#include <iostream> 
using  namespace std;
int* new_mang(int* p,int n){
     int* new_p=new int[n+1];
     int i=1, j=0;
     *(new_p+j)=0;
     while (n+1>0){
          *(new_p+i)=*(p+j);
          i++;
          j++;
          n--;
     }
     return new_p;
}
void lap(int* lap,int n ){
     for(int i=0;i<n;i++){
          cout<<lap[i]<<" ";
     }
}
void xuat(int* new_p,int n,int* p){
     cout<<"\nMang cu: "<<endl;
     lap(p,n);
     cout<<"\nMang moi:"<<endl;
     lap(new_p,n+1);
}
int main(){
     int n=5;
     int mang[n]={1,2,3,4,5};
     int* p=mang;
     int* new_p=new_mang(p,n);
     xuat(new_p,n,p);
     return 0;
}