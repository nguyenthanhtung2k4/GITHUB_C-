#include <iostream> 
#include <vector>
using namespace std; 
int main(){
     vector<int> mang;
     int a;
     cin>>a;
     for (int  i = 0; i < a; i++)
     {
          int value;
          cin>>value;
          mang.push_back(value);
     }
     int k;cin>>k;
     if(k>=0&&k<a){
          mang.erase(mang.begin()+k);
     }
     size_t sl_mang=mang.size();
     for (int i = 0; i < sl_mang; i++)
     {
          cout<<mang[i]<<" ";
     }
     return 0;
}