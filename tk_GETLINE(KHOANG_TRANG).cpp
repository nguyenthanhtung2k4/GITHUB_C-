#include <iostream>
#include <string>
using namespace std ;
int main( ){
     /// sd duoc getline(cin,string) 
     // thi phai #include <string> co  ham cin.ignore()  truoc  moi duoc
     string ten;
     cin.ignore();
     cout<<"ten bn: ";
     getline(cin,ten);
     return 0;
}