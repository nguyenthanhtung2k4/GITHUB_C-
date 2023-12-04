#include <iostream> 
using namespace std; 
int tong(int x,int y){
     return x+y;
}
int main(){ 
     /// vieet chuing trinh nhap so nguyen in ra man hinh tong 2 so  nguyen
     // vua nhap  
     int x,y; 
     cout<<"Nhap so1: ";cin>>x; 
     cout<<"Nhap so2: ";cin>>y; 
     cout<<"Ket qua la : "<<tong(x,y);
     return 0;
}