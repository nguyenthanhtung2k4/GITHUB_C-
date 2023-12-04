#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std; 
void  ten_nam(vector<string>& nam,string TEN){
     string nhap;
     cout<<TEN<<endl;
     cout<<"Ten nam: ";
     cin.ignore();
     getline(cin,nhap);
     for(int i=0;i<200;i++){
          if(nhap==nam.at(i)){
               cout<<"Ten: "<<nhap<<" [pho  bien nhat]"<<endl;
               //break;
               return;
          }
     }
          cout<<"Ten: "<<nhap<<" [Khong pho  bien]"<<endl;
}
void ten_gai(vector<string>& gai,string TEN){
     string nhap;
     cout<<TEN<<endl;
     cout<<"Ten gai: ";
     cin.ignore();
     getline(cin,nhap);
     for(int i=0;i<200;i++){
          if(nhap==gai.at(i)){
               cout<<"Ten: "<<nhap<<" [pho  bien nhat]"<<endl;
               //break;
               return;
          }
     }
          cout<<"Ten: "<<nhap<<" [Khong pho  bien]"<<endl;
}
void all(vector<string>& nam,vector<string>&  gai,string TEN){
     string nhap;
     cout<<TEN<<endl;
     cout<<"Ten nam or gai: ";
     cin.ignore();
     getline(cin,nhap);
     for(int i=0;i<200;i++){
          if(nhap==nam.at(i)|| nhap==gai.at(i)){
               cout<<"Ten: "<<nhap<<" [pho  bien nhat]"<<endl;
               //break;
               return;
          }
     }
          cout<<"Ten: "<<nhap<<" [Khong pho  bien]"<<endl;
}
int main(){
     vector<string> nam,gai;
     fstream boy("BoyNames.txt",ios::in);
     fstream girl("GirlNames.txt",ios::in);
     int i=0,chon;
     string  ten1,ten2;
     if(!boy || !girl){
          cout<<"Mot trong hai file khong ton tai!";
          return 1;
     }
     while(getline(boy,ten1)&&getline(girl,ten2))
     {
          nam.push_back(ten1);
          gai.push_back(ten2);
     }
     ///  lua chon
     cout<<"\n\tLua chon ten \n[1]boy name\n[2]Girl name\n[3]All name"<<endl;
     
     do{
          cout<<"\n\n>>> ";cin>>chon;
          if(chon==1){
               ten_nam(nam,"\n\tTEN NAM");
          }else if(chon==2){
               ten_gai(gai,"\n\tTEN GAI");
          }else if(chon==3){
               all(nam,gai,"\n\tTEN  NAM HOC GAI");
          }
     }while(chon>3||chon<1);
     return 0;
}
