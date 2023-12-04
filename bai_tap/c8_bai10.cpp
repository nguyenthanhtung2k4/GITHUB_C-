#include <iostream> 
using namespace std; 
void copy(int* p, int n){
     int* copy=new int [n];
     for(int i=0;i<n;i++){
          *(copy+i)=*(p+i);
     }    
     ///cout<<"copy: "<<*(copy+2)<<endl; 
     for(int i=0;i<n-1;i++){
          for(int j=0;j<n-1;j++){
               if(*(copy+j)>*(copy+j+1)){
                    int sap=*(copy+j);
                    *(copy+j)=*(copy+j+1);
                    *(copy+j+1)=sap;
               }
          }     
     }
     for(int i=0;i<n;i++){
          *(p+i)=*(copy+i);
     }

}
int main(){
     int n =10;
     int mang[n]={1,2,3,4,5,6,7,8,9,10};
     copy(mang,n);
     // cout<<mang[3]<<endl;
     for(int i=n-1;i>=0;i--){
          cout<<mang[i]<<" ";
     }
}