// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//   fstream file; 
//   int so=0;
//   file.open("People.txt",ios::in);
//   for(int i=1900;i<=2000;i+=20){
//     cout<<"Nam "<<i;
//     file>>so;
//     for(int j=1;j<=so/1000;j++){
//       cout<<"*";
//     }cout<<endl;
//   }
//   file.close();
//   return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  int so;
  fstream file("People.txt",ios::in);
  for(int i=1900;i<=2000;i+=20){
    cout<<"Nam "<<i<<" ";
    file>>so;
    for(int i=1 ;i<=so/1000;i++){
      cout<<"*";
    }cout<<endl;
  }
  file.close();
  return 0;
}

