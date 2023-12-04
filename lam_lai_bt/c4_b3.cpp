#include <iostream> 
#include <string>
using namespace std; 
double getSales(string name){
     int so ;
     do{ 
          cout<<"Nhap  doanh so "<<name<<": ";cin>>so;
     }while(so<1);
     return so;
}
void findHighest(double db,double dn, double tb,double tn){
     int max=db;
     string name; 
     if(max>db){max=db;
     name="Doanh nghiep Dong bac";}
     if(max>dn){max=dn;
     name="Doanh nghiep Dong bac";}
     if(max>tb){max=tb;
     name="Doanh nghiep Dong bac";}
     if(max>tn){max=tn;
     name="Doanh nghiep Dong bac";}
     cout<<"Doanh so lon nhat la: "<<name<<endl;
}
int main(){
     double db=getSales("dong bac");
     double dn=getSales("dong nam");
     double tb=getSales("tay bac");
     double tn=getSales("tay nam");
     findHighest(db,dn,tb,tb);
     return 0;
}