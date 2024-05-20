#include<iostream>
#include<fstream>
using namespace std;

struct Sinhvien
{
	int msv;
	string hoten;
	int nam;
};
typedef Sinhvien Item;

struct Node
{
	Item Data;
	Node* Next;
};

struct Stack
{	
	Node* top;
};

void Init(Stack &L)
{
	L.top = NULL;
}

bool isEmpty(const Stack &L)
{
	return (L.top == NULL);
}

int len(const Stack &L)
{
	int dodai = 0;
	Node* temp = L.top;
	while (temp != NULL)
	{
		dodai++;
		temp = temp->Next;
	}
	return dodai;
}

Node* Make_Node(Item x)
{
	Node* p = new Node;
	p->Data = x;
	p->Next = NULL;
	return p;
}

void push(Stack& L, Item x)
{
	Node* p = Make_Node(x);
	if (L.top == NULL)
	{
		L.top = p;
	}
	else
	{
		p->Next = L.top;
		L.top = p;
	}
}

void inStack(Stack L)
{    cout<<"MaSv\tHoTen\tNam"<<endl;
	while (L.top != NULL)
	{
		cout << L.top->Data.msv << "\t" << L.top->Data.hoten << "\t" << L.top->Data.nam << endl;
		L.top = L.top->Next;
	}
}

Item Peak(const Stack& S)
{
	return (S.top->Data);
}

Item Pop(Stack& S)
{
	if (isEmpty(S))
	{
		cerr << "Danh sach rong!"<<endl;
	}
	Node* p = S.top;
	S.top = S.top->Next;
	Item Data = p->Data;
	delete p;
	return Data;
}
int minYear(Stack S)
{
	Item Data;
	int min;
	if (isEmpty(S))
	{
		cout << "Danh sach rong" << endl;
		return -1;
	}
	min = Pop(S).nam;
	while (S.top != NULL)
	{
		Data = Pop(S);
		if (min > Data.nam)
		{
			min =Data.nam;
		}
	}
	return min;
}
//  dua vao  ham year(Item)  co nam sinh nhi nhat
Item Oldest(Stack S){
	Item Data,DataMin;
	int min;
	min = Pop(S).nam;
	DataMin=Pop(S);
	while (S.top != NULL)
	{
		Data = Pop(S);
		if (min > Data.nam)
		{
			min =Data.nam;
			DataMin=Data;
		}
	}
	return DataMin;
}

int Search(Stack S,int tim){
	Item Data;
	int dem=0;
	if(!isEmpty(S)){
		return -1;
	}
	while (S.top!=NULL)
	{
		dem++;
		if(S.top->Data.msv==tim){
			return dem;
		}
		S.top=S.top->Next;
	}
	return -1;
}
//  ghi du lieu vao  tep stack.txt
void SaveStack(Stack S){
	ofstream file;
	Item Data;
	file.open("stack.txt");
	if(!file){
		cout<<"Khong mo duoc tep";
          return;
	}
	file<<"Ma\tHoTen\tNam\n";
	while (S.top!=NULL)
	{
		Data=Pop(S);
		file<<Data.msv<<"\n"<<Data.hoten<<"\n"<<Data.nam<<endl;
	}
	file.close();
}
void ReadFileStack(Stack &S){
	ifstream file;
	Item Data;
	file.open("stack.txt");
	if(!file){
		cout<<"Khong mo duoc tep";
          return;
	}
	while (!file.eof())
	{
		file>>Data.msv;
		file>>Data.hoten;
		file>>Data.nam;
		push(S,Data);
	}
	file.close();
	
}
void Menu(Stack& L)
{
	Item x;
	int LuaChon;
	do
	{
		cout << "\n==============================\n";
		cout << "\nCAC CHUC NANG\n";
		cout << "1. Khoi tao\n";
		cout << "2. Kiem tra rong\n";
		cout << "3. Do dai danh sach\n";
		cout << "4. Push danh sach\n";
		cout << "5. InStack danh sach\n";
		cout << "6. Peak va khong xoa\n";
		cout << "7. Pop va xoa\n";
		cout << "8. Print-minYear\n";
		cout << "9. Print-Sinh vien minYear\n";
		cout << "10.Tim masv\n";
		cout << "11.Ghi tu ngan xep->tep\n";
		cout << "12.Doc du lieu tu tep->NganXep\n";
		cout << "14.KetThuc Chuongtrinh\n";
		cout << "\nMoi chon chuc nang (1-10)==> ";
		cin >> LuaChon;
		switch (LuaChon)
		{
			case 1:
			{
				Init(L);
				cout << "Da khoi tao!";
				break;
			}
			case 2:
			{
				if (isEmpty(L))
					cout << "Danh sach trong!";
				else
					cout << "Danh sach khong trong!";
				break;
			}
			case 3:
			{
				cout << "Do dai danh sach la: " << len(L);
				break;
			}
			case 4:
			{
				cout << "Nhap thong tin NhanVien:\n";
				cout << "Ma NhanVien: ";
				cin >> x.msv;
				cin.ignore();
				cout << "Nhap ho ten: ";
				getline(cin, x.hoten);
				cout << "Nam sinh: ";
				cin >> x.nam;
				push(L, x);
				break;
			}
			case 5:
			{
				inStack(L);
				break;
			}
			case 6:
			{
				Item Data;
				Data = Peak(L);
				if (!isEmpty(L))
				{
					cout << Data.msv << "\t" << Data.hoten << "\t" << Data.nam << endl;
				}
				else
				{
					cout << "Danh sach rong!";
				}
				break;
			}
			case 7:
			{
				Item Data;
				Data = Pop(L);
				if (!isEmpty(L))
				{
					cout << "Xoa Phantu: \n" << Data.msv << "\t" << Data.hoten << "\t" << Data.nam << endl;
				}
				else
				{
					cout << "Danh sach  rong";
				}
				break;
			}
			case 8:
			{
				int min = minYear(L);
				if (min != -1)
				{
					cout << "Nam sinh nho nhat la: " << min;
				}
				break;
			}
			case 9:
			{	if(isEmpty(L))
				{
					cout << "Danh sach rong";
				}
				else{
					Item Data;
					Data = Oldest(L);
					cout << Data.msv << "\t" << Data.hoten << "\t" << Data.nam << endl;
				}
				break;
			}
			case 10:
			{
				int tim;
				cout << "\nNhap ma sinh vien can tim: ";
				cin >> tim;
				int vitri=Search(L,tim);
				if(vitri!=-1){
					cout<<"MaSv:"<<tim<<" laVitri: "<<vitri<<endl;
				}else{
					cout<<"Khong tim thay: "<<vitri;
				}
				break;
			}
			case 11:
			{
				SaveStack(L);
				cout<<"Da Save File";
				break;
			}
			case 12:
			{
				ReadFileStack(L);
				cout<<"Da Read File";
				break;
			}
			case 14:
			{
				cout << "ChuongTrinh Ket thuc\nTamBiet!";
				break;
			}
		} 
	}while (LuaChon != 14);
}
int main()
{
	Stack L;
	Menu(L);
	return 0;
}
