// #include <iostream>

// int* capPhatMang(int soLuongPhanTu) {
//     // Cấp phát động bộ nhớ cho mảng
//     int* mang = new int[soLuongPhanTu];

//     // Trả về con trỏ đến mảng
//     return mang;
// }

// int main() {
//     int soLuong = 5;

//     // Gọi hàm để cấp phát mảng
//     int* mangSoNguyen = capPhatMang(soLuong);

//     // Sử dụng mảng như bình thường
//     for (int i = 0; i < soLuong; ++i) {
//         mangSoNguyen[i] = i * 2;
//     }

//     // In các phần tử của mảng
//     std::cout << "Cac phan tu cua mang: ";
//     for (int i = 0; i < soLuong; ++i) {
//         std::cout << mangSoNguyen[i] << " ";
//     }

//     // Giải phóng bộ nhớ sau khi sử dụng mảng
//     delete[] mangSoNguyen;

//     return 0;
// }


#include <iostream>
using namespace std;
int* cap(int so){
    int* arr=new int[so];
    return arr;
}
int main(){
    int so=5;
    int* cap_so=cap(so);
    for(int i=0;i<so;i++){
        cap_so[i]=i*2;
    }
    for(int i=0;i<so;i++){
        cout<<"so: "<<cap_so[i]<<endl;
    }
    delete[] cap_so;
    return 0;
}