#include <iostream>
#include <fstream>
using namespace std;

struct NhanVien
{
    int mnv;
    int heso;
    float luong;
    string hoten;

};
typedef NhanVien Item;
struct TNode {
    Item Key;
    TNode* Left;
    TNode* Right;
};

typedef TNode* Tree;

// Khởi tạo cây
void Init(Tree &T) {
    T = NULL;
}

// Kiểm tra cây rỗng
bool isEmpty(Tree T) {
    return T == NULL;
}

// Thêm 1 giá trị x vào cây T
void AddNode(Tree &T, Item x) {
    if (T == NULL) { // Cây rỗng
        T = new TNode;
        T->Key = x;
        T->Left = NULL;
        T->Right = NULL;
    } else { // Cây không rỗng
        if (T->Key.luong > x.luong) { // x nhỏ hơn key thì cho bên trái
            AddNode(T->Left, x); // Thêm vào bên trái
        } else { // x lớn hơn hoặc bằng key thì cho bên phải
            AddNode(T->Right, x); // Thêm vào bên phải
        }
    }
}

// Duyệt cây: Nút (gốc) -> trái -> phải
void NLR(Tree T) {
    if (T != NULL) {
        cout<<"manv "<<T->Key.mnv<<"heso "<<T->Key.heso<<"Name "<<T->Key.hoten<<"Luong "<<T->Key.luong<<endl;
        // cout << T->Key.luong << "\t"; // In ra, tính toán,....
        NLR(T->Left);
        NLR(T->Right);
    }
}

// Duyệt cây: Trái -> Nút -> Phải
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->Left);
        cout<<"manv "<<T->Key.mnv<<"heso "<<T->Key.heso<<"Name "<<T->Key.hoten<<"Luong "<<T->Key.luong<<endl;
        LNR(T->Right);
    }
}

// Duyệt cây: Trái -> Phải -> Nút
void LRN(Tree T) {
    if (T != NULL) {
        LRN(T->Left);
        LRN(T->Right);
        cout<<"manv "<<T->Key.mnv<<"heso "<<T->Key.heso<<"Name "<<T->Key.hoten<<"Luong "<<T->Key.luong<<endl;
    }
}

// Đọc file
void ReadFile(Tree &T) {
    ifstream file("NhanVien.txt");
    Item Data;
    if (!file) {
        cout << "Error :((\n";
        return;
    }
    while (!file.eof()) {
        file>>Data.mnv;
        file>>Data.heso;
        file.ignore();
        getline(file,Data.hoten);
        file>>Data.luong;
        AddNode(T, Data);
    }
    file.close();
    cout << "Da Xong!\n";
}

// Ghi file (chưa triển khai)
void WriteFile() {
    // Implement write to file function if needed
}

// Tính và trả về tổng các Key
int TongLuong(Tree T) {
    if (T != NULL) {
        return T->Key.luong + TongLuong(T->Left) + TongLuong(T->Right);
    } else {
        return 0;
    }
}

// Đếm số node
int DemSoNode(Tree T) {
    if (T != NULL) {
        return 1 + DemSoNode(T->Left) + DemSoNode(T->Right);
    } else {
        return 0;
    }
}

// Trung bình các Key
float TBKey(Tree T) {
    if (!isEmpty(T)) {
        return (float)TongLuong(T) / DemSoNode(T);
    } else {
        return 0;
    }
}

// Đếm số lá
int DemSoLa(Tree T) {
    if (T != NULL) {
        if (T->Left == NULL && T->Right == NULL) {
            return 1;
        } else {
            return DemSoLa(T->Left) + DemSoLa(T->Right);
        }
    } else {
        return 0;
    }
}

// Đếm số node có Key lẻ
int KeyHesoLe(Tree T) {
    if (T != NULL) {
        int dem = 0;
        if (T->Key.heso % 2 == 1) {
            dem = 1;
        }
        dem += KeyHesoLe(T->Left);
        dem += KeyHesoLe(T->Right);
        return dem;
    } else {
        return 0;
    }
}

// Tính tổng các Key lẻ
int TongHesoLe(Tree T) {
    if (T != NULL) {
        if (T->Key.heso % 2 == 1) {
            return T->Key.heso + TongHesoLe(T->Left) + TongHesoLe(T->Right);
        } else {
            return TongHesoLe(T->Left) + TongHesoLe(T->Right);
        }
    } else {
        return 0;
    }
}

// Tìm đường đi đến node có Key x
void TimDuong(Tree T, int x) {
    if (T != NULL) {
        cout << T->Key.mnv << "\t";
        if (T->Key.mnv == x) {
            return;
        } else {
            if (T->Key.mnv > x) {
                TimDuong(T->Left, x);
            } else {
                TimDuong(T->Right, x);
            }
        }
    }
}
// tim min
int MinLuong(Tree T) {
    if (T == NULL) {
        cout << "Cay rong!" << endl;
        return -1; // Giá trị đặc biệt biểu thị cây rỗng
    }
    // Nếu không có con trái, nút hiện tại là nhỏ nhất
    if (T->Left == NULL) {
        return T->Key.luong;
    }
    // Đệ quy tìm khóa nhỏ nhất ở cây con trái
    return MinLuong(T->Left);
}
int MaxLuong(Tree T){
    if(T==NULL){
        return -1;
    }else{
        if(T->Right==NULL){
            return T->Key.luong;
        }
    }
    return (MaxLuong(T->Right));
}
// Menu
void Menu(Tree T) {
    int LuaChon;
    do {
		cout << "\nCAC CHUC NANG\n";
		cout << "0. Thoat khoi chuong trinh\n";
		cout << "1. Khoi tao cay\n";
		cout << "2. Kiem tra cay rong\n";
		cout << "3. Them 1 node\n";
		cout << "4. Duyet cay: Nut-Trai-Phai\n";
		cout << "5. Duyet cay: Trai-Nut-Phai\n";
		cout << "6. Duyet cay: Trai-Phai-Nut\n";
		cout << "7. ReadFile Cay nhi phan\n";
		cout << "8. TongLuong Cay nhi Phan\n";
		cout << "9. DemSoNode Cay nhi Phan\n";
		cout << "10. TrungBinh Key Cay nhi Phan\n";
		cout << "11. Dem So Node la\n";
		cout << "12. Dem So Node Le\n";
		cout << "13. TongHesoLe\n";
		cout << "14. Tim Duong Di Dem node Key_x\n";
		cout << "15. Tim  Min Tree\n";
		cout << "16. Tim  Max Tree\n";

		cout << "Moi chon chuc nang (0-14)\n==>";
		cin >> LuaChon;
        switch (LuaChon) {
            case 0: // Kết thúc chương trình
            {
                cout << "Tam biet!\n";
                break;
            }
            case 1: // Khởi tạo
            {
                Init(T);
                cout << "Da khoi tao!\n";
                break;
            }
            case 2: // Kiểm tra trống
            {
                if (isEmpty(T))
                    cout << "Cay rong!\n";
                else
                    cout << "Cay khong rong!\n";
                break;
            }
            case 3: // Thêm node
            {
                Item x;
                cout << "Nhap thong tin x: ";
                cout<<"MaNv";cin>>x.mnv;
                cout<<"Heso";cin>>x.heso;
                cin.ignore();
                cout<<"Ten";getline(cin,x.hoten);
                cout<<"Luong";cin>>x.luong;
                AddNode(T, x);
                cout << "Da xong!\n";
                break;
            }
            case 4: // Nút - Trái - Phải
            {
                cout << "Duyet cay: Nut-Trai-Phai\n";
                NLR(T);
                break;
            }
            case 5: // Trái - Nút - Phải
            {
                cout << "Duyet cay: Trai-Nut-Phai\n";
                LNR(T);
                break;
            }
            case 6: // Trái - Phải - Nút
            {
                cout << "Duyet cay: Trai-Phai-Nut\n";
                LRN(T);
                break;
            }
            case 7: // Đọc file
            {
                ReadFile(T);
                break;
            }
            case 8: // Tổng key
            {
                cout << "Tong SoKey: " << TongLuong(T) << endl;
                break;
            }
            case 9: // Số node
            {
                cout << "SoNode: " << DemSoNode(T) << endl;
                break;
            }
            case 10: // Trung bình các node
            {
                cout << "Trungbinh cac key: " << TBKey(T) << endl;
                break;
            }
            case 11: // Đếm số lá
            {
                cout << "Dem so la: " << DemSoLa(T) << endl;
                break;
            }
            case 12: // Đếm số node lẻ
            {
                cout << "So Node key le: " << KeyHesoLe(T) << endl;
                break;
            }
            case 13: // Tổng key lẻ
            {
                cout << "Tong NodeKey le: " << TongHesoLe(T) << endl;
                break;
            }
            case 14: // Tìm đường đi
            {
                int Key;
               
                cout << "Nhap mnv: ";
                cin>> Key;
                TimDuong(T, Key);
                break;
            }
            case 15: // min  
            {
                cout<<"Min Key: ";
                cout<<MinLuong(T);
                break;
            }   
            case 16: // max  
            {
                cout<<"Max Key: ";
                cout<<MaxLuong(T);
                break;
            }   
        } 
    }while (LuaChon != 0);  
}

int main() {
    Tree T;
    Menu(T);
    return 0;
}