///  tk cách dùng vecter 
//   dưới đây là sử dụng các lệnh trong vecter 
#include <iostream> 
/// khai báo thư viện  vecter 
#include<vector> 
using  namespace std; 
int main(){
/// Bước 1: Khai báo và khởi tạo vector
     vector<int> v1; // Khai báo một vector v1 có kiểu int, không có phần tử nào
     vector<string> v2 {"Hello", "World"}; // Khai báo một vector v2 có kiểu string, có hai phần tử là "Hello" và "World"
     vector<double> v3 (5, 3.14); // Khai báo một vector v3 có kiểu double, có năm phần tử, mỗi phần tử có giá trị là 3.14

/// Bước 2: Thêm và xóa phần tử vector
     ///  thêm phần tử vào cuối
     v1.push_back(10); // Thêm phần tử 10 vào cuối vector v1
     v2.push_back("C++"); // Thêm phần tử "C++" vào cuối vector v2
     v3.push_back(2.71); // Thêm phần tử 2.71 vào cuối vector v3
     /// thêm phần tử vào đầu  insert()
     v1.insert(v1.begin(), 10); // Thêm phần tử 10 vào đầu vector v1
     v2.insert(v2.begin(), "C++"); // Thêm phần tử "C++" vào đầu vector v2
     v3.insert(v3.begin(), 2.71); // Thêm phần tử 2.71 vào đầu vector v3
/// Bước 3: Bước 3: Truy cập phần tử trong vector
     int x = v1[0]; // Lấy giá trị của phần tử đầu tiên của vector v1, gán cho biến x
     string y = v2.at(1); // Lấy giá trị của phần tử thứ hai của vector v2, gán cho biến y
     double z = v3[2]; // Lấy giá trị của phần tử thứ ba của vector v3, gán cho biến z
/// Bước 4: Duyệt qua các phần tử trong vector
     // Sử dụng chỉ số
     for (int i = 0; i < v1.size(); i++) {
     cout << v1[i] << " "; // In ra giá trị của phần tử thứ i của vector v1
     }
     cout << endl;

     // Sử dụng iterator
     for (auto it = v2.begin(); it != v2.end(); it++) {
     cout << *it << " "; // In ra giá trị của phần tử mà iterator trỏ đến
     }
     cout << endl;

     // Sử dụng range-based for loop
     for (double val : v3) {
     cout << val << " "; // In ra giá trị của từng phần tử trong vector v3
     }
     cout << endl;
/// Bước 5: Lấy kích thước vector
     size_t n1 = v1.size(); // Lấy số lượng phần tử của vector v1, gán cho biến n1
     size_t n2 = v2.size(); // Lấy số lượng phần tử của vector v2, gán cho biến n2
     size_t n3 = v3.size(); // Lấy số lượng phần tử của vector v3, gán cho biến n3
  
     return 0;
}