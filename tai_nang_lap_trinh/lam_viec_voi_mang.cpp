#include <iostream> 
using namespace std;
void sap_xep(int mang[][5] ){
     for(int i=0;i<3;i++){
          for(int j=0;j<5;j++){
               for(int a=0;a<4;a++){ 
                    for(int b=0;b<4-1;b++){
                         if(mang[i][b]>mang[i][a]){
                              int sap;
                              sap=mang[i][b];
                              mang[i][b]=mang[i][b+1];
                              mang[i][b+1]=sap;
                         }    
                    }
               }    
          }
     }
}
int main(){
     int mang[3][5]={5,9,5,5,1,12,12,12,6,6,5,5,5,6,1,};

     sap_xep(mang); 
     for(int i=0;i<3;i++){
          for(int j=0;j<5;j++){
               cout<<mang[i][j]<<" ";
          }cout<<endl;
     }
     for(int i=0;i<3;i++){
          int flas=0;
          int flas2=0;          
          for(int j=0;j<5;j++){
               if(mang[i][0]==mang[i][1]&& mang[i][1]==mang[i][2]&&mang[i][2]==mang[i][3]){
                    flas=1;
               }else {
                    int sun=mang[i][0]+mang[i][4];
                    mang[i][0]=sun;
                    if(mang[i][0]==mang[i][1]&& mang[i][1]==mang[i][2]&&mang[i][2]==mang[i][3]){
                         flas2=1;
                    }else{flas2=0;}
               }             
          }
          if(flas2==1|| flas==1){
               cout<<"yes"<<endl;
          }
          if(flas2==0||flas==0){
               cout<<"no"<<endl;
          }           
     }
     return 0;
}