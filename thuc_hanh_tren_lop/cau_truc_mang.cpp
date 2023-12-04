////////////////////////////////// CẤU TRÚC MẢNG 1 CHIỀU
// #include <iostream> 
// using namespace std;
// int main() {
//      ///1 cách khai báo mảng  
//      int a[4];
//      //2 cách khai báo mảng và gán giá trị cho từng phần từ  bàn phím cho từng phần 
//      for(int i=0;i<5;i++){
//           cout<<"Nhap vao mang thu "<<i+1<<": ";
//           cin>>a[i];
//      }
//      ////hàm for dưới này dùng để xuất hết mảng đã lưu này ra màn hình
//      for(int i=0;i<5;i++){
//      cout<<"\n\tmang cua bn la: "<<a[i];
//      }

// ///// timg mang lon nhat 
//           // KI THUAT LINH CANH;
//      int max,min;
//      for(int j=0;j<5;j++){
//           if (max > a[j]){
//                a[j]=max;
//      }
//      }cout<<"max cua bn la: "<<max<<endl;
// //// KI THUA CO HIEU 

//      int x=8,flag=0;
//      for(int i=0;i<5;i++){
//           if(a[i]==x){
//                flag=1;
//                break;
//           }
//      }
//      if(flag==1){
//           cout<<"tim thay";
//      }else{
//           cout<<"khong tim thay";
//      }
// /// TING TONG CUA CAC SO LE THOA MAN DIEU KIEN
//      int tong=0; 
//      for(int i=0;i<5;i++){
//           if(a[i]%2!=0){
//                tong +=a[i];
//           }
//      }cout<<"TONG SO LE cua ban la: "<<tong;
//      return 0;
// //// TINH TONG CAC SO CHAN THOA MAN DIEU KIEN
//      int TONG=0; 
//      for(int i=0;i<5;i++){
//           if(a[i]%2==0){
//                TONG +=a[i];
//           }
//      }cout<<"TONG SO CHAN cua ban la: "<<TONG;
//      return 0;
// }

////////////////////////////////////////////// CẤU TRÚC MẢNG 2 CHIỀU

#include <iostream> 
using namespace std ;
int main(){ 
     // khai báo mảng 2 chiều 
     int a[3][4];
     // gán giá trị cho các phần tử của mảng
     for(int i = 0; i < 3; ++i) {
          for(int j = 0; j < 4; ++j) {
               cout<<"Nhap dong"<<"["<<i<<"]Cot["<<j<<"]\n>> ";
               cin>>a[i][j];
          }
     }
     // xuat du lieu ra man hinh tu mang 2 chieu 
     for(int i = 0; i <3; ++i) {
          for(int j = 0; j <4; ++j) {
               cout<<a[i][j]<<" ";
          }cout<<endl;
     }
     // xuat du lieu  ra man hinh tu m
     return 0;
}