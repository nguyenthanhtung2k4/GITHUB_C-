#include <iostream> 
using namespace std;
int main( ){
     int a;
     do{
          cin>> a;
     }while(a<1);
     int mang[a];
     for(int i=0;i<a;i++){
          cin>>mang[i];
     }
     for (int i = 0; i < a-1; i++) {
        for (int j = 0; j < a - 1; j++) {
            if (mang[j] > mang[j+1]) {
               int sap = mang[j];
               mang[j] = mang[j+1];
               mang[j+1] = sap;
            }
        }
     }
     for(int i=0; i<a;i++){
          cout<<mang[i]<<" ";
     }
     return 0;
}