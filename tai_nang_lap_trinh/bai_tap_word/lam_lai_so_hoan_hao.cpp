#include <iostream> 
#include <cmath>;
using namespace std;
bool  hoan_hao(int n){
	int dem=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			dem+=i;
		}
	}
	if(dem==n)return true ;
	return false ;
}
int main(){
	int n;
	cin>>n;
	if(hoan_hao(n)){
		cout<<"la so  hoan  hao";
	}else{
		cout<<"khong la so  hoan hao";
	}
	return 0;
}
