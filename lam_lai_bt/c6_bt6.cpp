/*
#include <iostream>
#include <fstream>
using namespace std ;
int thang6(char tiet[0][30],int mua,int nang,int may){
     for(int i=0;i<=0;i++){
          for(int j=0;j<30;j++){
               if(tiet[i][j]=='R'){may++;}
               if(tiet[i][j]=='C'){mua++;}
               if(tiet[i][j]=='S'){nang++;}
          }
     }
}
int thang7(char tiet[0][30],int mua,int nang,int may){
     for(int i=0;i<=0;i++){
          for(int j=0;j<30;j++){
               if(tiet[i][j]=='R'){may++;}
               if(tiet[i][j]=='C'){mua++;}
               if(tiet[i][j]=='S'){nang++;}
          }
     }
}
int thang8(char tiet[0][30],int mua,int nang,int may){
     for(int i=0;i<=0;i++){
          for(int j=0;j<30;j++){
               if(tiet[i][j]=='R'){may++;}
               if(tiet[i][j]=='C'){mua++;}
               if(tiet[i][j]=='S'){nang++;}
          }
     }
}

int main(){
     char tiet[3][30];
     int mua=0,nang=0,may=0;
     fstream file("RainOrShine.txt",ios::in); 
     if(!file){
        cout<<"File not found!"<<endl;
        return 0;
        }
     for(int i=0;i<3;i++){
          for(int j=0;j<=30;j++){
               file>>tiet[i][j];
               if(tiet[i][j]=='R'){may++;}
               if(tiet[i][j]=='C'){mua++;}
               if(tiet[i][j]=='S'){nang++;}
          }
     }
     thang6(tiet,mua,nang,may);
     thang7(tiet,mua,nang,may);
     thang8(tiet,mua,nang,may);
     return 0;
}
*/

// #include <iostream>
// #include <fstream>
// using namespace std ;
// int main(){
//      fstream file("RainOrShine.txt.",ios::in);
//      char a=[3][30];
//      int mua=0,nang=0,may=0;
//      for(int i=0;i<3;i++){
//           for(int j=0;j<30;j++){
//                file>>a[i][j];
//                if(a[i][j]=='R'){may++;}
//                if(a[i][j]=='C'){nang++;}
//                if(a[i][j]=='S'){mua++;}
//           }
//      }
//      /// thang 6
//      for(int i=0;i<=0;i++){
//           for(int j=0;j<30;j++){
//                file>>a[i][j];
//                if(a[i][j]=='R'){may++;}
//                if(a[i][j]=='C'){nang++;}
//                if(a[i][j]=='S'){mua++;}   
//           }
//      }
//      //// thang 7
// for(int i=0;i<=0;i++){
//           for(int j=0;j<30;j++){
//                file>>a[i][j];
//                if(a[i][j]=='R'){may++;}
//                if(a[i][j]=='C'){nang++;}
//                if(a[i][j]=='S'){mua++;}   
//           }
//      }
// }