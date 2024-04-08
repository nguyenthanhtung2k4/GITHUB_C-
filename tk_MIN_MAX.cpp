#include <iostream>
using namespace std;
int main(){
     float so1,so2;
     cout<<"Nhap so thu nhat: ";cin>>so1;
     cout<<"Nhap so thu hai: ";cin>>so2;
     float max= (so1>so2 )? so1 : so2;
     float min= (so1<so2) ? so1 :so2;
     cout<<"So Lon nhat la: "<<max<<endl;
     cout<<"So Nho nhat la: "<<min<<endl;
     return 0;
}///  DUNG MIN MAX TA DUNG  : MIN= (SO1>SO2)? SO1:SO2;

/* CACH SO SANH MIN MAX KIEU  BOOL  (TRUE,palse)
#include <iostream> 
using namespace std;
int main(){
     int min,max, so;
     bool i=true;
     while (true)
     {
          cout<<"so  nguyen: ";cin>>so;
          if(so!= -99){          
               if(i){
                    max=so;
                    min=so;
                    i=false;
               }
               else {
                    if(max>so){
                         max=so;
                    } if(min<so){
                         min=so;
                    }
               }
          }else{
               break;;
          }
     }
     cout<<"Min: "<<min<<"\nMax: "<<max;
     return 0;
}

//////////////////////////////////////////////////////
#include <iostream> 
using namespace std;
int main(){
     int min,max;
     int so[4];
     int n=20;
     min=so[0],max=so[0];
     for(int i=0; i<n;i++){
          cin>>so[i];
     }
     for(int i=0; i<n;i++){
          if(so[i]>max){
               max=so[i];
          }
          if(so[i]<min){
               min=so[i];
     
     }

}

*/