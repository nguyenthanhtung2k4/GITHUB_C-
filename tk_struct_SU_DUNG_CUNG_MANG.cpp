#include <iostream>
#include <cstring>
using namespace std;
void inthongtin( struct Books book );

struct Books
{
   char  tieude[50];
   char  tacgia[50];
   char  chude[100];
   int   book_id;
};
 
int main( )
{
   struct Books QuyenSach1;        // Khai bao QuyenSach1 la cua kieu Books
   struct Books QuyenSach2;        // Khai bao QuyenSach2 la cua kieu Books
 
   // chi tiet ve quyen sach thu nhat
   strcpy( QuyenSach1.tieude, "Ngon ngu Lap trinh C++");
   strcpy( QuyenSach1.tacgia, "Pham Van At"); 
   strcpy( QuyenSach1.chude, "Lap trinh");
   QuyenSach1.book_id = 1225;

   // chi tiet ve quyen sach thu hai
   strcpy( QuyenSach2.tieude, "Toi thay hoa vang tren co xanh");
   strcpy( QuyenSach2.tacgia, "Nguyen Nhat Anh");
   strcpy( QuyenSach2.chude, "Van hoc");
   QuyenSach2.book_id = 3214;
 
   // in thong tin ve QuyenSach1
   inthongtin( QuyenSach1 );

   // in thong tin ve QuyenSach2
   inthongtin( QuyenSach2 );

   return 0;
}
void inthongtin( struct Books book )
{
   cout << "Tieu de sach: " << book.tieude <<endl;
   cout << "Tac gia: " << book.tacgia <<endl;
   cout << "Chu de: " << book.chude <<endl;
   cout << "ID cua sach la: " << book.book_id <<endl;
   cout << "\n\n========================================\n\n" <<endl;
}


//   BAI TAP 2 LAM VE STRUCT
//1. KHỐI KHAI BÁO
#include<iostream>
#include<string>
using namespace std;
struct MATHANG
{
    string TenMatHang;
    int DonGia, SoLuongTon;
};
void Nhap1MatHang(MATHANG &m);
void NhapDS(MATHANG m[], int n);
void Xuat1MatHang(MATHANG &m);
void XuatDS(MATHANG m[], int n);
MATHANG TimMax(MATHANG m[], int n);
int Dem(MATHANG m[], int n);
//2. KHỐI HÀM MAIN
int main(){
    MATHANG arrayMatHang[100];
    int n;
    cout<<"- Nhap so luong mat hang: ";
    cin>>n;
    NhapDS(arrayMatHang, n);
    cout<<"-- DANH SACH CAC MAT HANG --\n";
    XuatDS(arrayMatHang, n);
    MATHANG max = TimMax(arrayMatHang, n);
    cout<<"-- MAT HANG CO SO LUONG TON LON NHAT LA --\n";
    Xuat1MatHang(max);
    cout<<"- So luong mat hang ton lon hon 1000 = "<<Dem(arrayMatHang, n);
    return 0;
}
//3. KHỐI ĐỊNH NGHĨA HÀM
void Nhap1MatHang(MATHANG &m){
    cout<<"- Nhap ten mat hang: ";
    cin.ignore();
    getline(cin, m.TenMatHang);
    cout<<"- Nhap don gia: ";
    cin>>m.DonGia;
    cout<<"- Nhap so luong ton: ";
    cin>>m.SoLuongTon;
}
void NhapDS(MATHANG m[], int n){
    for (int i = 0; i < n; i++){
        cout<<"- Nhap thong tin mat hang thu "<<i + 1<<" : \n";
        Nhap1MatHang(m[i]);
    }
}
void Xuat1MatHang(MATHANG &m){
    cout<<m.TenMatHang<<"\t"<<m.DonGia<<"\t"<<m.SoLuongTon<<endl;
}
void XuatDS(MATHANG m[], int n){
    for (int i = 0; i < n; i++){
        Xuat1MatHang(m[i]);
    }
}
MATHANG TimMax(MATHANG m[], int n){
    MATHANG max = MATHANG[0];
    for (int i = 0; i < n; i++){
        if(m[i].SoLuongTon > max.SoLuongTon)
            max = m[i];
    }
    return max;
}
int Dem(MATHANG m[], int n){
    int dem = 0;
    for (int i = 0; i < n; i++){
        if(m[i].SoLuongTon > 1000)
            dem++;
    }
    return dem;
}