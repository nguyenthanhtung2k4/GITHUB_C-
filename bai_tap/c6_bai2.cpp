#include <iostream> 
using namespace std ;
#include <iomanip>
void nhap(double a[]){
     for(int i=0;i<12;i++){
          cout<<"Luong mua["<<i+1<<"] : ";cin>>a[i];
     }
}
double tong(double a[]){
     int tong=0; 
     for(int i=0;i<12;i++){
          tong+=a[i];
     }
     return tong;
}
int max(double a[]){
     double max=a[0];
     for(int i=0;i<12;i++){
          if(max<a[i]){max=a[i];}
     }
     return max;
}
int min(double a[]){
     double min=a[0]; 
     for (int i = 0; i <12; i++)
     {
          if(min>a[i]){min=a[i];}
     }
     return min;
}
int main(){
     double a[12];
     nhap(a);
     cout<<"Tong luong mua la: "<<tong(a)<<"\nLuong mua trung binh trong 12 thang: "<<fixed<<setprecision(2)<<tong(a)/12; 
     cout<<"\nMax="<<max(a)<<endl;
     cout<<"Min"<<min(a)<<endl;
     return 0;
}