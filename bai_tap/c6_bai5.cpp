#include <iostream>
using namespace std; 
void nhap(int an[][5]){
     for (int i = 0; i<3;i++){
          cout<<"\n\tLuong thuc an con khi thu: "<<i+1<<endl;
          for (int j=0;j<5;j++) {
               do{
                    cout << "Luong thuc an (pound) khi thu["<<i+1<<"]Ngay thu["<<j+1<<"]: ";
                    cin >> an[i][j];
               }while(an[i][j]<0);
               }cout<<endl;
     }
}
int tong(int mang[][5]){
     int tong=0; 
     for (int i = 0; i<3;i++){
          for(int j=0;j<5;j++){
               tong+=mang[i][j];
          }
     }
     return tong;
}
int min(int mang[][5]){
     int min=mang[0][0];
     for (int i = 0; i<3;i++){
          for(int j=0;j<5;j++){
               if(min>mang[i][j]){
                    min=mang[i][j];
               }
          }
     }
     return min;
}
int max(int an[][5]){
     int max=an[0][0];
     for(int i=0;i<3;i++){
          for(int j=0;j<5;j++){
               if(max<an[i][j]){
                    max=an[i][j];
               }
          }
     }
     return max;
}
int main(){ 
     int an[3][5];
     nhap(an);
     cout<<"\nLuong thuc an trung binh/ngay cua gia ginh khi la: "<<tong(an)/5<<" pound";
     cout<<"\nLuong thuc an it nhat ca tuan cua moi con khi la: "<<min(an)<<" pound";
     cout<<"\nLuong thuc an nhieu nhat ca tuan cua moi con khi la: "<<max(an)<<" pound";

}