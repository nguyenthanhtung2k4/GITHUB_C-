#include <iostream> 
using namespace std;
int main(){
//// CÁCH KIỂM TRA  HAM CÓ RỗNG HAY KHONG 
     /// DÙNG empty
     string so; 
     so.empty();
     // ==>  nếu như rốngx báo 0 không rỗng báo 1;

//// CÁCH CHUYỂN  TỪ CHỖI SANG SÔ;
     //// STRING SANG SỐ INT;
     string a1="122";
     int b1= stoi(a1 );
     cout<<"Chuoi:  "<<b1;
     //// STRING SANG SỐ DOUBLE;
     string a2="122.33";
     double b2= stod(a2 );
     cout<<"\nChuoi:  "<<b2;
     //// STRING SANG SỐ FLOAT ;
     string a3="122.33";
     float b3= stof(a3 );
     cout<<"\nChuoi:  "<<b3;
}