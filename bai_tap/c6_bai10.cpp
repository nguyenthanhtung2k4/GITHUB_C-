#include <iostream> 
#include <string>
using namespace std; 
int main(){
     char kq[20]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
     char nhap[20];
     int  causai[20]={0};
     int  dung=0,sai=0,tt=0;
     for(int i=0;i<20;i++){
          cout<<"Nhap ket qua: ";cin>>nhap[i];
          if(nhap[i]==kq[i]){
               dung++;
          }else{
               sai++;
               causai[tt]=i;
               tt++;
          }
     }
     if(dung>=15){
          cout<<"\nDO TRONG KI THI"<<endl;
     }else{cout<<"\nKHONG DO TRONG KI THI"<<endl; }

     
     cout<<"Tong so dung la: "<<dung<<endl;
     cout<<"Tong so sai la: "<<sai<<endl;
     cout<<"\n\nCac cau sai la \n"<<endl;
     for(int i=0;i<tt;i++){
          cout<<"Cau: "<<causai[i]+1<<endl;
     }
     return 0;
}