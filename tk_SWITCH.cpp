#include <iostream> 

/// THAM KHAO VON LAP CUA C++ VA SO SANH VS PYTHON

using namespace std;
int main(){
//      10. Số ngày của 1 tháng (Bắt buộc)
// Viết chương trình yêu cầu người dùng nhập tháng và năm, cho biết tháng đó có bao 
// nhiêu ngày. Sử dụng tiêu chí sau để xác định năm nhuận: 
// Trường Đại học Đại Nam Khoa Công nghệ thông tin
// Trang | 3
// - Xác định xem năm có chia hết cho 100 hay không. Nếu đó là một năm nhuận nếu 
// và chỉ nếu năm đó chia hết cho 400. Ví dụ, 2000 là năm nhuận nhưng 2100 không 
// phải năm nhuận.
// - Nếu năm không chia hết cho 100 thì đó là năm nhuận nếu và chỉ nếu năm đó chia 
// hết 4. Ví dụ, năm 2008 là năm nhuận nhưng năm 2009 không phải năm nhuận.
// Dưới đây và ví dụ chương trình trình chạy: 
// Nhập vào 1 tháng (1-12): 2 [Enter]
// Nhập vào 1 năm: 2008 [Enter]
// Số ngày: 29

     int thang, nam;
     cout<<"Nhap thang(1-12): ";cin>>thang;
     cout<<"Nhap Nam: ";cin>>nam;
     switch (thang)
     {
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
          cout<<"31 Ngay"<<endl;
          break;
     case 2:
          if ( nam % 4==0|| nam % 100 !=0){
               cout<<"29 Ngay"<<endl;
               break;
          }
          else{
               cout<<"28 Ngay"<<endl;
               break;
          }
     case 4:
     case 6:
     case 9:
     case 11:
          cout<<"30 Ngay"<<endl;
          break;
     
     default:
          cout<<"Thang khong hop le"<<endl;
          break;
     }
}