// //// cach 1
// #include <iostream>
// #include <string>
// #include <vector>
// #include <fstream>
// using namespace std; 
// int main(){
//     // khoi tao vector
//     vector<int> file_so;
//     string name_file="number.txt";
//     int so, max,min,tb, Tong=0;
//     /// nhap ten file;
//     //kiem tra ten file
//     fstream file(name_file,ios::in);
//     if(!file){cout<<"File khong ton tai";}
//     while(file>>so){
//         file_so.push_back(so);
//     }
//     /// kiem tra phan tu; 
//     int size=file_so.size();
//     min=file_so[0]; 
//     max=file_so[0];
//     for(int i=0;i<size;i++){
//         if(file_so[i]>max){max=file_so[i];}
//         if(file_so[i]<min){min=file_so[i];}
//         Tong +=file_so[i];
//     }
//     /// tb gi trij phan tu
//     int TB= Tong/size;
//     cout<<"So thap nhat trong file la: "<<min<<endl;
//     cout<<"So cao nhat trong file la: "<<max<<endl; 
//     cout<<"Tong cua cac so la: "<<Tong<<endl;
//     cout<<"Gia tri trung binh cua so la: "<<TB<<endl;
//     return 0;
// }
 

 /// cach 2
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std; 
int min(int mang[10],int size){
    int min=mang[0];
    for(int i=0;i<size;i++){
        if(mang[i]<min){min=mang[i];}
    }
    return min;
}
int max(int mang[10],int size){
    int max=mang[0];
    for(int i=0;i<size;i++){
        if(mang[i]>max){max=mang[i];}
    }
    return max;
}
int tong(int mang [10],int size){
    int Tong=0;
    for(int i=0;i<size;i++){
        Tong+=mang[i];
    }
    return Tong;
}
int main(){
    string  ten_file;
    int i=0;
    int mang[10];
    int size=10;
    cout<<"Nhap ten file: ";cin>>ten_file;
    fstream file(ten_file, ios::in);
    if(!file){cout<<"File khong ton tai"; return 1;}
    while(i<size && file>>mang[i]){i++;}
    int tb=tong(mang,size)/size; 
    cout<<"So nho nhat la: "<<min(mang,size)<<endl;
    cout<<"So lon nhat la: "<<max(mang,size)<<endl;
    cout<<"Tong cac so la: "<<tong(mang,size)<<endl; 
    cout<<"Trung binh cac gia tri la: "<<tb<<endl;
    return 0;
}