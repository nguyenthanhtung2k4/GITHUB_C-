// // 4 viết hàm tính uoc so chung lon nhat
//  SỬ DỤNG THUẬT TOÁN EUCLID 
// https://vi.wikipedia.org/wiki/Gi%E1%BA%A3i_thu%E1%BA%ADt_Euclid
#include<iostream>
using namespace std ;
int uocchung(int a,int b){
     if(b==0){
          return a;
     }
     return uocchung(b,a%b);
}
int main(){
     cout<<uocchung(4,6);
}