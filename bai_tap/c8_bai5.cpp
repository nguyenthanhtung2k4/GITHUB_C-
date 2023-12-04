#include <iostream> 
using namespace std;
void something(int* x,int* y){
     int temp=*x;
     *x=*y*10;
     *y=temp*10;
}
int main(){
     int x=10 , y=20;
     cout<<"khi chua bien doi! "<<endl;
     cout<<"x="<<x<<"\ny="<<y<<endl;
     something(&x,&y);
     cout<<"khi bien doi!"<<endl;
     cout<<"x="<<x<<"\ny="<<y<<endl;
}