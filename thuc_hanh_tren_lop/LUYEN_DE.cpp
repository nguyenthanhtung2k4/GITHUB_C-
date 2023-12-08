//////////////////////////////// ĐỀ 1
// #include <iostream> 
// #include <string>
// using namespace std;
// // int main(){
     // cau 1
     // int gio,phut,giay;
     // cin>>gio>>phut>>giay;
     // if(gio<1){
     //      cout<<phut<<":"<<giay<<endl;
     // }else{
     //      cout<<gio<<":"<<phut<<":"<<giay<<endl;
     // }
     // cau2
     // int calo=180;
     // //p=3 calo
     // for(int i=2;i<=14;i+=2){
     //      cout<<3*i<<endl;
     // }
     // }
     // cau3
// struct sinh_vien{
//           string ten;
//           double diem_tb;
//           /* data */
// };


// void nhap_1ten(sinh_vien &nhap){
//      cout<<"nhap ten: ";cin>>nhap.ten;
//      cout<<"nhap diem trung binh: ";cin>>nhap.diem_tb;
// }
// void  nhap(sinh_vien mang_sv[],int n){
//      for(int i=0;i<n;i++){
//           nhap_1ten(mang_sv[i]);
//      }
// }
// void xuat_1(sinh_vien &xuat){
//      cout<<"ten: "<<xuat.ten<<endl;
//      cout<<"diem trung binh: "<<xuat.diem_tb;
// }
// void xuat(sinh_vien mang_sv[] ,int n){
//      for(int i=0;i<n;i++){
//           if(mang_sv[i].diem_tb>5){
//                cout<<mang_sv[i].ten<<endl;
//                cout<<mang_sv[i].diem_tb<<endl;
//           }
//      }
// }
// int main(){
//      int n;
//      cout<<"danh sach sinh vien: ";
//      cin>>n;
//      sinh_vien mang_sv[n];
//      nhap(mang_sv,n);
//      xuat(mang_sv,n);
//      return 0;
// }



// //  cau4
// #include <iostream> 
// using namespace std;
// string* mang_ten(int n){
//      string* p=new string[n];
//      return p;
// }
// int* mangdiem(int n){
//      int* p=new int[n];
//      return p;
// }
// void nhap(int * p_diem,string* p_ten,int n){
//      for(int i=0;i<n;i++){
//           cout<<"ten";cin>>*(p_ten+i);
//           cout<<"diem";cin>>*(p_diem+i);
//      }
// }
// void xuat(int * p_diem,string* p_ten,int n){
//      for(int i=0;i<n;i++){
//           if(*(p_diem+i)>5){
//                cout<<*(p_ten+i)<<endl;
//                cout<<*(p_diem+i)<<endl;
//           }
//      }
// }

// int main(){
//      int n;
//      cout<<"so luong sv: ";cin>>n;
//      string* p_ten=mang_ten(n);
//      int* p_diem=mangdiem(n);
//      nhap(p_diem,p_ten,n);
//      cout<<"diem tren 5"<,endl;
//      xuat(p_diem,p_ten,n);
//      return 0;
// }

//   ///////////////////////////////////ĐỀ 2
#include <iostream> 
using namespace std; 
int main(){
     int a;
     int min,max;
     for(int i=0;i<3;i++){
          cin>>a;
          
          min=a;
          max=min;
          if(a<min){
               min=a;

          }else if(a>max){
               max=a;
          }
     }
     cout<<min<<endl;
     cout<<max; 
}