//// muốn sử dụng ước chung lơns nhất ta  dùng thư viên algorithm và __gcd()
#include <iostream> 
#include <algorithm> 
using namespace std;
int main(){
     /*Bài toán : yêu cầu nhập  dài, rộng hcn  và sau đó cắt hình đó thành các hình vuông  
     bằng nhau 
     không được để thừa  hình nào*
     output: chieu dai cua 1 hinh vuong*/
     int a,b;//a là  chiều dài , b chiều rộng
     
     do{//dk dai>rong
          cin>>a>>b;    
     }while(a>b&&a<0||b<0);
     int dai_vuong=__gcd(a,b);
     cout<<"dai vuong la: "<<dai_vuong;
     //  ben tren la cach dung thu vien  ngoai ra ta cung co the dung thuat toan
     //  cach2:
     while(b!=0){
          int t=a%b;
          cout<<t;
          a=b;
          b=t;
     }cout<<"\ndai hinh chu vuong la: "<<a;

     return 0;

}