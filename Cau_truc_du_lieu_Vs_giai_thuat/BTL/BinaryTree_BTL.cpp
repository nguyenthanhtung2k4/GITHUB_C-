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
// 7
void LNR(Tree T)
{
	if (T!=NULL)
	{
		LNR(T->Left);
		cout<<T->Key.NhaCungCap<<"\t\t"
		<<T->Key.TenSanPham<<"\t\t"
		<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
		LNR(T->Right);
	}
}
// 8
void RNL(Tree T)
{
	if (T!=NULL)
	{
		RNL(T->Right);
		cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
		RNL(T->Left);
	}
}
// 9
void InGiaTri(Tree T)
{
	if (T!=NULL)
	{
		cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DonGia*T->Key.SoLuong<<endl;
		InGiaTri(T->Left);
		InGiaTri(T->Right);
	}
}
// 10
int DemSoSanPham(Tree T)
{
    if (T != NULL)
    {
        return 1 + DemSoSanPham(T->Left) + DemSoSanPham(T->Right);
    }
    else
    {
        return 0;
    }
}
// 11
float Total_Sp(Tree T){
	if(T!=NULL){
		return(T->Key.SoLuong +Total_Sp(T->Left) +Total_Sp(T->Right));
	}else{
		return 0;
	}
}
// 12
void TimSanPham(Tree T, string x, bool &kthay)
{
    if (T != NULL)
    {
        TimSanPham(T->Left, x, kthay);
        if (T->Key.TenSanPham == x)
        {
            cout << T->Key.NhaCungCap << "\t\t" << T->Key.TenSanPham << "\t\t" << T->Key.SoLuong << "\t\t" << T->Key.DonGia << "\t\t" << T->Key.DVT << endl;
            kthay = true;
        }
        TimSanPham(T->Right, x, kthay);
    }
}

// 13
void TimSanPhamHangX(Tree T, string x, bool &kthay)
{
    if (T != NULL)
    {
        TimSanPhamHangX(T->Left, x, kthay);
        if (T->Key.NhaCungCap == x)
        {
            cout << T->Key.NhaCungCap << "\t\t" << T->Key.TenSanPham << "\t\t" << T->Key.SoLuong << "\t\t" << T->Key.DonGia << "\t\t" << T->Key.DVT << endl;
            kthay = true;
        }
        TimSanPhamHangX(T->Right, x, kthay);
    }
}
// 14
void TimSanPhamDVT(Tree T, string x, bool &kthay)
{
    if (T != NULL)
    {
        TimSanPhamDVT(T->Left, x, kthay);
        if (T->Key.DVT == x)
        {
            cout << T->Key.NhaCungCap << "\t\t" << T->Key.TenSanPham << "\t\t" << T->Key.SoLuong << "\t\t" << T->Key.DonGia << "\t\t" << T->Key.DVT << endl;
            kthay = true;
        }
        TimSanPhamDVT(T->Right, x, kthay);
    }
}

// 15
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
// 16
void SpSoLuongDuoiX(Tree T, int x, bool &kthay)
{
    if (T != NULL)
    {
        SpSoLuongDuoiX(T->Left, x, kthay);
        if (T->Key.SoLuong < x)
        {
            cout << T->Key.NhaCungCap << "\t\t" << T->Key.TenSanPham << "\t\t" << T->Key.SoLuong << "\t\t" << T->Key.DonGia << "\t\t" << T->Key.DVT << endl;
            kthay = true;
        }
        SpSoLuongDuoiX(T->Right, x, kthay);
    }
}
// 17
Item Max_value(Tree T){
	if (T->Right == NULL)
    {
        return T->Key;
    }
    else
    {
        return Max_value(T->Right);
    }
}
// 18
Item Min_value(Tree T)
{
    if (T->Left == NULL)
    {
        return T->Key;
    }
    else
    {
        return Min_value(T->Left);
    }
}
// 19
void Price_up_x(Tree T, int x,bool& i){
	if(T!=NULL){
		if(x<T->Key.DonGia){
			cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
			Price_up_x(T->Left,x,i);
			Price_up_x(T->Right,x,i);
			i=true;
		}
		else
		{
			Price_up_x(T->Right,x,i);
		}
		
	}
}
// 20
void InDuoi_x(Tree T, int x){
	if(T!=NULL){
		if(x>T->Key.DonGia){
			cout<<T->Key.NhaCungCap<<"\t\t"<<T->Key.TenSanPham<<"\t\t"<<T->Key.SoLuong<<"\t\t"<<T->Key.DonGia<<"\t\t"<<T->Key.DVT<<endl;
			InDuoi_x(T->Left,x);
			InDuoi_x(T->Right,x);
		}
		else
		{
			InDuoi_x(T->Left,x);
		}
		
	}
}
// 21
int Sl_PriceX(Tree T, float x){
	if(T!=NULL){
		if(x<T->Key.DonGia){
			return T->Key.SoLuong + Sl_PriceX(T->Left,x) + Sl_PriceX(T->Right,x);
		}
		else
		{
			return Sl_PriceX(T->Right,x);
		}
		
	}
}
// 22
int Total_SL_downX(Tree T,float x){
	if(T!=NULL){
		if(x>T->Key.DonGia){
			return T->Key.SoLuong + Total_SL_downX(T->Left,x) + Total_SL_downX(T->Right,x);
		}
		else
		{
			return Total_SL_downX(T->Left,x);
		}
		
	}
}
// 23
TNode* TimKiem(TNode* T)	// tim node nho nhat
{
    while (T->Left != NULL)
        T = T->Left;
    return T;
}

TNode* XoaNode(Tree &T, float DonGia)		// dung de xoa node k bi loi. case 12,13	
{
    if (T == NULL)
        return T;
    if (DonGia < T->Key.DonGia)
    {
        T->Left = XoaNode(T->Left, DonGia);
    }
    else if (DonGia > T->Key.DonGia)
    {
        T->Right = XoaNode(T->Right, DonGia);
    }
    else
    {
        if (T->Left == NULL)
        {
            TNode* temp = T->Right;
            delete T;
            return temp;
        }
        else if (T->Right == NULL)
        {
            TNode* temp = T->Left;
            delete T;
            return temp;
        }
        TNode* temp = TimKiem(T->Right);
        T->Key = temp->Key;
        T->Right = XoaNode(T->Right, temp->Key.DonGia);
    }
    return T;
}
void XoaSpGiaDuoiX(Tree &T, float x)
{
    if (T == NULL)
        return;
    XoaSpGiaDuoiX(T->Left, x);
    XoaSpGiaDuoiX(T->Right, x);
    if (T != NULL && T->Key.DonGia < x)
    {
        T = XoaNode(T, T->Key.DonGia);
        XoaSpGiaDuoiX(T, x);
    }
}
// 24
void DeletePrice(Tree &T,float x){
	if(T!=NULL){
		if(T->Key.DonGia>x){
			DeletePrice(T->Left,x);
			DeletePrice(T->Right,x);
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
		else
		{
			DeletePrice(T->Right,x);
		}
		
	}
}
// 25-26
void Sl_NCC(Tree T, string name[]){
	if (!isEmpty(T))
	{
		int i=0;
		if (name[0]=="")
		{
			name[0]=T->Key.NhaCungCap;
		}
		else
		{
			while (name[i]!="")
			{
				if (name[i]==T->Key.NhaCungCap)
				{
					break;
				}
				else{
					if (name[i+1]=="")
					{
						name[i+1]=T->Key.NhaCungCap;
						break;
					}
					i++;
				}
			}
			
		}
		Sl_NCC(T->Left,name);
		Sl_NCC(T->Right,name);
	}
	
}
void TimSanPhamHangX1(Tree T, string x)
{
    if (T != NULL)
    {
        TimSanPhamHangX1(T->Left,x);
        if (T->Key.NhaCungCap == x)
        {
            cout <<"\t\t" << T->Key.TenSanPham << "\t\t" << T->Key.SoLuong << "\t\t" << T->Key.DonGia << "\t\t" << T->Key.DVT << endl;
        }
        TimSanPhamHangX1(T->Right,x);
    }
}
// 27
void DeletePriceTall(Tree& T){
	
		if(T->Right!=NULL){
			DeletePriceTall(T->Right);
		}else{
			Tree NewNode=T;
			T=T->Left;
			delete NewNode;
		}
}
// 28
void XoaSpGiaMin(Tree& T){
	if(T!=NULL){
		Item MinDV=Min_value(T);
		T=XoaNode(T, MinDV.DonGia);
	}
}
//29
void NodeTheMang(Tree &X, Tree &Y)
{
    if (Y->Left != NULL)
    {
        NodeTheMang(X, Y->Left);
    }
    else
    {
        X->Key = Y->Key; 
        X = Y;
        Y = Y->Right;
    }
}
 
void XoaNodex(Tree &T, float x)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        if (x < T->Key.DonGia)
        {
            XoaNodex(T->Left, x);
        }
        else if (x >T->Key.DonGia)
        {
            XoaNodex(T->Right, x); 
        }
        else 
        {
            TNode *X = T; 
            if (T->Left == NULL)
            {
                T=T->Right;
            }
            else if (T->Right == NULL)
            {
                T=T->Left;
            }
            else
            {
                NodeTheMang(X, T->Right);
            }
            delete X;
        }
    }
}
bool kiemtragia(Tree T,float x){
	if(T!=NULL)
	{
		if (T->Key.DonGia==x)
		{
			return true;
		}
		else if (T->Key.DonGia<x)
		{
			kiemtragia(T->Right,x);
		}
		else
		{
			kiemtragia(T->Right,x);
		}
		
	}
}
// Menu
void Menu(Tree T)
{
	int LuaChon;
	do
	{
		cout<<"\n<--------------------------Cac Chuc Nang-------------------------->\n";
		cout<<"1. Khoi tao danh sach san pham\n";
		cout<<"2. Kiem tra danh sach\n";
		cout<<"3. Them san pham vao danh sach\n";
		cout<<"4. In danh sach san pham\n";
		cout<<"5. Doc thong tin cac san pham tu file vao danh sach\n";
		cout<<"6. Ghi du lieu tu danh sach vao file\n";
		cout<<"7. In danh sach san pham theo chieu tang gia\n";
		cout<<"8. In danh sach san pham theo chieu giam gia\n";
		cout<<"9. In ra tong gia tri cua moi loai san pham\n";
		cout<<"10. Tinh va in ra so loai mat hang trong danh sach\n";
		cout<<"11. Tinh va in ra tong so luong cua tat ca cac loai san pham\n";
		cout<<"12. Tim va in ra thong tin cua san pham co ten x\n";
        cout<<"13. Tim va in ra thong tin cua nhung loai san pham thuoc hang x\n";
        cout<<"14. Tim va in ra thong tin nhung loai san pham co don vi tinh khoi luong la x\n";
		cout<<"15. In ra thong tin nhung loai san pham co so luong tren x\n";
		cout<<"16. In ra thong tin nhung loai san pham co so luong duoi x\n";
		cout<<"17. In ra thong tin san pham co gia cao nhat\n";
		cout<<"18. In ra thong tin san pham co gia thap nhat\n";
		cout<<"19. In ra thong tin nhung san pham co gia tren muc x\n";
		cout<<"20. In ra thong tin nhung san pham co gia duoi muc x\n";
		cout<<"21. Tong so luong nhung loai san pham co gia tren muc x\n";
		cout<<"22. Tong so luong nhung loai san pham co gia duoi muc x\n";
		cout<<"23. Xoa nhung loai san pham co gia duoi muc x\n";
		cout<<"24. Xoa nhung loai san pham co gia tren muc x\n";
		cout<<"25. Tinh so luong nha cung cap\n";
		cout<<"26. Thong ke so cac loai san pham theo tung nha cung cap\n";
		cout<<"27. Xoa san pham co gia cao nhat\n";
		cout<<"28. Xoa san pham co gia thap nhat\n";
		cout<<"29. Xoa san pham co gia bang x\n";
		cout<<"30. Thoat khoi chuong trinh\n";
		cout<<"Moi chon chuc nang (1-30)\n==> ";
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
			case 7:
			{
				if (!isEmpty(T))
				{
					cout<<"\nNhaCC\t\t\t"<<"TenSp\t\t\t"<<"Sl\t\t"<<"Gia"<<"\t\t"<<"DonVi"<<endl;
					LNR(T);
				}
				else
				{
					cout<<"Danh sach rong!\n";
				}
				
				break;
			}
			case 8:
			{
				if (!isEmpty(T))
				{
					cout<<"\nNhaCC\t\t\t"<<"TenSp\t\t\t"<<"Sl\t\t"<<"Gia"<<"\t\t"<<"DonVi"<<endl;
					RNL(T);
				}
				else
				{
					cout<<"Danh sach rong!\n";
				}
				
				break;
			}
			case 9: // tinh tong gia sp
			{
				cout<<"\nNhaCC\t\t\t"<<"TenSp\t\t\t"<<"Sl\t\t"<<"Gia"<<"\t\t"<<"TongGia"<<endl;
				InGiaTri(T);
				break;
			} 
			case 10:
            {
                cout << "Tong so luong san pham: " << DemSoSanPham(T) << endl;
                break;
            }
			case 11: // tinh tong sl sp
			{
				cout<<"Tong Sl sp: "<<Total_Sp(T)<<endl;
				break;
			} 
			case 12:
            {
                string x;
                bool kthay = false;
                cout << "Nhap ten san pham can tim: ";
                cin.ignore();
                getline(cin, x);
                TimSanPham(T, x, kthay);
                if (!kthay)
                {
                    cout << "Khong tim thay ten san pham!" << endl;
                }
                break;
            }
            case 13:
            {
                string x;
                bool kthay = false;
                cout << "Nhap ten hang can tim: ";
                cin.ignore();
                getline(cin, x);
                TimSanPhamHangX(T, x, kthay);
                if (!kthay)
                {
                    cout << "Khong tim thay ten hang!" << endl;
                }
                break;
            }
            case 14:
            {
                string x;
                bool kthay = false;
                cout << "Nhap san pham co khoi luong can tim: ";
                cin.ignore();
                getline(cin, x);
                TimSanPhamDVT(T, x, kthay);
                if (!kthay)
                {
                    cout << "Khong tim thay ten san pham co khoi luong nhu vay!" << endl;
                }
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
			case 16:
            {
                int x;
                bool kthay = false;
                cout << "Nhap san pham co so luong duoi x: ";
                cin >> x;
                SpSoLuongDuoiX(T, x, kthay);
                if (!kthay)
                {
                    cout << "Khong tim thay ten san pham co so luong it nhu vay!" << endl;
                }
                break;
            }
			case 17:
			{
				if (!isEmpty(T))
				{
					Item x=Max_value(T);
					cout<<"Loai san pham co gia cao nhat:\n";
					cout<<x.NhaCungCap<<"\t\t"<<x.TenSanPham<<"\t\t"<<x.SoLuong<<"\t\t"<<x.DonGia<<"\t\t"<<x.DVT<<endl;
				}
				else
				{
					cout<<"Danh sach rong!\n";
				}
				
				break;
			}
			case 18://in ra thong tin co sp  gia thap nhat
			{
				if (!isEmpty(T))
				{
					Item x=Min_value(T);
					cout<<"Loai san pham co gia thap nhat:\n";
					cout<<x.NhaCungCap<<"\t\t"<<x.TenSanPham<<"\t\t"<<x.SoLuong<<"\t\t"<<x.DonGia<<"\t\t"<<x.DVT<<endl;
				}
				else
				{
					cout<<"Danh sach rong!\n";
				}
				
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
			case 20: // in ra gia duoi x
			{
				int x;
				cout<<"Gia tren x:";cin>>x;
				InDuoi_x(T,x);
				if(isEmpty(T)){
					cout<<"Khong co Gia nao duoi: "<<x;
				}
				break;
			}


			case 21://  total sl gia tren x
			{
				float x;
				cout<<"Nhap muc gia: ";
				cin>>x;
				if(x>Max_value(T).DonGia){
					cout<<"Khong tim thay gia tri nao tren "<<x;
					cout<<endl;
				}
				else
				{
					int sl=Sl_PriceX(T,x);
					cout<<"Tong Sl la: "<<sl<<endl;
				}
				break;
			}
			case 22:
			{
				float x;
				cout<<"Nhap muc gia: ";
				cin>>x;
				if(x<Min_value(T).DonGia){
					cout<<"Khong tim thay gia tri nao duoi "<<x;
					cout<<endl;
				}
				else
				{
					int sl=Total_SL_downX(T,x);
					cout<<"Tong Sl la: "<<sl<<endl;
				}
				break;
			}
			case 23:
            {
                float x;
                cout << "Nhap muc gia it hon de xoa: ";
                cin >> x;
                if (Min_value(T).DonGia < x)
                {
                    XoaSpGiaDuoiX(T, x);
                    cout << "Da xoa thanh cong!\n";
                }
                else
                {
                    cout << "Khong co san pham nao co gia tren " << x << " de xoa khoi danh sach\n";
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
			case 25:
			{
				if (!isEmpty(T))
				{
					string name[10];
					Sl_NCC(T,name);
					int i=0;
					while (name[i]!="")
					{
						i++;
					}
					cout<<"So luong nha cung cap trong danh sach la: "<<i<<endl;
				}
				else
				{
					cout<<"Danh sach rong!\n";
				}
				break;
			}
			case 26:
			{
				if (!isEmpty(T))
				{
					string name[DemSoSanPham(T)+1];
					Sl_NCC(T,name);
					int i=0;
					cout<<"Phan phoi cac loai san pham theo nha cung cap:\n";
					while (name[i]!="")
					{
						cout<<name[i]<<endl;
						TimSanPhamHangX1(T,name[i]);
						i++;
					}
				}
				else
				{
					cout<<"Danh sach rong!\n";
				}
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
			case 28:
            {
                if(!isEmpty(T)){
                	XoaSpGiaMin(T);
                	cout<<"Da xoa"<<endl;
				}
				else{
					cout<<"Danh sach rong!"<<endl;
				}
				break;
            }
			case 29:
			{
				float x;
				cout<<"Nhap gia san pham can xoa: ";
				cin>>x;
				if (!kiemtragia(T,x))
				{
					cout<<"Khong tim thay loai san pham nao co gia bang "<<x<<endl;
				}
				else
				{
					XoaNodex(T,x);
					cout<<"Da xoa!";
				}
				
				break;
			}
			case 30 :
			{
				cout<<"Tam biet!";
				break;
			}		
		}
	}while(LuaChon!=30);
}
int main()
{
    Tree T;
    Menu(T);
    return 0;
}