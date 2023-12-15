#include <iostream>
//  DAO NGUOC SO BANG THUAT TOAN
int daoNguocSo(int num) {
    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    // Nhập số
    int num;
    std::cout << "Nhap so: ";
    std::cin >> num;

    // Đảo ngược số
    int reversedNum = daoNguocSo(num);

    // In số đã đảo ngược
    std::cout << "So dao nguoc: " << reversedNum << std::endl;

    return 0;
}





//  DAO NGUOC SO BANG THU VIEN






#include<iostream>
#include <algorithm> 
#include <string> 
using namespace std; 
int main(){
     int n;
     cin>> n;//  nhap so  muon dao nguoc;
     string so=to_string(n);/// chuyen dang int thanh  string
     reverse(so.begin(),so.end()); ///dau tien va dau cuoi cung trong mot mang string
     // reverse la thu vien algorth 
     int dao_nguoc=stoi(so);
     cout<<"So dao nguoc la : "<<dao_nguoc;//chuyen dang string thanh int
}