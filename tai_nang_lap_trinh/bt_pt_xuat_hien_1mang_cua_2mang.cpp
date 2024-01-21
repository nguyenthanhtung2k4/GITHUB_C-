#include <iostream> 
using namespace std ;
void nhap( int mang[],int n){

     for(int i=0;i<n;i++){
          cin>>mang[i];
     }
}
void sosanh(int a, int b ,  int mang1[], int mang2[]){
     for(int i=0;i<a;i++){
          for (int j = 0; j < b; j++)
          {
               if(mang1[i]==mang2[j]){
                    cout<< mang1[i]<<" ";
               }
          }
     }
}

int main(){
     int a,b;
     int size=100;
     do{
          cin>>a>>b;
     }while(a,b>size);
     int mang1[a],mang2[b];
     nhap(mang1,a);nhap(mang2,b);
     sosanh( a,b ,mang1, mang2);
     return 0;

}