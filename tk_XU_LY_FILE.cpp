///// CACH 1 
#include <iostream> 
#include <fstream> /// xu dung file la phai co  thu vien nay  
using namespace std; 
int main(){
     int nam, so;
     ifstream inputFile("People.txt");/// input la doc file /// ourput la ghi file
     if(!inputFile){
          cout<<"file khong ton tai";
     }
     else{
          while (inputFile>>nam>>so)/// cai nay  no ho tro doc tung dong mot
          {
               cout<<"\nNam: "<<nam;
               so /=1000;
               for (int i=1;i<=so;i++){
                    cout<<"*";
               }
          }
     }
     return 0;
}

/// ===>  cach nay thi  file se khong tu tao nhung de doc du lieu  toan bo thi  no se nhanh hon rat nhieu  





/// CACH 2 
#include <iostream>
#include <fstream>
#include <string>
using namespace std; 
int main(){
     int so;
     fstream file("People.txt",ios::in);////  ham nay dung de open file va  file khong ton tai se tu dong tao ra file
     ///// ios::in  la dung de doc file | ios::out dung de ghi file 
     file>>so; 
     for(int i=1900;i<=2000;i+=20){
          cout<< "Nam "<<i<<" ";
          while (file>>so)
          {
          for(int i=1;i<=so/1000;i++){ 
               cout<<"*";
          }cout<<endl;

     }
     }
     while(file>>so){

     }
}

//// ===>  cach nayt se rut ngan gon code hon va xu  ly  file cung nhanh hon 
////  no se tu dong tao  ra file neu  file chua ton tai.