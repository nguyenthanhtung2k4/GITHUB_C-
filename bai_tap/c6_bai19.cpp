#include <iostream> 
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std; 

bool rep(char nhap){
     if(nhap=='X'){
          cout<<"\nChuong tring da thoat "<<endl;
          return true;
     }
     return false;
}
void bot(string mang[12]){
     int so=rand()%11;
     cout<<mang[so]<<endl;
}

int main(){
     string mang[12];
     fstream file("8_ball_responses.txt",ios::in);
     string nhap,ten;
     char NHAP='X';
     int i = 0,so;
     srand(time(0));
     so=rand()%12;
     cout<<so<<endl;
     if(!file){cout<<"File khong ton tai!"<<endl;return 1;}
     while(getline(file,ten)){
          mang[i]=ten;
          i++;
     }
     cout<<"8_ball_responses.txt"<<endl<<endl;
     cout<<"X -> Thoat"<<endl;
     do{
          cout<<"Cau tra loi:";cin.ignore();getline(cin,nhap);
          nhap=NHAP;
          bot(mang);
     }while(!rep(NHAP));
     return 0;
}