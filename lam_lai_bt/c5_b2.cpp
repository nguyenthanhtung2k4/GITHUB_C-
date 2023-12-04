#include <iostream> 
using namespace std; 
double getLength(){
     double chieu_dai;
     cout<<"Chieu  dai hinh chu nhat:";cin>>chieu_dai; 
     return chieu_dai;
}
double getWidth(){
     double chieu_rong; 
     cout<<"Chieu rong hinh chu nhat:";cin>>chieu_rong; 
     return chieu_rong;
}
double getArea(double dai,double rong){
     return dai*rong;
}
void displayData(double dai, double rong ,double s){
     cout<<"Chieu dai hinh chu nhat la: "<<dai<<endl;
     cout<<"Chieu rong hinh chu nhat la: "<<rong<<endl;
     cout<<"Dien tich hinh chu nhat la: "<<s<<endl;
}
int main(){
     double dai=getLength();
     double rong=getWidth();
     double s=getArea(dai,rong);
     cout<<"\n\n---------------------------\n";
     displayData(dai,rong,s);
     return 0;
}