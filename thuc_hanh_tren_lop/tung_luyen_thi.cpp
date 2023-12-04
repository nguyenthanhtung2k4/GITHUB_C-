
#include <iostream> 
using namespace std;
void nhuan(int n){
  switch (n)
  {
    case 2:
      cout<<"29";
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      cout<<"31";
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      cout<<"30";
      break;
  }
}
void thuong(int n){
  switch (n){
    case 2:
      cout<<"28";
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      cout<<"31";
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      cout<<"30";
      break;
  }
}

 
int main(){
  int nam, thang;
  cin>> thang;
  cin>>nam;
  //cout<<thang;
  if(thang>12||thang<1){
    cout<<"-1";
  }else if(nam>2999||nam<2001){
    cout<<"-2";
  }else{
    if(nam%4==0&&nam%100!=0||nam%400==0){
      nhuan(thang);
    }else{
      thuong(thang);
    }
  }
  return 0;
}