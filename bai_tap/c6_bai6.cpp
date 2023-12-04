
// cach 1
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int thang7(char thoi_tiet[][30]){
     
}
int main(){
     //// mua ,  may , nang
     /// r, c ,s
     int r=0,c=0,s=0 ; 
     char thoi_tiet[3][30];
     fstream file("RainOrShine.txt",ios::in);
     if(!file){
        cout<<"File khong ton tai"<<endl;
        return -1;
    }
    for(int i=0 ; i<3 ; ++i ){
          for(int j=0; j<30 ; j++){
               file>>thoi_tiet[i][j];
               if(thoi_tiet[i][j]=='R'){r++;}
               if(thoi_tiet[i][j]=='C'){c++;}
               if(thoi_tiet[i][j]=='S'){s++;}
          }
     }
     ///// thang 6
     int r6=0,c6=0,s6=0;
     for(int i=0;i<=0;i++){
          
          for(int j=0;j<30;j++){
               if(thoi_tiet[i][j]=='R'){r6++;}
               if(thoi_tiet[i][j]=='C'){c6++;}
               if(thoi_tiet[i][j]=='S'){s6++;}
          }
     }
     ////// thang7
     int r7=0,c7=0,s7=0;
     for(int i=0;i<=0;i++){
          
          for(int j=0;j<30;j++){
               if(thoi_tiet[i][j]=='R'){r7++;}
               if(thoi_tiet[i][j]=='C'){c7++;}
               if(thoi_tiet[i][j]=='S'){s7++;}
          }
     }
     //// thang 8
     int r8=0,c8=0,s8=0;
     for(int i=0;i<=0;i++){
          
          for(int j=0;j<30;j++){
               if(thoi_tiet[i][j]=='R'){r8++;}
               if(thoi_tiet[i][j]=='C'){c8++;}
               if(thoi_tiet[i][j]=='S'){s8++;}
          }
     }
     /// min max
     int mua6=r6,mua7=r7,mua8=r8,flag=0;
     int max=mua6;
     if(max<mua6){mua6=max;flag=1;}
     if(max<mua7){mua7=max;flag=2;}
     if(max<mua8){mua8=max;flag=3;}

     ///// tong mua cua 3 thang
     cout<<"Tong 3 thang Mua-May-Nang"<<endl;
     cout<<"Mua: "<<r<<endl;
     cout<<"May: "<<c<<endl;
     cout<<"Nang: "<<s<<endl;
     cout<<"=================================\n";
     cout<<"Thang6: Mua-May-Nang"<<endl;
     cout<<"Mua: "<<r6<<endl;
     cout<<"May: "<<c6<<endl;
     cout<<"Nang: "<<s6<<endl;
     cout<<"\nThang7: Mua-May-Nang"<<endl;
     cout<<"Mua: "<<r7<<endl;
     cout<<"May: "<<c7<<endl;
     cout<<"Nang: "<<s7<<endl;
     cout<<"\nThang8: Mua-May-Nang"<<endl;
     cout<<"Mua: "<<r8<<endl;
     cout<<"May: "<<c8<<endl;
     cout<<"Nang: "<<s8<<endl;
     /// max  mua  nhat
     if(max==r6){cout<<"\n===============================\nThang mua nhieu nhat la thang 6";}
     else if(max==r7){cout<<"Thang mua nhieu nhat la thang 7";}
     else if(max==r8){cout<<"Thang mua nhieu nhat la thang 8";}
     return 0;
}


/*
#include <iostream>
#include <fstream>
using namespace std;

// Hàm đếm số ngày mưa trong một tháng
int demNgayMua(char thoi_tiet[], int soNgay) {
    int muaCount = 0;
    for (int i = 0; i < soNgay; i++) {
        if (thoi_tiet[i] == 'R') {
            muaCount++;
        }
    }
    return muaCount;
}

// Hàm đếm số ngày mây trong một tháng
int demNgayMay(char thoi_tiet[], int soNgay) {
    int mayCount = 0;
    for (int i = 0; i < soNgay; i++) {
        if (thoi_tiet[i] == 'C') {
            mayCount++;
        }
    }
    return mayCount;
}

// Hàm đếm số ngày nắng trong một tháng
int demNgayNang(char thoi_tiet[], int soNgay) {
    int nangCount = 0;
    for (int i = 0; i < soNgay; i++) {
        if (thoi_tiet[i] == 'S') {
            nangCount++;
        }
    }
    return nangCount;
}

int main() {
    char thoi_tiet[3][30];  // Sử dụng mảng ký tự

    fstream file("RainOrShine.txt", ios::in);

    if (!file) {
        cout << "File khong ton tai" << endl;
        return -1;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 30; j++) {
            file >> thoi_tiet[i][j];
        }
    }

    // Đếm số ngày mưa, mây và nắng cho từng tháng
    int muaThang6 = demNgayMua(thoi_tiet[0], 30);
    int mayThang6 = demNgayMay(thoi_tiet[0], 30);
    int nangThang6 = demNgayNang(thoi_tiet[0], 30);

    int muaThang7 = demNgayMua(thoi_tiet[1], 30);
    int mayThang7 = demNgayMay(thoi_tiet[1], 30);
    int nangThang7 = demNgayNang(thoi_tiet[1], 30);

    int muaThang8 = demNgayMua(thoi_tiet[2], 30);
    int mayThang8 = demNgayMay(thoi_tiet[2], 30);
    int nangThang8 = demNgayNang(thoi_tiet[2], 30);

    cout << "Thang 6:\n";
    cout << "Mua: " << muaThang6 << endl;
    cout << "May: " << mayThang6 << endl;
    cout << "Nang: " << nangThang6 << endl;

    cout << "Thang 7:\n";
    cout << "Mua: " << muaThang7 << endl;
    cout << "May: " << mayThang7 << endl;
    cout << "Nang: " << nangThang7 << endl;

    cout << "Thang 8:\n";
    cout << "Mua: " << muaThang8 << endl;
    cout << "May: " << mayThang8 << endl;
    cout << "Nang: " << nangThang8 << endl;

    file.close();
    return 0;
}
*/