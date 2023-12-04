/*///BAI 1
#include <iostream>
using namespace std; 
int main(){
     int sp, gia=5000,Tong=0; 
     cout<<"Nhap so luong san pham: ";cin>>sp;
     int tien=sp*gia;
     if(sp<=5||sp>=1){
          Tong=tien;
     } if(sp<=9 ||sp>=5){
          Tong=tien-(sp*gia*0.05);
     } if(sp<=19||sp>=10){
          Tong=tien-(tien*0.07);
     } if(sp>=20){
          Tong=tien-(tien*0.1);
     }
     cout<<"So tien phai tra la: "<<Tong<<" Dong";
     return 0;
}
*/
/* BAI 2
#include <iostream> 
using namespace std; 
int main(){
     int so;
     int max,min;

     while(true){
          cout<<"Nhap so: ";cin>>so;
          if(so<=-10){break;}
          if(so>=10){break;}
          max=so;
          if(max<so){so=max;}
          if(min>so){min=so;}
     }
     cout<<"Max: "<<max<<"Min: "<<min;
     return 0;
}
*/

/*
/// BAI 3
#include <iostream> 
#include <fstream>
using namespace std ;

int main(){
     int so;
     int max,min;
     fstream file("1771020729.txt",ios::out);
     while(true){
          cout<<"Nhap so: ";cin>>so;
          if(so<=-10){break;}
          if(so>=10){break;}
          max=so;
          if(max<so){so=max;}
          if(min>so){min=so;}
     }
     cout<<"Max: "<<max<<"    Min: "<<min;
     file<<max;
     //file<<min<<endl;
     file.close();
     return 0;
}   
*/
