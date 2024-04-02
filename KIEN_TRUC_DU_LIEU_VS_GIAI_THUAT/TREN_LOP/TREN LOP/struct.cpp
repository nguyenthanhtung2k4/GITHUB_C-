#include<iostream>
using namespace std;

struct Product
{
    string description; 
    int partNum; 
    double cost; 
};
void khoitao(Product products[]){
     for (int i = 0; i < 100; i++)
    {
        products[i].description = "";
        products[i].partNum = 0;
        products[i].cost = 0.0;
    }   
}
void dien(Product products[]){
    products[0].description = "Claw hammer";
    products[0].partNum = 547;
    products[0].cost = 8.29;
}
void xuat(Product products[]){
    for (int i = 0; i < 100; i++)
    {
          cout<<products[i].description << "\t";
          cout<<products[i].partNum << "\t";
          cout<<products[i].cost << endl;
    }
}
int main()
{
    Product products[100];
    khoitao(products); 
    dien(products);
    cout<<"Products\tNumber\tCost"<<endl<<endl;
    xuat(products);
    return 0;
}