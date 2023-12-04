//// sử khác biệt khi dùng con trỏ và không dùng con trỏ;
    /// KHI KHONG DÙNG CON TRỎ
#include <iostream> 
using namespace std; 
int something(int&,int&);
int main(){
     int x =10,y=20;
     something(x,y);
     cout<<x<<y;
     return 0;
}
int something(int &x, int &y)
{
     int temp = x;
     x = y * 10;
     y = temp * 10;
     return x + y;
}
    /// KHI  DÙNG CON TRỎ 
#include <iostream> 
using namespace std;
void something(int* x,int* y){
     int temp=*x;
     *x=*y*10;
     *y=temp*10;
}
int main(){
     int x=10 , y=20;
     cout<<"khi chua bien doi! "<<endl;
     cout<<"x="<<x<<"\ny="<<y<<endl;
     something(&x,&y);
     cout<<"khi bien doi!"<<endl;
     cout<<"x="<<x<<"\ny="<<y<<endl;
}


/// BÊN DƯỚI LÀ CÁC   CÁCH SỬ DỤNG  CON TRỎ 


//Con trỏ là một khái niệm quan trọng trong ngôn ngữ lập trình C++. Dưới đây là một số khái niệm và thao tác cơ bản liên quan đến con trỏ:

/// 1. Khai Báo Con Trỏ:

int* ptr; // Khai báo con trỏ kiểu int
double* ptrDouble; // Khai báo con trỏ kiểu double

/// 2. Lấy Địa Chỉ:

int x = 10;
int* ptr = &x; // Gán địa chỉ của x cho con trỏ

/// 3. Sử Dụng Con Trỏ:

int x = 10;
int* ptr = &x;
cout << "Gia tri cua x: " << *ptr << endl; // In giá trị tại địa chỉ mà con trỏ đang trỏ đến

/// 4. Con Trỏ và Mảng:

int arr[] = {1, 2, 3, 4, 5};
int* ptrArr = arr; // Con trỏ trỏ tới địa chỉ đầu tiên của mảng

/// 5. Con Trỏ và Chuỗi:

const char* str = "Hello"; // Con trỏ char trỏ tới chuỗi

/// 6. Cấp Phát Động Bộ Nhớ:

int* dynamicPtr = new int; // Cấp phát động bộ nhớ cho một biến nguyên

/// 7. Giải Phóng Bộ Nhớ:

delete dynamicPtr; // Giải phóng bộ nhớ khi không cần thiết

/// 8. Truyền Con Trỏ vào Hàm:

void myFunction(int* ptr) {
    // Thực hiện công việc với con trỏ
}

int main() {
    int x = 10;
    myFunction(&x); // Truyền địa chỉ của biến vào hàm
}

/// 9. Con Trỏ và Hàm:

int* createInt() {
    int* ptr = new int;
    return ptr;
}

void destroyInt(int* ptr) {
    delete ptr;
}

int main() {
    int* dynamicInt = createInt();
    // Sử dụng dynamicInt
    destroyInt(dynamicInt); // Giải phóng bộ nhớ
}

/// 10. Con Trỏ Hàng Đợi (Smart Pointers):

#include <memory>

std::unique_ptr<int> smartPtr = std::make_unique<int>(42);

//Đây chỉ là một số khái niệm cơ bản về con trỏ trong C++. Có thêm nhiều chủ đề phức tạp và tiên tiến khác như con trỏ hàm, con trỏ đối tượng, quản lý bộ nhớ thông minh (smart pointers), và nhiều khái niệm khác.