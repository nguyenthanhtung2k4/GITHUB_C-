//  VD su dung von tro
                //  viet ham nhap mang DinhVien gom  n phan tu
                // Viet ham in mang SinhVien gom  n phan tu
                #include<iostream>
                using namespace std;
                struct SinhVien{
                    string hoten;
                    int msv;
                    int namsinh;
                };
                void Nhap(SinhVien *a,int n){
                    for(int i=0;i<n;i++){
                        cout<<"Nhap thong tin Sinh Vien: "<<i+1<<endl;
                        cout<<"Ma Sv: ";
                        cin>>a[i].msv;
                        cin.ignore();
                        cout<<"Ho va Ten:";
                        getline(cin,a[i].hoten);
                        cout<<"Nhap nam sinh: ";
                        cin>>a[i].namsinh;
                    }
                }
                void Xuat(SinhVien *a,int n){
                    cout<<"\nMa sv\tHo ten\t\tNam Sinh"<<endl;
                    for(int i =0;i<n;i++){
                        // cout<<"\nThong tin cua Sinh Vien: "<<i+1<<endl;
                        cout<<a[i].msv<<"\t"<<a[i].hoten<<"\t\t"<<a[i].namsinh<<endl;
                    }
                }
                int main(){
                    int n;
                    cout<<"Nhap so luong sinh vien \n ";cin>>n;
                    SinhVien *a=new SinhVien [n];
                    Nhap(a,n);
                    Xuat(a,n);
                    return 0;
                }
//  VI DU 2
//////////////////// Co hai cach de du dung in ra con tro
////////////////////  XEM CACH1 & CACH 2
                #include<iostream>
                using namespace std;
                struct SinhVien{
                    string hoten;
                    int msv;
                    int namsinh;
                };
                int main(){
                    SinhVien Sv;
                    SinhVien *ptrSv= &Sv;
                    cout<<"Nhap thong tin sv: "<<endl;
                    cin.ignore();
                    cout<<"hoten: ";
                    getline(cin,Sv.hoten);
                    cout<<"msv: ";
                    cin>>Sv.msv;
                    cout<<"Nam Sinh: ";
                    cin>>Sv.namsinh;
                    //  hai  cach in ra bang con tro  khi su dung struct voi  con  tro
                    // CACH1
                    cout<<(*ptrSv).hoten<<(*ptrSv).msv<<(*ptrSv).namsinh<<endl;   
                    //  CACH2
                    cout<<ptrSv->hoten<<ptrSv->msv<<ptrSv->namsinh<<endl;   
                }
// Cấp  phát bộ nhớ
#include<iostream>
using namespace std;
//  dinh nghia 1 kieu  du lieu  ten la SinVien gom 3 truong:  msv ,hoten,namsinhl ;
struct SinhVien{
     string hoten;
     int msv;
     int namsinh;
};
int main(){
     SinhVien Ds[100]; // khai bao 1 mang ten  Ds 100  phan tu gom kieu  du lieu  SinVien
     SinhVien *Ds1;// khia bao 1 con tro  Ds sinhVien
     //cap phat 50 o nho (tao mang 50 phan tu ) kieu SinhVien 
     Ds1= new SinhVien[50];
     // su dung Ds1  nhu mot mang
     Ds1[0].msv=123;
     Ds1[0].hoten="toi la TUNG";
     Ds1[0].namsinh=2005;
     cout<<Ds1[0].msv<<"\t"<<Ds1[0].hoten<<"\t"<<Ds[0].namsinh<<"\t"<<endl;
     //  giai phong dung luong o  nho
     delete[] Ds1;
     //  tiep tuc thuc hien cac cong viec khac.
     return 0;
}

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


/////////////////////////////// BÊN DƯỚI LÀ CÁC   CÁCH SỬ DỤNG  CON TRỎ 


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