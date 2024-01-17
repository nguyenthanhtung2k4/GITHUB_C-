#include <iostream>
#include <cmath>
using namespace std ; 
bool chinh_phuong(int n){
	int phuong=sqrt( n);
	return(phuong*phuong==n);
	
}
int main(){
	int n;
	cin>>n;
	if(chinh_phuong( n )){
		cout<<n<<" La so chinh phuong"<<endl; 
	}else{
		cout<<n <<" Khong phai la so  chinh phuong"<<endl;
	}
	return 0;
}
