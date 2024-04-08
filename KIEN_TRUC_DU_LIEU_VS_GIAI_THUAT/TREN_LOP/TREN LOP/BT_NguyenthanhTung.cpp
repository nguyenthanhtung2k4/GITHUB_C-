// BAI 1
// – Viết hàm nhập 1 mảng số nguyên với n phần tử
// – Viết hàm in ra 1 mảng số nguyên với n phần tử
// – Viết hàm tìm phần tử x trong mảng số nguyên với n
// phần tử
// – Viết hàm thay thế giá trị ở vị trí y bằng x
#include<iostream>
using namespace std;
void nhap(int arr[],int n ){
     for(int i=0;i<n;i++){
          cout<<"Nhap mang "<<i+1<<endl;
          cin>>arr[i];
     }
}
void xuat(int arr[],int n ){
     for(int i=0;i<n;i++){
          cout<<arr[i];
     }
}
int kq(int arr[],int n,int tim ){
     for(int i=0;i<n;i++){
          if(tim==arr[i]){
               return i;
          }
     }
     return -1;
}
void thaythe(int arr[],int n,int giatri,int vitri){
     if(vitri<=n and vitri >=0){
          for (int i = 0; i < n; i++)
          {
               arr[vitri]=giatri;
               /* code */
          }
     }
     else{
               cout<<"vitri "<<vitri<<" khong hop le";
          }
}
int main(){
     int n ;
     cout<<"Nhap phan tu: ";cin>>n;
     int arr[n];
     nhap(arr,n);
     cout<<"Xuat arr \n";
     xuat(arr,n);
     cout<<"\n\nTim ptu trong mang: "<<endl;
     int tim;
     cout<<"Tim: ";
     cin>>tim;
     cout<<kq(arr,n,tim);
     int giatri,vitri;
     cout<<"Nhap gia tri: ";cin>>giatri;
     cout<<"vi tri thay the: ";cin>>vitri;
     thaythe(arr,n,giatri,vitri);
     xuat(arr,n);
}

// BAI 2

#include<iostream>
using namespace std;

struct Product
{
    string description; 
    int partNum; 
    double cost; 
};
void khoitao(Product products[]){
     for (int i = 0; i < 100; i++)
    {
        products[i].description = "";
        products[i].partNum = 0;
        products[i].cost = 0.0;
    }   
}
void dien(Product products[]){
    products[0].description = "Claw hammer";
    products[0].partNum = 547;
    products[0].cost = 8.29;
}
void xuat(Product products[]){
    for (int i = 0; i < 100; i++)
    {
          cout<<products[i].description << "\t";
          cout<<products[i].partNum << "\t";
          cout<<products[i].cost << endl;
    }
}
int main()
{
    Product products[100];
    khoitao(products); 
    dien(products);
    cout<<"Products\tNumber\tCost"<<endl<<endl;
    xuat(products);
    return 0;
}