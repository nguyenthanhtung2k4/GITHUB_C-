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
     file<<max<<endl;
     //file<<min<<endl;
     file.close();
     return 0;
} 