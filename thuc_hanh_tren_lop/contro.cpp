#include <iostream>
#include <limits>
using namespace std;
int tong(int a, int b){
     return a+b;
}
int hieu(int a,  int b){
     return  a/b;
}
int tich(int a,int b){
     return a*b;
}
int thuong(int a,int b ){
     return a-b;
}
void tat_ca(int& a,int& b,int(*tat_ca)(int,int)){
     cout<<"Cac phep tinh ben duoi:";
     cout<<"Ket qua: "<<tat_ca(a, b)<<endl;



}
int main(){
     int a,b;
     cout<<"a: ";cin>>a;
     cout<<"b: ";cin>>b;
     tat_ca(a,b,tong);
     tat_ca(a,b,hieu);
     tat_ca(a,b,tich);
     tat_ca(a,b,thuong);
     return 0;
     

}


// #include<iostream> 
// using namespace std;

// void swapNumber(int &a, int &b)
// {
// 	int temp = a;
// 	a = b;
// 	b = temp;
// }

// int main()
// {
// 	void(*ptrSwap) (int &, int &) = swapNumber;

// 	int a = 5, b = 10;
// 	cout << "Before: " << a << " " << b << endl;

// 	// gọi hàm tường minh
// 	(*ptrSwap)(a, b);
// 	cout << "After:  " << a << " " << b << endl;

// 	// hoặc gọi hàm ngầm định
// 	ptrSwap(a, b);
// 	cout << "After:  " << a << " " << b << endl;

// 	return 0;
// }
/*


#include<iostream> 
using namespace std;

// hoán đổi giá trị hai số
void swapNumber(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
// hàm sắp xếp tăng sử dụng thuật toán selection sort
void selectionSortAsc(int *arr, int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[min_idx] > arr[j])
			{
				min_idx = j;
			}
		}

		// Swap the found minimum element with the first element  
		swapNumber(arr[min_idx], arr[i]);
	}
}

// hàm sắp xếp giảm sử dụng thuật toán selection sort
void selectionSortDesc(int *arr, int n)
{
	int i, j, max_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the maximum element in unsorted array  
		max_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[max_idx] < arr[j])
			{
				max_idx = j;
			}
		}

		// Swap the found maximum element with the first element  
		swapNumber(arr[max_idx], arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(int);

	// Sắp xếp tăng
	selectionSortAsc(arr, n);

	cout << "Asc array: \n";
	printArray(arr, n);

	// Sắp xếp giảm
	selectionSortDesc(arr, n);

	cout << "Desc array: \n";
	printArray(arr, n);

	return 0;
}
*/

/*
#include<iostream> 
using namespace std;

void swapNumber(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

bool asc(int a, int b)
{
	return a > b;
}

bool desc(int a, int b)
{
	return a < b;
}

void selectionSort(int *arr, int n, bool(*comparisonFcn)(int, int))
{
	int i, j, find_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		find_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (comparisonFcn(arr[find_idx], arr[j]))
			{
				find_idx = j;
			}
		}

		// Swap the found minimum element with the first element  
		swapNumber(arr[find_idx], arr[i]);
	}
}


void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(int);

	// Sắp xếp tăng
	selectionSort(arr, n, asc);

	cout << "Asc array: \n";
	printArray(arr, n);

	// Sắp xếp giảm
	selectionSort(arr, n, desc);

	cout << "Desc array: \n";
	printArray(arr, n);

	system("pause");
	return 0;
}
*/