#include <iostream>
#include <cmath>
using namespace std ;
int main(){
	int n ,i=0;
	cin>>n;
	int mang[32];
	while(n>0){
		mang[i++]=n%2;
		n/=2;
	}
	for (int j=i-1;j>=0;j--){
		cout<<mang[j];
	}
}
