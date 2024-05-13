#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
     int mavn;
     string hoten;
     float heso;
     float luong;
};
typedef NhanVien Item;
struct Node
{
     Item data;
     Node * next;
     /* data */
};
struct Stack
{
     Node* Top;
};
//  khoi tao  node
void khoitao(Stack & S){
     S.Top=NULL;
}
//  kiem tra danh sach  rong
bool Empty(Stack S){
     if(S.Top==NULL)
		return true;
	else
		return false;
}
// do dai danh sach
int length(Stack S){
     int dem=0;
     while (S.Top!=NULL)
     {
          dem++;
          S.Top=S.Top->next;  
     }
     return dem;
}
// tao nut 
Node* Make(Item & x){
     Node* p=new Node;
     p->data=x;
     p->next=NULL;
     return p;
}
//  them phan tu vao x
void push(Stack& S, Item x){
     Node*p=Make(x);
     if(S.Top==NULL){
          S.Top=p;
     }else{
          p->next=S.Top;
          S.Top=p;
     }
}
void inStack(Stack S){
     cout<<"Ma NV\tHo Ten\tHeso\tLuong\n";
     while(S.Top!=NULL){
          cout<<S.Top->data.mavn<<'\t'<<S.Top->data.hoten<<'\t'<<S.Top->data.heso<<'\t'<<S.Top->data.luong<<'\n';
          S.Top=S.Top->next;
     }
}
void Menu(Stack &S){
     int chon;
     Item x;
     do{
          cout<<"\n0. Thoat\n";
          cout<<"1. KhoitaoDanhSach\n";
          cout<<"2. KiemTradanh sach\n";
          cout<<"3. DoDai danh sach\n";
          cout<<"4. Chen danh sach\n";
          cout<<"5. In danh sach\n";
          cin>>chon;
          switch (chon)
          {
               case 1:
               {
                    khoitao(S);
                    break;
               }
               case 2:
               {
                    if(Empty(S)){
                         cout<<"Danh sach rong\n";
                    }else{
                         cout<<"Danh sach khong rong\n";
                    }
                    break;
               }
               case 3:
               {
                    cout<<"Danh sach co "<<length(S)<<" phan tu\n";
                    break;
               }
               case 4:
               {
                    cout<<"Nhap ma nhan vien: ";
                    cin>>x.mavn;
                    cin.ignore();
                    cout<<"Nhap ho ten: ";
                    getline(cin,x.hoten);
                    cout<<"Nhap he so: ";
                    cin>>x.heso;
                    cout<<"Nhap luong: ";
                    cin>>x.luong;
                    push(S,x);
                    break;
               }
               case 5:
               {
                    inStack(S);
                    break;
               }
               default:
                    break;
          }
     }while (chon!=0);
}
int main()
{
	Stack L;
	Menu(L);
	return 0;
}