#include <iostream> 
#include <cmath> 
using namespace std;
int  main(){
     //  so  nguyen to la si chi chia  cho  so  1 va  chinh so  so
     // ==>  Ngoai 2 so  nay  la k chia duoc so nao  khac  thi goi  la so  nguyen to
     int n;
     cin>>n; 
     if(n<2){cout<<n<<"\nsai";return -1;}
     int so=0;
     for(int i=2;i<=sqrt(n);i++){
          if(n%i==0){
               so++;
          }
     }
     if(so==0){cout<<n<<"\ndung";}
     else{cout<<n<<"\nsai";}
     return 0;
}