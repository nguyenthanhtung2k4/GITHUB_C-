#include <iostream>
#include <string>
#include <fstream> 
#include <iomanip>
using  namespace std; 
void data(fstream &dap_an, fstream &ket_qua,char mang_thay[20],char mang_hs[20]){
     for(int i=0;i<20;i++){
          dap_an>>mang_thay[i];
          ket_qua>>mang_hs[i];
     }
}
int check_qk(char mang_thay[20],char mang_hs[20]){
     int sai=0;
     for(int i=0;i<20;i++){
          if(mang_hs[i]!=mang_thay[i]){ 
               // cau sai  cua hs
               cout<<"\nCau "<<i+1<<">>Cau cua ban: "<<mang_hs[i]<<" Dap an: "<<mang_thay[i];
               sai++;
          }
     }
     return sai;
}
int main(){ 
     int dapan,traloi;
     char mang_thay[20],mang_hs[20];
     fstream dap_an("CorrectAnswers.txt",ios::in); 
     fstream tra_loi("StudentAnswers.txt",ios::in);
     if(!dap_an &&!tra_loi){ 
          cout<<"File khong ton tai!";
          return 1;
     }
     data(dap_an,tra_loi,mang_thay,mang_hs);
     int sai=check_qk(mang_thay,mang_hs); 
     
     double ty_le=(20-sai)/20.0;
     ///cout<<"\nty le"<<ty_le;
     cout<<"\nTong cau sai la: "<<sai;
     if(ty_le>0.7){
          cout<<"\nTy le cau tra loi dung cua ban la: "<<ty_le*100<<endl;
          cout<<"Ban da vuot qua ki thi"<<endl;
     }
     else{cout<<"\nBan da truot ki thi";}
     
     return 0;

}


// #include <iostream>
// #include <string>
// #include <fstream>
// #include <iomanip>
// using namespace std;

// // Hàm đọc dữ liệu từ file vào mảng
// void data(fstream& dap_an, fstream& ket_qua, char mang_thay[20], char mang_hs[20]) {
//   for (int i = 0; i < 20; i++) { // Sửa lại điều kiện của vòng lặp
//     dap_an >> mang_thay[i];
//     ket_qua >> mang_hs[i];
//   }
// }

// // Hàm kiểm tra câu trả lời của học sinh và in ra câu sai
// int check_qk(char mang_thay[20], char mang_hs[20]) {
//   int sai = 0;
//   for (int i = 0; i < 20; i++) {
//     if (mang_hs[i] != mang_thay[i]) {
//       // Câu sai của học sinh
//       cout << "\nCau " << i + 1 << ">>Cau cua ban: " << mang_hs[i] << " Dap an: " << mang_thay[i];
//       sai++;
//     }
//   }
//   return sai;
// }

// int main() {
//   // Khai báo các biến
//   char mang_thay[20], mang_hs[20]; // Mảng chứa đáp án của giáo viên và học sinh
//   int sai; // Biến đếm số câu sai
//   double ty_le; // Biến tính tỷ lệ câu trả lời đúng

//   // Mở file đáp án và trả lời
//   fstream dap_an("CorrectAnswers.txt", ios::in);
//   fstream tra_loi("StudentAnswers.txt", ios::in);

//   // Kiểm tra file có tồn tại không
//   if (!dap_an || !tra_loi) {
//     cout << "File khong ton tai!";
//     return 1;
//   }

//   // Đọc dữ liệu từ file vào mảng
//   data(dap_an, tra_loi, mang_thay, mang_hs);

//   // Kiểm tra câu trả lời của học sinh và in ra câu sai
//   sai = check_qk(mang_thay, mang_hs);

//   // Tính tỷ lệ câu trả lời đúng
//   ty_le = (20 - sai) / 20.0; // Sửa lại cách tính tỷ lệ

//   // In ra kết quả
//   cout << "Tong cau sai la: " << sai << endl;
//   cout << "Ty le cau tra loi dung cua ban la: " << fixed << setprecision(2) << ty_le * 100 << "%" << endl; // Định dạng kết quả theo số thập phân
//   if (ty_le > 0.7) {
//     cout << "Ban da vuot qua ki thi" << endl;
//   } else {
//     cout << "Ban da truot ki thi" << endl;
//   }

//   // Đóng file
//   dap_an.close();
//   tra_loi.close();

//   return 0;
// }
