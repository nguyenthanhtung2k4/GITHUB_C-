#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef int Item;
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
          if(x>T->key){
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
          cout<<T->key<<"\t";
          NLR(T->left);
          NLR(T->right);
     }
     // else{cout<<"Key: Empty";}
}
// DuyetCay: Trai->Nut-> phai
void LNR(Tree T){
     if(!isEmpty(T)){
          LNR(T->left);
          cout<<T->key<<"\t";
          LNR(T->right);
     }
}
// DuyetCay: Trai->Phai-> Nut
void LRN(Tree T){
     if(!isEmpty(T)){
          LRN(T->left);
          LRN(T->right);
          cout<<T->key<<"\t";
     }
}

//  ham tinh và tra ve gia tri key trong cay T4
int TongKey(Tree T) 
{
     if(!isEmpty(T)){
          return  T->key +TongKey(T->left)+TongKey(T->right);
     }
}
// Ham dem so  nut
int Demso(Tree T){
     if(!isEmpty(T)){
          return 1+ Demso(T->right)+Demso(T->left);
     }else{return 0;}
}
int main(){
     Tree T;
     Init(T);
     // int a[]={3,1,6,4,15,40,7,36};
     int a[]={15,40,36,3,1,6,4,7};
     cout<<"\nNut banDau:\n";
     for(int i=0;i<8;i++){
          pushKey(T,a[i]);
          cout<<a[i]<<"\t";
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
     // tong key
     cout<<"\nTong so key: "<<TongKey(T);
     // so nut tong key
     cout<<"\nDem so Nut: "<<Demso(T);
     return 0;
}