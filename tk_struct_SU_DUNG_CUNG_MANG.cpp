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