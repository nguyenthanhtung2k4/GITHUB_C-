#include <iostream> 
#include <cmath>///  ham nay  dung de tinh sqrt 
using namespace std ;
/// bool  co nhiem vu tra dau ra la : True | False 

bool isPrime(int n) {
    if (n <= 1) return false;
    /// tinh ve so nguyen to nen plhai dung for de lam  kiem tra can bac cua cac con so  ;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
     int so=29 ;
     cout<<sqrt(so);
     int so1=so%2;
     cout<<so;
     if(isPrime(so)){cout<<"true";}
     else{cout<<"false";}
     return 0;
}