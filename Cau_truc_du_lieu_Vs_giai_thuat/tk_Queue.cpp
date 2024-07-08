//Cài đặt danh sách bằng con trỏ
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
struct Node
{
	Item Data;
	Node *Next;
};
struct Queue
{
     Node*Front;// Dau them vao
     Node*Rear;// Dau lay  ra
     int Count;// So luong nut
};


//Khởi tạo danh sách
void Init(Queue &Q)
{
	Q.Front=NULL;
	Q.Rear=NULL;
	Q.Count=0;
}
//Kiểm tra danh sách Q có trống không? true/false
bool isEmpty(Queue Q)
{
	if(Q.Count==0)
		return true;
	else
		return false;
}
//Trả về độ dài của danh sách
int len(Queue Q)
{
	return Q.Count;
}
// Tao nut
Node* NewNode(Item x){
     Node*p=new Node;
     p->Data=x;
     p->Next=NULL;
     return p;
}
// Them nut vao dau danh sach
void Push(Queue &Q,Item x){
     Node*p=NewNode(x);//  tao nut moi
     if(isEmpty(Q)){ //   neu  node rong
          Q.Front=p;
          Q.Rear=p;
     }else{ //  Neu node khong dong
          Q.Rear->Next=p;
		Q.Rear=Q.Rear->Next;
     }
     Q.Count++;
}
void print(Queue Q){
	Node*p=Q.Front;
     while(p!=NULL){
          cout<<p->Data.manv<<"\t"<<p->Data.hoten<<"\t"<<p->Data.heso<<p->Data.luong<<endl;
          p=p->Next;
     }
}
Item pop(Queue&Q){
	Item x;
	x=Q.Front->Data;
	Node*p=Q.Front;
	Q.Front=Q.Front->Next;
	delete p;
	Q.Count--;
	return x ;
}
// hay  cai  dat cac thao  tac hang doi  giong nhu   stack
Item Peak(Queue &Q){
	Item x;
     x=Q.Front->Data;
     return x;
}
//  min   nam
int min(Queue Q){
	Item Data;
	int min;
	if (isEmpty(Q))
	{
		cout << "Danh Qach rong" << endl;
		return -1;
	}
	min = pop(Q).heso;
	while (Q.Front != NULL)
	{
		Data = pop(Q);
		if (min > Data.heso)
		{
			
		}
	}
	return min;
	
}

// tuoi nguoi lon nhat
Item Oldest(Queue Q){
	Item Data,DataMin;
	int min;
	min = pop(Q).luong;
	DataMin=Q.Front->Data;
	while (Q.Front != NULL)
	{
		Data = pop(Q);
		if (min > Data.luong)
		{
			DataMin=Data;
		}
	}
	return DataMin;
}
int Search(Queue Q,int tim){
	Item Data;
	int dem=1;
	int so= -1;
	// if(!isEmpty(Q)){
	// 	return so;
	// }
	while (Q.Front!=NULL)
	{
		if(Q.Front->Data.manv==tim){
			return dem;
		}
		Q.Front=Q.Front->Next;
		dem++;
	}
	return so;
}

//  ghi du lieu vao  tep stack.txt
void SaveStack(Queue S){
	ofstream file;
	Item Data;
	file.open("Queue.txt");
	if(!file){
		cout<<"Khong mo duoc tep";
          return;
	}
	while (S.Front!=NULL)
	{
		Data=pop(S);
		file<<Data.manv<<"\n"<<Data.hoten<<"\n"<<Data.heso<<Data.luong<<endl;
	}
	file.close();
}
void ReadFileStack(Queue &Q){
	ifstream file;
	Item Data;
	file.open("Queue.txt");
	if(!file){
		cout<<"Khong mo duoc tep";
          return;
	}
	while (!file.eof())
	{
		file>>Data.manv;
		file>>Data.hoten;
		file>>Data.heso;
		file>>Data.luong;
		Push(Q,Data);
	}
	file.close();
}
//Menu
void Menu(Queue Q)
{
	int LuaChon;
	
	do
	{
		cout<<"\n========================";
		cout<<"\nCAC CHUC NANG\n";
		cout<<"0  Thoat khoi chuong trinh\n";
		cout<<"1. Khoi tao\n";
		cout<<"2. Kiem tra trong\n";
		cout<<"3. Do dai HangDoi\n";
		cout<<"4. Push HangDoi\n";
		cout<<"5. InPush HangDoi\n";
		cout<<"6. Pop HangDoi\n";
		cout<<"7. Peak HangDoi\n";
		cout<<"8. minHeSo HangDoi\n";
		cout<<"9. MinLuon HangDoi\n";
		cout<<"10. Search HangDoi\n";
		cout<<"11. SaveFile HangDoi\n";
		cout<<"12. ReadFile HangDoi\n";
		
		cout<<"Moi chon chuc nang (1-12)?";
		cin>>LuaChon;
		system("cls");
		switch(LuaChon)
		{
               case 0://Thoat chuong trinh
			{
                    cout<<"See You!";
				break;
			}
			case 1://Khoi tao
			{
				Init(Q);
				cout<<"Da khoi tao!";
				break;
			}
			case 2://Kiem tra trong
			{
				if (isEmpty(Q))
					cout<<"Danh sach trong!";
				else
					cout<<"Danh sach khong trong!";
				break;
			}
               case 3:// do dai Queue
               {
                    cout<<"Do dai:"<<len(Q);
                    break;
               }
               case 4:// Push  hang doi
               { 
                    Item x;
                    cout<<"Nhap masv:";
                    cin>>x.manv;
                    cin.ignore();
                    cout<<"Nhap hoten:";
                    getline(cin,x.hoten);
                    cout<<"Nhap Heso:";
                    cin>>x.heso;
                    cout<<"Nhap Luong:";
                    cin>>x.luong;
                    Push(Q,x);
                    cout<<"Da them";
                    break;
               }
			case 5:// Hien thi hang doi
			{
				print(Q);
				break;
			}
			case 6:
			{
				Item x;
                    x=pop(Q);
                    cout<<x.manv<<"\t"<<x.hoten<<"\t"<<x.heso<<"\t"<<x.luong<<"\n";
                    break;
			}
			case 7:// peak hien thi hang doi dau
			{
				Item x;
                    x=Peak(Q);
                    cout<<x.manv<<"\t"<<x.hoten<<"\t"<<x.heso<<"\t"<<x.luong<<endl;
                    break;
			}
			case 8://min nam
			{
				int m = min(Q);
				if (m != -1)
				{
					cout << "HeSo nho nhat la: " << min(Q);
				}
				break;
			}
			case 9:
			{
				Item x;
                    x=Oldest(Q);
				cout<<"Nguoi nhieu TienNhat!\nma\tten\theso\tluong\n";
                    cout<<x.manv<<"\t"<<x.hoten<<"\t"<<x.heso<<"\t"<<x.luong<<endl;

                    break;
			}
			case 10:// nguoi nhieu tuoi nhat
			{
				if(!isEmpty(Q)){
					int tim;
					cout<<"MA: ";cin>>tim;
					if(Search(Q,tim)!=-1){
						cout<<"Vitri "<<Search(Q,tim);
					}else{
						cout<<"deo co";
					}
				}else{
					cout<<"hang rong ";
				}
				break;
			}
			case 11:
			{
				SaveStack(Q);
				cout<<"Da Save File";
				break;
			}
			case 12:
			{
				ReadFileStack(Q);
				cout<<"Da Read File";
				break;
			}
		}
	}while(LuaChon!=0);
}
int main()
{
     Queue Q;
	Menu(Q);
	return 0;
}