#include <iostream> 
using namespace std; 
int main(){
     int a;
     do{
          cin>> a;
     }while (a<1);
     int mang[a];
     for (int i = 0; i < a; i++){
          cin>>mang[i];
     }
     int min=mang[0],max=mang[0];
     for(int i=0;i<a;i++){
          // min=mang[0];
          if(min>mang[i]){
               min=mang[i];
          }
          // }max=mang[0];
          if(max<mang[i]){
               max=mang[i];
          }
     }
     cout<<min<<endl<<max<<endl;
//     for (int i = 0; i < a-1; i++) {
//         for (int j = 0; j < a - 1; j++) {
//             if (mang[j] > mang[j+1]) {
//                int sap = mang[j];
//                mang[j] = mang[j+1];
//                mang[j+1] = sap;
//             }
//         }
//     }
//      cout<<mang[0];
     return 0;
}
