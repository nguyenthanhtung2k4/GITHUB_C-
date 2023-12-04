#include <iostream>
#include <time.h> 
using namespace  std;
int main(){
     srand(time(0));
     int so= rand();
     cout<<so;
     return 0;
}

// ==> ham nay cho  dung de cho thang main  xu ly 
// con neu vao void hay  int thi  no khong the xu  ly duoc 
// phai dung ham ben duoi nay <cstdlib> 
#include <iostream> //
#include <time.h> /// dung de  xac dinh thoi  gian  |  cung co the la dung time.h  de random

///  co lien quan den  srand(time(0));


#include <cstdlib> /// thu vien chua vua random 
using namespace std; 
int  coinToss(){
     int so=rand()%2+1;
     if(so==1){ 
          cout<<"heads"<<endl;
     }else{cout<<"ails"<<endl;}
     return so;
}
int main(){
     int lap, heads=0,ails=0;
     cout<<"Lap lai: ";cin>>lap;
     for(int i=1;i<=lap;i++){
          int so  =coinToss();
          if(so==1){ 
               heads ++;
          }else{ails ++;}
          
     }
     cout<<"So lan dong xu co mat heads: "<<heads<<endl;
     cout<<"So lan dong xu co mat ails: "<<ails<<endl;
     return 0;
}