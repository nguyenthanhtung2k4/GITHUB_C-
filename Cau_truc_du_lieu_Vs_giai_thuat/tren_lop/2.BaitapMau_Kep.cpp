//Cài đặt danh sách đôi bằng con trỏ
#include<iostream>
using namespace std;
struct Sinhvien
{
	int masv;
	string hoten;
	int namsinh;
};
typedef Sinhvien Item;
struct Node
{
	Item Data;
	Node *Next;
	Node *Prev;
};

struct DoubleList
{
	Node* head;
	Node* tail;
	/* data */
};

typedef DoubleList *List;
//Khởi tạo danh sách
// void Init(List &L) kiem tra xem loi  o  dau
void Init(DoubleList L)
{
	L.head =NULL;
	L.tail =NULL;
}
//Kiểm tra danh sách L có trống không? true/false
bool isEmpty(DoubleList L)
// bool isEmpty(List L)  kiem tra xem loi  o  dau
{
	if(L.head==NULL)
		return true;
	else
		return false;
}
//Trả về độ dài của danh sách
int len(DoubleList &L)
{
	int dodai=0;
	while(L.head!=NULL)
	{
	//  cach 1
		// dodai++;
		// L.head=L.head->Next;
	// cach2
		dodai++;
          L.tail=L.tail->Prev;
	}
	return dodai;
}
// Tao  Node data=x
Node* Make_Node(Item x){
	Node* p=new Node; // cap  phat  dong con tro
	p->Data=x;
	p->Next=NULL;
	p->Prev=NULL;
	return p;
}
//  chen Node vao dau danh sach
void ChenDau(DoubleList &L ,Item x){
	Node *p=Make_Node(x);
	if(L.head==NULL){ //  kIemTra xem danh sach gio thi tro head + tail = p
		L.head=p;
          L.tail=p;
	}else{
		p->Next==L.head;
		L.head->Prev=p;
		L.head=p;
	}
}
//  Chen cuoi dnah sach lien ket
void ChenCuoi(DoubleList&L ,Item x){
	Node *p = Make_Node(x);
	if(L.tail==NULL){ //  kIemTra xem danh sach gio thi tro head + tail = p
		L.tail=p;
          L.head=p;
	}else{
		p->Prev=L.tail;
		L.tail->Next=p;
		L.tail=p;
	}
}
//  Hien thi Node
void HienThiDau(DoubleList L){
	cout<<"\tDanh sach Dau->Cuoi Sinh Vien:\n \n";
	while(L.head!=NULL || L.tail!=NULL){
			//  dau den cuoi
			cout<<L.head->Data.masv<<"\t"<<L.head->Data.hoten<<"\t"<<L.head->Data.namsinh<<endl;
			L.head=L.head->Next;
	}		
}
void HienThiCuoi(DoubleList L){
	cout<<"\tDanh sach Cuoi->Dau Sinh Vien:\n \n";
	while(L.head!=NULL || L.tail!=NULL){
			//  cuoi den dau
			cout<<L.tail->Data.masv<<"\t"<<L.tail->Data.hoten<<"\t"<<L.tail->Data.namsinh<<endl;
			L.tail=L.tail->Prev;
	}		
}
//  tim ma  sinh vien
void Search(DoubleList L ,int msv){
	while (L.head!=NULL)
	{
		/* code */
	}
	
}
//  xoa nut dau danh sach
void DeleteNode(DoubleList &L){
	Node*p=L.head;
	L.head=L.head->Next;
	delete p;
}
void DeleteNode_batKi(DoubleList &L){
	Node* p=L.head;
	// di chuyen h1 den vi tri 2
	// p=h1-> next  
	// h1->next=p->next
	// p->next->prev=h1
	// delete p;
}
//Menu
void Menu(DoubleList L)
{
	int LuaChon;
	Item x;
	do
	{
		cout<<"\nCAC CHUC NANG\n";
		cout<<"1. Khoi tao\n";
		cout<<"2. Kiem tra trong\n";
		cout<<"3. Do dai danh sach\n";
		cout<<"4. ChenDauDanhSach\n";
		cout<<"5. ChenCuoiDanhSach\n";
		cout<<"6. DeleteNode_Dau\n";
		
		cout<<"7. HienThiDau chuong trinh\n";
		cout<<"8. HienThiCuoi chuong trinh\n";
		cout<<"9. Thoat khoi chuong trinh\n";
		cout<<"Moi chon chuc nang (1-9)?";
		cin>>LuaChon;
		switch(LuaChon)
		{
			case 1://Khoi tao
			{system("cls");
				Init(L);
				cout<<"Da khoi tao!";
				break;
			}
			case 2://Kiem tra trong
			{system("cls");
				if (isEmpty(L))
					cout<<"Danh sach trong!\n";
				else
					cout<<"Danh sach khong trong!\n";
				break;
			}
			case 3: // kiemtra do dai 
			{system("cls");
				cout<<"\nDo dai danh sach:"<<len(L);
                    break;
			}
			case 4: // Chen vao dau danh sach
			{system("cls");
				cout<<"Nhap thong tin sinh vien\n";
				cout<<"Ma sv:";
				cin>>x.masv;
				cin.ignore();
				cout<<"HoTen: ";
				getline(cin,x.hoten);
				cout<<"Nam sinh: ";
                    cin>>x.namsinh;
				ChenDau(L,x);
                    break;
			}
			case 5: // Chen vao cuoi danh sach
			{system("cls");
				cout<<"Nhap thong tin sinh vien\n";
				cout<<"Ma sv:";
				cin>>x.masv;
				cin.ignore();
				cout<<"HoTen: ";
				getline(cin,x.hoten);
				cout<<"Nam sinh: ";
                    cin>>x.namsinh;
				ChenCuoi(L,x);
                    break;
			}
			case 6: // delete Node dau
			{system("cls");
				DeleteNode(L);
				cout<<"Succes DeleteNode\n";
                    break;
			}
			case 7:
			{system("cls");
				HienThiDau(L);
				break;
			}
			case 8:
			{system("cls");
				HienThiCuoi(L);
				break;}
			case 9:
			{system("cls");
				cout<<"\tTam biet!\n";
				break;
			}		
		}
	}while(LuaChon!=9);
}
int main()
{
	DoubleList L;
	
	//Init(L);
	//cout<<isEmpty(L)<<endl;
	//cout<<"Do dai:"<<len(L);
	Menu(L);
	
	return 0;
}