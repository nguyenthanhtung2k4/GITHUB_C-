//Cài đặt danh sách bằng con trỏ
#include<iostream>
using namespace std;
struct Sinhvien
{
	int manv;
	string hoten;
	float heso;
	float tienluong;
};
typedef Sinhvien Item; // ding nghia kieu  du lieu NhanVien
struct Node
{
	Item Data;
	Node *Next;
};
typedef Node *List;

//Khởi tạo danh sách
void Init(List &L)
{
	L =NULL;
}
//Kiểm tra danh sách L có trống không? true/false
bool isEmpty(List L)
{
	if(L==NULL)
		return true;
	else
		return false;
}
//Trả về độ dài của danh sách
int len(List L)
{
	int dodai=0;
	while(L!=NULL)
	{
		dodai++;
		L=L->Next;
	}
	return dodai;
}
//  tao va tra ve mot nut
Node* Make_Node(Item x){
	Node *p=new Node;
     p->Data=x;
     p->Next=NULL;
     return p;
}
// chen phan tu x vao vi tri dau tien cua danh sachs
void Insert_Node(List &L, Item x){
	Node *p=Make_Node(x);//  tao ham 1 node co data la x
	if(L==NULL){
		L=p;
	}else{
		p->Next=L;
		L= p;
	}
}
// hien thi danh sach
void HienThi_Node(List L){
     cout<<"Ma Sinh Vien\tHoVaTen\t\tHeSo\t\tTienLuong"<<endl<<endl;
	while(L!=NULL)
     {
		cout<<"\t"<<L->Data.manv<<"\t"<<L->Data.hoten<<"\t\t"<<L->Data.heso<<L->Data.tienluong<<endl;
          L=L->Next;
     }
}
// chen phan tu  co data=x vao vitri k( dieu  huong con tro)
void  Chen_Node(List &L,Item x, int k){
	Node*p=Make_Node(x); // tao Node p voi  data la x (x la Item SinhVien)
	List L1;
	L1=L;
	int vitri=1;
	if(L==NULL){//  truong hop  L trong giong
		L=p;
	}else{
		// vitri dau
		if(k=1){//  k la vitri cua con tro muon tro toi
			p->Next=L;
			L=p;
		}else{
			L1=L;
			while (L1!=NULL && vitri<k-1) // di chuyen L1 den truoc vi tri k
			{
				vitri++;
				L1=L1->Next;
				
			}
			if(L1->Next==NULL){ // vitri cuoi
				L1=p;
			}
			p->Next=L1->Next;
			L1->Next=p;
		}
	}
}
//  Xoa nut dau  tien
void delete_Node(List & L){
	Node*p=L;
	L=L->Next;
	delete p;
}
//  tim msv trong danh sach ( tra ve -1  neu ko thay)(tra ve neu  tim thay)
int search(List  L, int ma){
	int vitri=1;
     while(L!=NULL){
          if(L->Data.manv==ma){
               return vitri;
          }
          L=L->Next;
          vitri++;
     }
     return -1;
}

//  Xoa nut thu  n trong danh sach;
void deleteN_Node(List &L, int ma){
	Node *p,*L1;
	L1=L;
	int vitri=1;
	if(L==NULL){
		cout<<"Danh sach rong!";
	}else{
		if(ma==1){
			p=L;
               L=L->Next;
               delete p;
		}else{	
			while (L1!=NULL& vitri<ma-1)
			{
				vitri ++;
				L1=L1->Next;
				/* code */
			}
			p=L1->Next;
			L1->Next=p->Next;
			delete p;
		}
	}
}
//Menu
void Menu(List&L)
{
	int LuaChon;
	do
	{
		cout<<"\n==============================\n";
		cout<<"\nCAC CHUC NANG\n";
		cout<<"1. Khoi tao\n";
		cout<<"2. Kiem tra trong\n";
		cout<<"3. Do dai danh sach\n";
		cout<<"4. Chen danh sach\n";
		cout<<"5. Vitri K trong danh sach\n";
		cout<<"6. Xoa ViTri dau trong danh sach\n";
		cout<<"7. Tim MSV trong danh sach\n";
		cout<<"8. Xoa ViTri N trong danh sach\n";
		cout<<"9. Hien thi danh sach\n";
		cout<<"10. Thoat khoi chuong trinh\n";
		cout<<"\nMoi chon chuc nang (1-10)==> ";
		cin>>LuaChon;
		switch(LuaChon)
		{
			case 1://Khoi tao
			{
				Init(L);
				cout<<"Da khoi tao!";
				break;
			}
			case 2://Kiem tra trong
			{
				if (isEmpty(L))
					cout<<"Danh sach trong!";
				else
					cout<<"Danh sach khong trong!";
				break;
			}
			case 3: // do dai  danh sach
			{
				cout<<"Do dai danh sach la: "<<len(L);
				break;
			}
			case 4 : //  nhap thong tin trong danh sach
			{
				Item x;
				// nhap thong tin sv
				cout<<"Nhap thong tin NhanVien:\n";
				cout<<"Ma NhanVien: ";
				cin>>x.manv;
				cin.ignore();
				cout<<"Nhap ho ten: ";
				getline(cin,x.hoten);
				cout<<"Nhap he so: ";cin>>x.heso;
				cout<<"Nhap TienLuong: ";cin>>x.tienluong;
				// goi ham chen nut dau danh sach 
				Insert_Node(L,x);
				break;
			}
			case 5:// chen vi tri k pt x
			{
				Item x;
				int k;
				// nhap thong tin sv
				cout<<"Nhap thong tin NhanVien:\n";
				cout<<"Ma NhanVien: ";
				cin>>x.manv;
				cin.ignore();
				cout<<"Nhap ho ten: ";
				getline(cin,x.hoten);
				cout<<"Nhap he so: ";cin>>x.heso;
				cout<<"Nhap TienLuong: ";cin>>x.tienluong;
				// chen tai vi tri  k;
				cout<<"Nhap vi tri: ";cin>>k;
				Chen_Node(L,x,k);
				break;
			}
			case 6:// xoa vi tri dau trong danh sach;
			{
				delete_Node(L);
				break;
			}
			case 7: // tim  msv  trong danh sach;
			{
				int ma;
				cout<<"Nhap Ma NhanVien: ";cin>>ma;
				if(search(L,ma)==-1){
					cout<<"Khong tim thay msv : -1"<<endl;
				}else{
					cout<<"\n\nVitri MaNV: "<<search(L,ma)<<endl;
				}
				break;
			}
			case 8: // Xoa danh sach trong N ;
			{
				int n;
				int length=len(L);
				do{
					cout<<"Nhap N ViTri: ";cin>>n;

				}while (n>length|| n<0);				
				deleteN_Node(L,n);
				break;
			}
			case 9:// hien thi danh sach
			{
				HienThi_Node(L);
				break;
			}
			
			case 10:
			{
				cout<<"Tam biet!";
				break;
			}		
		}
	}while(LuaChon!=10);
}
int main()
{
	List L;
	Menu(L);
	return 0;
}