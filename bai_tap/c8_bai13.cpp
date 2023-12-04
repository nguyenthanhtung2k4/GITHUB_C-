#include <iostream> 
using namespace std;
int* nhap(int n){
     int* p=new int[n];
     for(int i=0;i<n;i++){
          do{
               cout<<"So Fim cua sinh vien: "<<i+1<<" => ";
               cin>>*(p+i);
          }while(*(p+i)<0);
     }
     return p;
}
int trung_binh(int* p,int n){
     int tong=0;
     for(int i=0;i<n;i++){
          tong+=*(p+i);
     }
     return tong/2;
}
int trung_vi(int* p,int n){
     int so=n%2;
     if(so==0){
          return *(p+(n/2)-1)+*(p+(n/2));
     }else{
          return *(p+n/2);
     }
}
int main(){
     int so=0;
     system("cls");
     do{
          cout<<"\n\tSo luong sinh vien la: ";cin>>so;
     }while(so<0);
     int*p =nhap(so);
     cout<<"\n\nTrung binh xem fim cua 1 sinh vien la "<<trung_binh(p,so)<<endl;
     cout<<"Trung vi cua Fim la "<<trung_vi(p,so)<<endl;
     return 0;
}