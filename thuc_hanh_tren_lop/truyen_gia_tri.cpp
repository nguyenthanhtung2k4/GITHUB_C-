#include <iostream> 
using namespace std ;
///  ham hoan vi  2so  nguyen
void hoan_vi(int &x ,int &y){/// & dung de thay doi so cu  va thay vao do la so moi
     int z=x;
     x=y;
     y=z;
     cout<<x<<"\n"<<y;
}
int main(){
     int x=3;
     int y=4;
     cout<<"truoc khi  hoan vi x="<<x<<" y="<<y<<endl;
     hoan_vi(x,y);
     cout<<"\nsau khi  hoan vi x="<<x<<" y="<<y;
     return 0;
}