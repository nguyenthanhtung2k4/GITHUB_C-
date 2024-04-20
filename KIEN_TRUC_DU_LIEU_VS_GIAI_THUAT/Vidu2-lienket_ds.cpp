//Cài đặt danh sách liên kết đơn bằng con trỏ
#include<iostream>
using namespace std;
typedef int Item;
struct Node //Định nghĩa 1 nút gồm 2 phần: Data, Next
{
	Item Data;
	Node *Next;
};
typedef Node *List; //Định nghĩa 1 danh sách liên kết

//Khởi tạo danh sách liên kết
//Khi làm việc với danh sách liên kết thì phải khởi tạo
void Int(List &L)
{
	L=NULL;
}
//Kiểm tra danh sách có rỗng không? true/false
bool isEmpty(List L)
{
	if(L==NULL)
		return true;
	else
		return false;	
}
//Trả về độ dài danh sách liên kết
int Len(List L)
{
	int dodai=' ';
	while(L!=NULL)
	{
		dodai++;
		L=L->Next;
	}
} 
//  tạo danh sách chèn vào đầu nút 
void head(List &L ,Item value){
	Node *H=new Node	;
	H->Data=value;
	H->Next=L;
	L=H;
}
//  tạo danh sách chèn vào cuối nút 
void Last(List & L ,Item value){
	Node *P=new Node ; // khởi tạo  ô chứa
	P->Data=value; // thêm dữ liệu vào ô chứ trong Node-> data
	P->Next=NULL;  // Next là đi đến ô chứ tiếp theo
	if(isEmpty(L)) // hàm kiểm tra dữ liệu
		L=P;
	else{
	Node* New=L; 
	while(New->Next != NULL)
		New=New->Next;
	New->Next=P;

	}
}
// in ra các dữ liệu từ ô chứa:
void print(List &L){
	Node* print=L ;
	while(print!=NULL){
		cout<<print->Data<<" ";
          print=print->Next;
	}
	cout<<endl;
}
int main()
{
	List L;
	Int(L);
	cout<<isEmpty(L);
	cout<<Len(L)<<endl;
	Last(L,299);
	head(L,10);
	Last(L,299);
	head(L,10);
	print(L);
	return 0;
}