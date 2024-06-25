// Cài đặt thuat toan sap  xep
#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
     int i, key, j; // i la chi  so arr ; key  la tim ohan tu; j la vi tri can chen;
     for (i = 1; i < n; i++)
     {
          key = arr[i];
          j = i - 1;
          while (j >= 0 && arr[j] > key)
          {
               arr[j + 1] = arr[j];
               j--;
          }
          arr[j + 1] = key;
     }
}
// doi cho 2 phan tu(Swap)
void Swap(int &x, int &y)
{
     int temp;
     temp = x;
     x = y;
     y = temp;
}
// SelectionSort
void SelectionSort(int arr[], int n)
{
     int i, j, min;
     for (i = 0; i < n - 1; i++)
     {
          min = i; //  gia su phan tu nho nhat la i;
          //  tim vitri nho nhat trong khoang [i+1,n];
          for (j = i + 1; j < n; j++)
          {
               if (arr[j] < arr[min])
               {
                    min = j;
               }
          }
          //  doi  cho  vitri min
          Swap(arr[min], arr[i]);
     }
}
//  noi bot BubbleSort
void BubbleSort(int arr[], int n)
{
     int i, j;
     bool resul = false;
     for (i = 0; i < n - 1; i++)
     {
          bool resul = false;
          for (j = 0; j < n - i - 1; j++)
          {
               swap(arr[j], arr[j + 1]);
               resul = true;
          }
          if (resul == false)
          {
               break;
          }
     }
}
// in mang arr
void InMang(int arr[], int n)
{
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << "\t";
     }
     cout << endl;
}
// Menu
void Menu(int arr[], int n)
{
     int LuaChon;

     do
     {
          cout << "\nCAC CHUC NANG\n";
          cout << "0. Thoat khoi chuong trinh\n";
          cout << "1. SapXep chen-Insertion Sort\n";
          cout << "2. SapXep lua chon-Selection Sort\n";
          cout << "3. SapXep Bot -Bubble Sort\n";

          cout << "10. InMang SapXep-PrintSort\n";
          cout << "Moi chon chuc nang (0-10)?";
          cin >> LuaChon;
          switch (LuaChon)
          {
          case 1: // Insertion Sort
          {
               cout << "\nSapXep Chen-Insertion Sort\n";
               InsertionSort(arr, n);
               break;
          }
          case 2: // Selection Sort
          {
               cout << "\nSapXep lua chon-Selection Sort\n";
               SelectionSort(arr, n);
               break;
          }

          case 10: //  PrintSort
          {
               cout << "\nInMang-PrintSort\n";
               InMang(arr, n);
               break;
          }
          case 0:
          {
               cout << "\n\nTamBiet- Goodbye\n\n";
               break;
          }
          }
     } while (LuaChon != 0);
}
int main()
{
     int arr[] = {7, 3, 6, 4, 15, 40};
     int n = 6;
     Menu(arr, n);
     return 0;
}