#include <iostream>
#include <bits/stdc++.h>
#include<cstdlib>
using namespace std;
//  danh  sach  lien ket don
struct NhanVien
{
     int ma;
     string name;
     int tien;
};
typedef NhanVien Item;
struct Node
{
     Item data;
     Node *next;
};
typedef Node *L;
void Nhap(Item &nv,L&l){          
     system("cls");
     cout<<"Nhap ma nhan vien: ";
     cin>>nv.ma;
     cin.ignore();
     cout<<"Nhap ten nhan vien: ";
     getline(cin,nv.name);
     cout<<"Nhap tien luong: ";
     cin>>nv.tien;
     //  tao nut moi
     Node *p=new Node;
     p->data=nv;
     p->next=NULL;
     if(l==NULL){
          system("cls");
          cout<<"Node Emty";
          l=p;
     }else{
          system("cls");
          cout<<"NO Emty";
          Node *temp=l ; 
          while (temp->next!=NULL)
          {
               temp=temp->next;
          }
          temp->next=p;
     }
}
void Hien(Item nv,L  l){
     if(l!=NULL){
          int i=1;
               system("cls");
               cout<<"Stt\tMaNv\tTenNv\t\tTieLuong";
               cout<<"\n---------------------------------------\n";
          while (l!=NULL)
          {
               cout<<"\n"<<i++<<"\t"<<l->data.ma<<"\t";
               cout<<l->data.name<<"\t\t";
               cout<<l->data.tien<<"\t";
               l=l->next;
          }
               cout<<"\n---------------------------------------\n";
     }else{
          system("cls");
          cout<<"----------------------------\n";
          cout<<"        Danh sach rong\n";
          cout<<"----------------------------\n";
     }    
}
void Chen_dau(L& l,Item& nv){
     system("cls");
     cout<<"Nhap ma nhan vien: ";
     cin>>nv.ma;
     cin.ignore();
     cout<<"Nhap ten nhan vien: ";
     getline(cin,nv.name);
     cout<<"Nhap tien luong: ";
     cin>>nv.tien;
     //  tao nut moi vao danh sach
     Node *p=new Node;
     p->data=nv;
     p->next=l;
     l=p;
}
void Chen_Node(L&l , Item& nv ,int k ){
     Node *p=new Node;
     p->data=nv;
     Node *temp=l;
     if(k=1){
          p->next=l;
          l=p;
     }else{
          for (int i = 1; i < k-1; i++)
          {
               temp=temp->next;
          }
          
     }p->next=temp->next;
          temp->next=p;
}
void Search(L l,Item nv ,int tim){
     int ma=0;
     while(l!=NULL){
          if(l->data.ma==tim){
               ma=1;
               system("cls");
               cout<<"Tim thay ma: "<<tim<<"\n\n";
               cout<<"Ma: "<<l->data.ma<<"\t\t";
               cout<<"TenNv: "<<l->data.name<<"\t";
               cout<<"Tien luong: "<<l->data.tien<<"\t";
          }
          l=l->next;
     }
     if(ma==0){
     system("cls");
     cout<<"\nMa: "<<tim<<" Khong hop le:((\n\n";
     }
}

int main(){
     Node *l=NULL;
     Item nv;
     int chon=-1;
     system("cls");
     while (chon!=0)
     {
          cout<<"Nhap 0: ThoatChuongTrinh\n";
          cout<<"Nhap 1: Nhap\n";
          cout<<"Nhap 2: InRa\n";
          cout<<"Nhap 3: ChenPhanDau\n";
          cout<<"Nhap 4: ChenPhanCuoi\n";
          cout<<"Nhap 5: ChenPhanTuBatKi\n";
          cout<<"Nhap 6: ThayThePhanTu\n";
          cout<<"Nhap 7: Search\n";
          cout<<"Nhap 8: DeleteNodeBatKi\nNhapLuaChon: ";
          cin>>chon;
          if(chon!=0){
               switch (chon)
               {
               case 1:
                    Nhap(nv,l);
                    break;
               case 2:
                    Hien(nv,l);
                    break;
               case 3:
                    Chen_dau(l,nv);
                    break;
               case 4:
                    Nhap(nv,l);
                    break;
               case 5:
                    int k;
                    cout<<"Nhap vi tri can chen: ";
                    cin>>k;
                    Chen_Node(l,nv,k);
                    break;
               case 6:
          //  chua xog 
               case 7:
                    int tim;
                    system("cls");
                    cout<<"Nhap ma nhan vien can tim: ";
                    cin>>tim;
                    Search(l,nv,tim);
                    break;
               case 8:
          //  chx hoan thanh
               default:
                    break;
               }
          }else{
               system("cls");
               cout<<"----------------------------\n";
               cout<<"\n\nThankYou! :))\n";
               cout<<"----------------------------\n";
               return 0;
               }
     }
     
     
     // Nhap(nv,l);
     // Hien(nv);
     return 0;
}