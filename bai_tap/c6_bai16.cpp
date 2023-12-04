//  mha vo dich giai the gioi
#include <iostream> 
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;
string nhap(vector<string> team){
     bool co=false;
     string nhap;
     cout<<"Nhap doi bong chay: ";
     //cin.ignore();
     getline(cin,nhap);
     //cout<<nhap;
     int i=0,  size =0;
     size=team.size();
     //cout<<size;
     for(i=0;i<size;i++){
          if(team.at(i)==nhap){
               cout<<"Team:"<<nhap<<"\nTen Ton tai";
               co=true; 
               break;
          }
     }
     if(!co){cout<<"\nTeam:"<<nhap<<"\nTen khong ton tai";}
     else{cout<<"\n";}
     return nhap;
}
int win_team(string ten,vector<string> win){
     int size=win.size();
     int so_win=0;
     for(int i=0;i<size;i++){
          if(ten==win.at(i)){
               int nam=i+1903;
               if(nam==1904 ||nam==1994)continue;
               cout<<ten<<" win nam: "<<nam<<endl;
               so_win++;
          }
     }cout<<"Tong so  la win la: "<<so_win<<endl;
}

int main(){ 
//     string team[]={0},win[]={0};
     vector <string> team,win;
     string ten1,ten2;
     fstream file_team("Team.txt",ios::in);
     fstream file_win("WorldSriesWinners.txt",ios::in);
     if(!file_team ||!file_win){cout<<"File khong ton tai";return 1;}
     while(getline(file_team,ten1)){
          team.push_back(ten1);
     }
     while(getline(file_win,ten2)){ 
          win.push_back(ten2);
     }
     string ten=nhap(team); 
     win_team(ten,win); 
     return 0;
}