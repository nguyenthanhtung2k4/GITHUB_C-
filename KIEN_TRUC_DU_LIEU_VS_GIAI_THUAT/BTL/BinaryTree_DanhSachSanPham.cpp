#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
struct SanPham
{
	string NhaCungCap;
     string TenSanPham;
	int SoLuong;
     float DonGia;
	string DVT;
};
typedef SanPham Item;
struct TNode
{
    Item Key;
    TNode *Left;
    TNode *Right;
};
typedef TNode *Tree;
//1
void Init(Tree &T)
{
	T=NULL;
}
//2
bool isEmpty(Tree T)
{
	if (T==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//3
void AddNode(Tree &T, Item x)
{
	if (T==NULL)
	{
		T= new TNode;
		T->Key=x;
		T->Left=NULL;
		T->Right=NULL;
	}
	else
	{
		if (T->Key.DonGia>x.DonGia)
		{
			AddNode(T->Left,x);
		}
		else
		{
			AddNode(T->Right,x);
		}
	}
}
//4
void InDanhSach(Tree T)
{
	if (T!=NULL)
	{
		cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
		InDanhSach(T->Left);
		InDanhSach(T->Right);
	}
}
//5
void ReadFileToDSSP(Tree &T)
{
	ifstream f1;
	f1.open("SanPham.txt");
	if (!f1)
	{
		cout<<"Mo tep loi!\n";
	}
	else
	{
		Item x;
		while (!f1.eof())
		{
			f1.ignore();
			getline(f1,x.NhaCungCap);
			getline(f1,x.TenSanPham);
			f1>>x.SoLuong;
			f1>>x.DonGia;
			f1>>x.DVT;
			AddNode(T,x);
		}
		cout<<"Da doc xong!\n";
	}
	f1.close();
}
//6 -  Nguyễn Thanh Tùng
void WriteToFile(ofstream &file,Tree T){
	if(T!=NULL){
		file<<T->Key.NhaCungCap<<"\n"<<T->Key.TenSanPham<<"\n"<<T->Key.SoLuong<<"\n"<<T->Key.DonGia<<"\n"<<T->Key.DVT<<endl;
		WriteToFile(file,T->Left);
		WriteToFile(file,T->Right);
	}
}
void WriteFileDSSP(Tree T){
	// fstream file("Sp.txt",ios::out); /// au  tao  tao  ra file  de chua no.
	ofstream file;
	file.open("Sp.txt");
	if(!file){
		cout<<"File khong ton tai! ";
	}else{
		file<<"\n";
		WriteToFile(file,T);
		file.close();
		cout<<"Da ghi xog\n";
	}
}
//  tinh va in ra tong gia tri cua moi loai sp
float Total_Gia(Tree T){
	if(T!=NULL){
		return(T->Key.DonGia +Total_Gia(T->Left) +Total_Gia(T->Right));
	}else{
		return 0;
	}
}
// tinh tong  so luong sp trongg   danh sach
float Total_Sp(Tree T){
	if(T!=NULL){
		return(T->Key.SoLuong +Total_Sp(T->Left) +Total_Sp(T->Right));
	}else{
		return 0;
	}
}
// in ra sp  co sl tren x;
void Sl_up_x(Tree T, int x,bool& i){
	if(T!=NULL){
		Sl_up_x(T->Left,x,i);
		Sl_up_x(T->Right,x,i);
		if(x<T->Key.SoLuong){
			cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
			// cout<<"sl: "<<T->Key.SoLuong<<endl;
			i=true;
		}
	}
}
// in ra sp co gia tri thap nhat
void Low_Price(Tree T){
	if(T!=NULL){
		if(T->Left==NULL){
			cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
		}
		Low_Price(T->Left);
	}
}
// in ra sp  co gia tren x;
void Price_up_x(Tree T, int x,bool& i){
	if(T!=NULL){
		Price_up_x(T->Left,x,i);
		Price_up_x(T->Right,x,i);
		if(x<T->Key.SoLuong){
			cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
			// cout<<"sl: "<<T->Key.SoLuong<<endl;
			i=true;
		}
	}
}
// tong so sl  co  gia tren x;
void Sl_PriceX(Tree T, float x,bool& i,float& total){
	if(T!=NULL){
		Sl_PriceX(T->Left,x,i,total);
		Sl_PriceX(T->Right,x,i,total);
		if(x<T->Key.DonGia){
			total+=T->Key.SoLuong;
			i=true;
		}
	}
}
//   xoa sp  co  gia tren x khoi ds
void DeletePrice(Tree &T,float x){
	if(T!=NULL){
		DeletePrice(T->Left,x);
		DeletePrice(T->Right,x);
		if(T->Key.DonGia>x){
			Tree Node=T;
			if(T->Left==NULL&&T->Right==NULL){
				T=NULL;
			}else if(T->Left==NULL){
				T=T->Right;	
			}else if(T->Right==NULL){
				T=T->Left;
			}else{
				Tree PNode=T;
				Tree CNode=T->Left; 
				while (CNode!=NULL)
				{
					T=CNode;
					CNode=CNode->Left;	
				}
				if(PNode->Left==CNode){
					PNode->Left=CNode->Right;
				}else{
					PNode->Right=CNode->Right;
				}
				Node=CNode;
			}
			delete Node;
		}
	}
}
// delete gia sp cao nhat
void DeletePriceTall(Tree& T){
	
		if(T->Right!=NULL){
			DeletePriceTall(T->Right);
		}else{
			Tree NewNode=T;
			T=T->Left;
			delete NewNode;
		}
}
	 
/*
3->9. Tinh và in ra tổng giá trị của mỗi loại sản phẩm
5->11. Tinh và in ra tổng số lượng của tất cả các loại sản phẩm
9->15. In ra thông tin của những loại sản phẩm có số lượng trên x
12->18. In ra thông tin của sản phẩm có giá thấp  nhất
13->19. In ra những sản phẩm có giá trên mức x
15->21. Tính tổng số lượng của những loại sản phẩm có giá trên mức x
18->24. Xoá sản phẩm có giá trên x khỏi danh sách
21->27. Xoá sản phẩm có giá cao nhất
Bổ sung thêm:
30. ghi file và đặt tên file
31. đọc file bằng nhập tên file
=========>13, 18, 15, 21, 9, 3, 5,12<=========
*/
// ghi file vs dat ten file
void NameToFile(Tree T,ofstream& Name){
	if(T!=NULL){
			Name<<T->Key.NhaCungCap<<"\n"<<T->Key.TenSanPham<<"\n"<<T->Key.SoLuong<<"\n"<<T->Key.DonGia<<"\n"<<T->Key.DVT<<endl;
			NameToFile(T->Left,Name);
			NameToFile(T->Right,Name);
	}
}
void CreatName_file(Tree T,string Name){
	ofstream f1;
	f1.open(Name);
	if(!f1){
		fstream file(Name,ios::out);
		f1<<"\n";
		NameToFile(T,f1);
		f1.close();

	}else{
		f1<<"\n";
		NameToFile(T,f1);
		f1.close();
	}
}
//  nhap ten file doc du lieu vao danh sach
void ReadNameFile(Tree &T,string  Name){
	ifstream f1;
	f1.open(Name);
	if(!f1){
		cout<<"File khong ton tai!";
	}else{
		Item x;
		while (!f1.eof())
		{
			f1.ignore();
			getline(f1,x.NhaCungCap);
			getline(f1,x.TenSanPham);
			f1>>x.SoLuong;
			f1>>x.DonGia;
			f1>>x.DVT;
			AddNode(T,x);
		}
		cout<<"Da doc xong!\n";
	}
	f1.close();
	
}
// Menu
void Menu(Tree T)
{
	int LuaChon;
	
	do
	{
		cout<<"\n==============================================\n";
		cout<<"\nCAC CHUC NANG\n";
		cout<<"0. Thoat khoi chuong trinh\n";
		cout<<"1. Khoi tao danh sach san pham\n";
		cout<<"2. Kiem tra danh sach co rong khong\n";
		cout<<"3. Them san pham vao danh sach\n";
		cout<<"4. In danh sach san pham\n";
		cout<<"5. Doc thong tin cac san pham tu file vao danh sach\n";
		cout<<"6. Ghi du lieu tu danh sach vao file\n";
		cout<<"9. Tinh vs in ra tong gia tri sp\n";
		cout<<"11.Tinh vs in ra tong so luong cua tat ca sp\n";
		cout<<"15.In ra so luong sp tren  X\n";
		cout<<"18.In ra Sp co gia thap nhat\n";
		cout<<"19.In ra Gia sp tren  X\n";
		cout<<"21.Tong Sl sp co Gia sp tren  X\n";
		cout<<"24.Delete Gia sp tren  X\n";
		cout<<"27.Delete Gia CaoNhat\n";
		cout<<"30.Dat Ten File va Luu vao File Moi\n";
		cout<<"31.Nhap Ten File va Doc du lieu vao danh sach\n";
		cout<<"Moi chon chuc nang (1-30)?";
		cin>>LuaChon;
		system("cls");
		switch(LuaChon)
		{
			case 1:
			{
				Init(T);
				cout<<"Da khoi tao danh sach san pham!\n";
				break;
			}
			case 2:
			{
				if(isEmpty(T)){
					cout<<"Danh sach rong!\n";
				}
				else
				{
					cout<<"Danh sach khong rong!\n";
				}
				break;
			}
			case 3:
			{
				Item x;
				cout<<"Nhap vao nhung thong tin cua san pham can them:\n";
				cout<<"Ten nha cung cap: ";
				cin.ignore();
				getline(cin,x.NhaCungCap);
				cout<<"Ten san pham: ";
				getline(cin,x.TenSanPham);
				cout<<"So luong: ";
				cin>>x.SoLuong;
				cout<<"Don gia: ";
				cin>>x.DonGia;
				cout<<"Don Vi: ";
				cin>>x.DVT;
				AddNode(T,x);
				break;
			}
			case 4:
			{

				if (!isEmpty(T))
				{
					cout<<"\nNhaCC\t\t\t"<<"TenSp\t\t\t"<<"Sl\t\t"<<"Gia"<<"\t\t"<<"DonVi"<<endl;
					InDanhSach(T);
				}
				else
				{
					cout<<"Danh sach rong!\n";
				}
				
				break;
			}
			case 5:
			{
				ReadFileToDSSP(T);
				break;
			}
			case 6: // doc tu  danh sach vao file
			{
				WriteFileDSSP(T);
				break;
			}
			case 9: // tinh tong gia sp
			{
				cout<<"Tong gia tri sp: "<<fixed<<setprecision(2)<<Total_Gia(T)<<" $";
				break;
			} 
			case 11: // tinh tong sl sp
			{
				cout<<"Tong Sl sp: "<<Total_Sp(T)<<endl;
				break;
			} 
			case 15:// in ra so  luong tren x
			{
				int x;
				bool i=false;
				cout<<"So luong tren x:";cin>>x;
				Sl_up_x(T,x,i);
				if(!i){
					cout<<"Khong co sl nao tren: "<<x;
				}
				break;
			}
			case 18://in ra thong tin co sp  gia thap nhat
			{
				cout<<"Gia thap nhat la: "<<endl;
				Low_Price(T);
				break;
			}
			case 19:// in ra Gia tren x
			{
				int x;
				bool i=false;
				cout<<"Gia tren x:";cin>>x;
				Price_up_x(T,x,i);
				if(!i){
					cout<<"Khong co Gia nao tren: "<<x;
				}
				break;
			}
			case 21://  total sl gia tren x
			{
				float x;
				bool i=false;
				float sl=0.0;
				cout<<"Gia tren x la: ";
				cin>>x;
				// cout<<Sl_PriceX(T,x,i);
				Sl_PriceX(T,x,i,sl);
				if(i==false){
					cout<<"Khong tim thay gia tri nao tren X! ";
					cout<<endl;
				}else{
					cout<<"Tong Sl la: "<<sl<<endl;
				}
				break;
			}
			case 24:// delete gia sp tren x
			{
				float x;
				cout<<"Delete Gia tren X: ";cin>>x;
				DeletePrice(T,x);
				cout<<"Da xoa xog!";
				break;
			}
			case 27://xoa sp  gia cao nhat
			{
				if (!isEmpty(T)){
					DeletePriceTall(T);
					cout<<"Da xoa! ";
				}else{
					cout<<"Danh sach Rong!";
				}
				break;
			}
			case 30://  dat ten file vao luu vao file moi
			{
				string Name;
				if(T!=NULL){
					cout<<"Dat Ten File: ";
					cin>>Name;
					CreatName_file(T,Name);
					cout<<"Da ghi xog!\n";
				}else{
					cout<<"Danh Sach Rong!\nNhap Du Lieu Vao truoc :((\n";
				}
				break;
			}
			case 31://  nhap ten ghi vao file 
			{
				string Name;
				cout<<"Nhap ten File: ";
				cin>>Name;
				ReadNameFile(T,Name);
				break;
			}

			case 0:
			{
				cout<<"Tam biet!";
				break;
			}		
		}
	}while(LuaChon!=0);
}
int main()
{
    Tree T;
    Menu(T);
    return 0;
}
