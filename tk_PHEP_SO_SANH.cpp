
/*Ba màu cơ bản trong một chế độ màu nào đó là red, blue, và yellow. Khi trộn từng cặp 
2 màu ta sẽ có:
− red + blue → purple (màu tím)
− red + yellow → orange (màu cam)
− blue + yellow → green (màu xanh lá cây)
Viết chương trình yêu cầu nhập tên 2 màu cơ bản, in ra màu kết quả khi pha trộn chúng. 
Nếu người dùng nhập không đúng màu cơ bản thì thông báo lỗ
*/
///// THAM KHAO BING 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string color1, color2;
    cout << "Nhập tên màu cơ bản thứ nhất: ";
    cin >> color1;
    cout << "Nhập tên màu cơ bản thứ hai: ";
    cin >> color2;

    if (color1 == "red" && color2 == "blue" || color1 == "blue" && color2 == "red")
        cout << "purple (màu tím)" << endl;
    else if (color1 == "red" && color2 == "yellow" || color1 == "yellow" && color2 == "red")
        cout << "orange (màu cam)" << endl;
    else if (color1 == "blue" && color2 == "yellow" || color1 == "yellow" && color2 == "blue")
        cout << "green (màu xanh lá cây)" << endl;
    else
        cout << "Lỗi: Bạn đã nhập sai màu cơ bản." << endl;

    return 0;
}
/* GIAI THICH :
Toán tử || trong C++ là toán tử logic “hoặc”. Nó trả về giá trị true nếu một trong hai toán hạng là true. Nếu cả hai toán hạng đều là false, thì nó trả về giá trị false. Toán tử này được sử dụng rộng rãi trong các biểu thức điều kiện.

Hy vọng điều này giúp bạn!
*/






/// THAM KHAO CHATGPT
#include <iostream>
#include <string>
using namespace std;

int main() {
    string mau1, mau2;
    
    // Nhập tên hai màu cơ bản từ người dùng
    cout << "Nhap ten mau thu nhat: ";
    cin >> mau1;
    cout << "Nhap ten mau thu hai: ";
    cin >> mau2;
    
    // Chuyển tên màu thành chữ thường để so sánh dễ dàng hơn
    transform(mau1.begin(), mau1.end(), mau1.begin(), ::tolower);
    transform(mau2.begin(), mau2.end(), mau2.begin(), ::tolower);
    
    // Kiểm tra và in ra màu kết quả khi pha trộn
    if ((mau1 == "red" && mau2 == "blue") || (mau1 == "blue" && mau2 == "red")) {
        cout << "Mau ket qua: Purple (mau tim)" << endl;
    } else if ((mau1 == "red" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "red")) {
        cout << "Mau ket qua: Orange (mau cam)" << endl;
    } else if ((mau1 == "blue" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "blue")) {
        cout << "Mau ket qua: Green (mau xanh la cay)" << endl;
    } else {
        cout << "Loi! Xin vui long nhap 2 mau co ban." << endl;
    }

    return 0;
}


/* GIAI THICH :Trong chương trình này:

Chúng ta sử dụng hai biến mau1 và mau2 để lưu trữ tên hai màu cơ bản được nhập từ người dùng.
Hàm transform được sử dụng để chuyển tên màu thành chữ thường để so sánh không phân biệt chữ hoa và chữ thường.
Chương trình kiểm tra tên hai màu và in ra màu kết quả khi pha trộn. Nếu người dùng nhập sai tên màu cơ bản, chương trình thông báo lỗi.
*/
