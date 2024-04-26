#include<iostream>
using namespace std;

typedef int Item;
struct Node
{
     Item data;
     Node *next;
};

void Int(Node *&L){
     L = NULL;
}

bool isEmpty(Node *L){ 
     return (L == NULL);
}

int Len(Node *L){
     int length=0;
     while (L!=NULL)
     {
          length++;
          L=L->next;
     }
     return length; // Return the length of the list
}

int main(){
     Node *L;
     Int(L);
     cout << isEmpty(L) << endl;
     cout << Len(L) << endl;
     return 0;
}
