#include  <iostream>
#include <cmath>
using namespace std ;
bool  nguyen(int n){
	int so=0;
	for(int i=2 ;i<=sqrt(n);i++){
		if(n%i==0){
			so++;
		}
	}
	if(so==0)return true;
	return false ;
}
int  main(){
	int n;
	do{
		cin >>n;
	}while(n<2);
	if(nguyen(n)){cout<<"dung";
	}else{cout<<"sai";
	}
	return 0 ;
}
