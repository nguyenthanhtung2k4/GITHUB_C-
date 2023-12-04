// #include <iostream>
// #include <fstream>
// using namespace std ;
// int main(){
//      fstream file;
//      file.open("random.txt",ios::in); 
//      int sl=0,tong=0,so;
     
//      while(!file.eof()){
//           sl++; 
//           file>>so;
//           tong +=so;
//      }
//      file.close(); 
//      cout<<"Tong cua cac so  la: "<<tong<<endl; 
//      cout<<"So  luong cac so la: "<<sl<<endl;
//      cout<<"Trung binh cua cac so la: "<<tong/sl;
//      return 0;
// }

#include <iostream>
#include <fstream>
using namespace std ;
int main(){
     fstream inputFile("random.txt"); 
     int sl=0,tong=0,so;
     
     while(inputFile>>so){
          sl++; 
          tong +=so;
     }
     inputFile.close(); 
     cout<<"Tong cua cac so  la: "<<tong<<endl; 
     cout<<"So  luong cac so la: "<<sl<<endl;
     cout<<"Trung binh cua cac so la: "<<tong/sl;
     return 0;
}