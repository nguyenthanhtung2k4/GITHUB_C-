// Để ta có thể do kich thuoc trong mang ta có thể làm như  sau: 
#include <iostream> 
using namespace std; 
int main (){
     //  khi ta khai báo mảng mà ta khong biet mangr đó  có bao nhiêu phần tử 
     /// ta có thể dùng sizeof để đo  các phần tử đó là bao nhiêu.
     int mang[]={1,2,3,46,7,7,8,6,4,8,4,3};
     cout<<"Kích thước mang = "<<sizeof(mang)/sizeof(mang[0])<<endl;
     //  sizeof(mang) =>> là lấy mảng cuối cùng .
     // sizeof(mang[0]) =>> laf mảng đầu tiên 
     // lấy mảng cuối chia cho mảng đầu là  biết được các mảng đó có bao nhiêu phânf tử
     return 0;

     //// CÓ THỂ THAM KHẢO THÊM VỀ SIZE VÀ SIZEOF
     // TRONG MANG NÊN DÙNG SIZEOF 
     // TRONG VECTER NÊN DÙNG SIZE  
     
     //  vd:  ten_vector.size()    
}