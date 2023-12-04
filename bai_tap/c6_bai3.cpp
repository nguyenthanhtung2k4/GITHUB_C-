#include <iostream> 
#include <string> 
using namespace std; 
int so(string name[], int SO[]){
     int tong=0;
     for(int i=0;i<5;i++){
          cout<<"Nhap doanh so "<<name[i]<<" : ";cin>>SO[i];
          tong+=SO[i];
     }
     return tong;
}
int max(string name[],int so[]){
     int max=so[0];
     for(int i=0;i<5;i++){
          if(max<so[i]){
               max=so[i];
          }
     }
     return max ;
}
int min(string name[],int so[]){
     int min=so[0];
     for(int i=0;i<5;i++){
          if(min>so[i]){
               min=so[i];
          }
     }
     return min ;
}
int main(){
     string name[5]={"nhe","vua","ngot","nong","vi chanh"}; 
     int doanh_so[5];
     int so1,so2,so3,so4,so5;
     cout<<"Tong daonh so la: "<< so(name,doanh_so)<<endl;
     for(int i=0;i<5;i++){
          if(max(name,doanh_so)==doanh_so[i])
          cout<<"San pham ban chay nhat la: "<<name[i]<<endl;
          if(min(name,doanh_so)==doanh_so[i])
          cout<<"San pham ban chay cham nhat la : "<<name[i]<<endl;
     }

     return 0;
}