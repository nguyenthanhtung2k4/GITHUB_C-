//Cài đặt thuat toan sap  xep
#include<iostream>
using namespace std;
//  in mang
void InMang(int arr[],int n){
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
void InsertionSort(int arr[],int n){
	int i,key,j;// i la chi  so arr ; key  la tim ohan tu; j la vi tri can chen;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while (j>=0 &&  arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	// InMang(arr,n);
	
}
// doi cho 2 phan tu(Swap)
void Swap(int &x,int &y){
	int  temp;
	temp=x;
	x=y;
	y=temp;
}
// SelectionSort
void SelectionSort(int arr[],int n){
	int i,j,min;
	for(i=0;i<n-1;i++){
		min=i; //  gia su phan tu nho nhat la i;
		//  tim vitri nho nhat trong khoang [i+1,n];
		for(j=i+1;j<n;j++){ 
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		//  doi  cho  vitri min 
		Swap(arr[min],arr[i]);
	}
}
//  noi bot BubbleSort
void BubbleSort(int arr[],int n){
	int i,j;
	bool resul=false;
	for(i=0;i<n-1;i++){
		bool resul=false;
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				resul=true;
			}
		}
		if(resul==false){
			break;
		}
	}
}
//  merga Sort
// Gộp hai mảng con arr[l...m] và arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* Tạo các mảng tạm */
    int L[n1], R[n2];
 
    /* Copy dữ liệu sang các mảng tạm */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Gộp hai mảng tạm vừa rồi vào mảng arr*/
    i = 0; // Khởi tạo chỉ số bắt đầu của mảng con đầu tiên
    j = 0; // Khởi tạo chỉ số bắt đầu của mảng con thứ hai
    k = l; // IKhởi tạo chỉ số bắt đầu của mảng lưu kết quả
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copy các phần tử còn lại của mảng L vào arr nếu có */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    /* Copy các phần tử còn lại của mảng R vào arr nếu có */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l là chỉ số trái và r là chỉ số phải của mảng cần được sắp xếp */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Tương tự (l+r)/2, nhưng cách này tránh tràn số khi l và r lớn
        int m = l+(r-l)/2;
 
        // Gọi hàm đệ quy tiếp tục chia đôi từng nửa mảng
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
//Menu
void Menu(int arr[],int n)
{
	int LuaChon;
	
	do
	{
		cout<<"\nCAC CHUC NANG\n";
		cout<<"0. Thoat khoi chuong trinh\n";
		cout<<"1. SapXep chen-Insertion Sort\n";// chen phan tu  nho nhat  cho  ve dau
		cout<<"2. SapXep lua chon-Selection Sort\n";// tim phan tu nho  nhat dua ve dau  
		cout<<"3. SapXep Bot -Bubble Sort\n";//so sanh  2 vi tri voi  nhau   lon hon 2 vi tri  do  se dua ve dau!
		cout<<"4. SapXep Tron-Merga Sort \n"; //  chia hai mang sau do  tron  so sanh voi  nhau, sau khi so sanh xog lai cho 2 mang sap xep thanh mang moi


		cout<<"10. InMang SapXep-PrintSort\n";
		cout<<"Moi chon chuc nang (0-10)?";
		cin>>LuaChon;
		switch(LuaChon)
		{
			case 1://Insertion Sort
			{
				cout<<"\nSapXep Chen-Insertion Sort\n";
				InsertionSort(arr,3);
				break;
			}
			case 2://Selection Sort
			{
				cout<<"\nSapXep lua chon-Selection Sort\n";
				SelectionSort(arr,n);
				break;
			}
			case 3: // Bobble Sort
			{
				cout<<"\nSapXep Noi_Bot-BubbleSort\n";
				BubbleSort(arr,n);
				break;
			} 
			case 4: // merga Sort
			{
				mergeSort(arr,0,n-1);
				cout<<"Da sap xep\n";
				break;
			}	
			
			case 10: //  PrintSort
			{
				cout<<"\nInMang-PrintSort\n";
				InMang(arr,n);
				break;
			}
			case 0:
			{
				cout<<"\n\nTamBiet- Goodbye\n\n";
				break;
			}		
		}
	}while(LuaChon!=0);
}
int main()
{
	int arr[]={36,3,1,6,4,15,40,7};
	int n=8;
	Menu(arr,n);
	return 0;
}