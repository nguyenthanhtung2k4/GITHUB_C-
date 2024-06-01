#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct NhanVien
{
    int manv;
    string hoten;
    float heso;
    float luong;
};

typedef NhanVien Item;
struct TNode{
     Item key;
     TNode *left;
     TNode *right;
};
typedef TNode *Tree;
// khoi tao key
//  Key duoc khoi tao truoc khi  dung 
void Init(Tree & T){
     T=NULL;
}
bool isEmpty(Tree T){
     if(T==NULL){
          return true;
     }else{return false;}
}
//  push Key
void pushKey(Tree& T,Item x){
     if(T==NULL){
          T= new TNode;
          T->key=x;
          T->left=NULL;
          T->right=NULL;
     }else{
          // x lon hon thi  cho  ben phai
          if(x.luong>T->key.luong){
             pushKey(T->right,x);
          }else{
          //  x nho hon cho  ben trai
             pushKey(T->left,x);
          }
     }
}
// Duyet cay : Nut -> Trai -> phai;
void NLR(Tree T){
     if(!isEmpty(T)){
          cout<<T->key.manv<<"\t"<<T->key.hoten<<"\t"<<T->key.heso<<"\t"<<T->key.luong<<"\n";
          NLR(T->left);
          NLR(T->right);
     }
     // else{cout<<"Key: Empty";}
}
// DuyetCay: Trai->Nut-> phai
void LNR(Tree T){
     if(!isEmpty(T)){
          LNR(T->left);
cout<<T->key.manv<<"\t"<<T->key.hoten<<"\t"<<T->key.heso<<"\t"<<T->key.luong<<"\n";
          LNR(T->right);
     }
}
// DuyetCay: Trai->Phai-> Nut
void LRN(Tree T){
     if(!isEmpty(T)){
          LRN(T->left);
          LRN(T->right);
          cout<<T->key.manv<<"\t"<<T->key.hoten<<"\t"<<T->key.heso<<"\t"<<T->key.luong<<"\n";
     }
}

//  tong luong
int Tongluong(Tree T) 
{
     if(!isEmpty(T)){
          return (2024-T->key.luong +Tongluong(T->left)+Tongluong(T->right));
     }else{return 0;}
}
//  dem so  luong NhanVien
int DemNv(Tree T){
     if(!isEmpty(T)){
          return(1+DemNv(T->left)+DemNv(T->right));
     }else{return 0;}
}
// tuoi  trung binh
int TBLuong(Tree T){
     if(!isEmpty(T)){
          return Tongluong(T)/DemNv(T);
     }
}

int main(){
     Tree T;
     Init(T);

     
     for(int i=0;i<2;i++){
     //  xay dung key voi  5 sinh  vien:
          Item x;
          cout<<"Nhap  thong tin sv:\n";
          cout<<"MaSv:";cin>>x.manv;
          cin.ignore();
          cout<<"Hoten:";
          getline(cin,x.hoten);
          cout<<"Heso:";cin>>x.heso;
          cout<<"Luong:";cin>>x.luong;
          pushKey(T,x);
     }
     // duyet  nut trai phai
     cout<<"\nNut-> Trai-> Phai\n";
     NLR(T);
     //  duyet   trai nut  phai;
     cout<<"\nTrai-> nut-> Phai\n";
     LNR(T);
     // trai -> phai -> nut;
     cout<<"\nTrai-> Phai-> Nut\n";
     LRN(T);
     // tong tuoi 
     cout<<"\nTong Tuoi: "<<Tongluong(T);
     //  Tong trung binh tuoi
     cout<<"\nTuoi Trung binh la: "<<TBLuong(T);
     // Dem so  sinh vien
     cout<<"\nSo luong SV: "<<DemNv(T);
     return 0;
}