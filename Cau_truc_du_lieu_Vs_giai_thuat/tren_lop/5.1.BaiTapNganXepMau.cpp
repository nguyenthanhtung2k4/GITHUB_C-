//Cài đặt danh sách bằng con trỏ
#include<iostream>
using namespace std;
struct Sinhvien
{
	int msv;
	string hoten;
	int nam;
};
typedef Sinhvien Item; // ding nghia kieu  du lieu NhanVien
struct Node
{
	Item Data;
	Node *Next;
};
struct Stack
{	
	Node* top;
};

//Khởi tạo danh sách
void Init(Stack &L)
{
	L.top =NULL;
}
//Kiểm tra danh sách L có trống không? true/false
bool isEmpty(Stack L)
{
	if(L.top==NULL)
		return true;
	else
		return false;
}
//Trả về độ dài của danh sách
int len(Stack L)
{
	int dodai=0;
	while(L.top!=NULL)
	{
		dodai++;
		L.top=L.top->Next;
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
//  them phan tu  co data =x
void push(Stack&L,Item x){
	Node* p=Make_Node(x);
	if(L.top==NULL){
		L.top=p;
	}else{
		p->Next=L.top;
		L.top=p;
	}
	
}
void inStack(Stack L){
	cout<<"MA\tTen\t\tNam\n";
	while (L.top!=NULL)
	{
		cout<<L.top->Data.msv<<"\t"<<L.top->Data.hoten<<"\t"<<L.top->Data.nam<<endl;
          L.top=L.top->Next;
	}
}
//Menu
void Menu(Stack&L)
{
	Item x;
	int LuaChon;
	do
	{
		cout<<"\n==============================\n";
		cout<<"\nCAC CHUC NANG\n";
		cout<<"1. Khoi tao\n";
		cout<<"2. Kiem tra trong\n";
		cout<<"3. Do dai danh sach\n";
		cout<<"4. Chen danh sach\n";
		cout<<"5. InStack danh sach\n";
		
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
			case 4 : //  them phan tu vao ngan xep
			{
				// nhap thong tin sv
				cout<<"Nhap thong tin NhanVien:\n";
				cout<<"Ma NhanVien: ";
				cin>>x.msv;
				cin.ignore();
				cout<<"Nhap ho ten: ";
				getline(cin,x.hoten);
				cout<<"Nam sinh: ";cin>>x.nam;
				// goi ham chen nut dau danh sach 
				push(L,x);
				break;
			}
			case 5:// In Stack
			{
				inStack(L);
				break;
			}
			case 6:// xoa vi tri dau trong danh sach;
			{
				
				break;
			}
			case 7: // tim  msv  trong danh sach;
			{
				
				break;
			}
			case 8: // Xoa danh sach trong N ;
			{
				
				break;
			}
			case 9:// hien thi danh sach
			{
				
				break;
			}
			
			case 10:
			{
				
				break;
			}		
		}
	}while(LuaChon!=10);
}
int main()
{
	Stack L;
	Menu(L);
	return 0;
}