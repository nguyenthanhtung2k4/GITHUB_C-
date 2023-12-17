#include <iostream> 
using namespace std;
int main(){
     int mang[3][5]={10,10,10,10,5,5,8,8,8,3,45,45,40,45,10};
     int flas=0;
     for(int i=0;i<3;i++){
          for(int j=0;j<5;j++){
               if(mang[i][0]==mang[i][1]&& mang[i][1]==mang[i][2]&&mang[i][2]==mang[i][3]){
                    flas=1;
               }else {
                    for(int a=0;a<5-1;a++){ 
                         for(int b=0;b<5-1;b++){
                              if(mang[i][b]>mang[i][a]){
                                   int sap;
                                   sap=mang[i][b];
                                   mang[i][a]=sap;
                              }
                              
                         }
                    }
               }
          }
          if(flas==1){
               cout<<"yes"<<endl;
          }
     }
}