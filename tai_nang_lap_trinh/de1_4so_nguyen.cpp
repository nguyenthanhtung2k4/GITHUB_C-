#include <bits/stdc++.h>
using namespace std; 
int dao_nguoc(string n){
     reverse(n.begin(),n.end());
     int nguoc=stoi(n);
     if(nguoc<2){return -1;}
     return nguoc;
}
int nguyen(int nguyen_so){
    int so=0;
    for(int i=2;i<=sqrt(nguyen_so);i++){
        if (nguyen_so % i == 0) {so++;}
    }
    return so;
}
int main(){
     fstream file_doc("SHISHO.INP",ios::in);
     fstream file_ghi("SHISHO.OUT",ios::out);
     string so_lg,so;
     file_doc>>so_lg;
     int So_lg=stoi(so_lg);
     int So_mang[So_lg],dem=0;
     for(int i=0;i<So_lg;i++){
          file_doc>>so;
          int SO=stoi(so);
          if(SO>=2){
            So_mang[i]=dao_nguoc(so);
          }
     }
     for(int i=0 ;i<So_lg;i++){
        int nguyen_so=So_mang[i];
        if(nguyen(nguyen_so)==0){
            dem++;
        }
     }
     file_ghi<<dem;
   return 0;
}
