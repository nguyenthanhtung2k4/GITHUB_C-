// CÁCH 1
//  kiểm tra  so uoc chung ta cũng có thể thực  hiênh  bằng cách sử dụng thư viên algorithm 
// ### sau khi cài thư viện algorithm tiếp đến 
// ### dùng câu lệnh __gcd(bội  , bội 2)
//  tu đó nó sẽ tự tìm cho chúng ta ước chung lơn nhất

#include <iostream>
#include <algorithm>
using namespace std;

int main() {`
    int a = 12;
    int b = 8;

    int gcd = __gcd(a, b);

    cout << "Ước số chung lớn nhất của a và b là: " << gcd << endl;

    return 0;
}
//  CÁCH 2 
//  TÌM BẰNG THUẬT TOÁN DÀI 
//  muốn tìm được ước chung lớn nhất ta dùng thằng % dể biết 2 thằng chia hết  cho chính nó và số đó là ước chung
#include <iostream> 
using namespace std; 
int main(){
     int a = 12;
     int b = 8;
     while(b!=0){
          int t=a%b;
          a=b; 
          b=t;
     }
     cout<<"Ước số chung lớn nhất"<<a;
     return 0;
}