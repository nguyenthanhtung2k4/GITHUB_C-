#include <iostream>
using namespace std;
//  tim kiem tuyen tinh (tuan tu)
//  tim phan tu x trong mang arr co n phan tu
//  tra ve -1 neu khong tim thay
//         -  chi so cua mang neu tim thay
int TimKiemTuyenTinh(int arr[], int n,int x){
     for(int i=0;i<n;i++){
          if(arr[i]==x){
               return i;
          }
     }
     return -1;
}
// Tim kiem nhi  phan
// tim kiem phan tu trong arr da sap  xep  co  n  phan tu;
//  tra ve: -2 neu khong tim thay
//          - chi so mang neu  tim thay;
int TimKiemNhiPhan(int arr[],int left , int  right ,int x){
     if(right>= left){
          int mid= left+(right-left)/2;
          if(arr[mid]==x){
               return mid;
          }else if(arr[mid]<x)//x> mid  tim ben phai
          {
               return (TimKiemNhiPhan(arr,mid+1,right,x));
          }else{
               return(TimKiemNhiPhan(arr,left,mid+1,x));
          }
     }
     return -1; //  khong tim thay truong hop  nao!
}
int main(){
     int arr[]={7,36,3,1,6,4,15,40};
     int arr1[]={1,3,4,6,7,15,36,40};
     int x;
     cout<<"Nhap x tim: ";cin>>x;
     // if(TimKiemTuyenTinh(arr,8,x)==-1){
     //      cout<<"Khong tim thay"<<endl;
     // }else{
     //      cout<<"Tim thay"<<x<<"\nChi so: ["<<TimKiemTuyenTinh(arr,8,x)<<"]"<<endl;
     // }
     if(TimKiemNhiPhan(arr1,0,7,x)==-1){
          cout<<"Khong tim thay"<<endl;
     }else{
          cout<<"Tim thay"<<x<<"\nChi so: ["<<TimKiemNhiPhan(arr1,0,7,x)<<"]"<<endl;
     }
     
     
     return 0;
}