/*
game();
lam cac mang co dau'*' 
xoa dau * them cac buoc danh cua ng1 vs ng2 
check()
check khong duoc danh 2 buoc cung mot cho 
- khong duoc trung lap  cac buoc danh  
win();
win  doc ,ngang,cheo -chinh , phu
-win 1 
-win2
-hoa
main();
hoi  nguoi  dung cac buoc danh
Vong lap  9   lan   
- nguoi  1  
- nguoi  2
...........................................
sau 9 tran choi  thong bao nguoi  dung nao thang ng dung nao thua ,  hoa;


*/

#include <iostream>
using namespace std; 

/// tao ra bang game ;
void bang(char mang[3][3]){
     //in ra cac cau danh
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
               cout<<mang[i][j]<<' ';
          }cout<<endl;
     }
     // mang[hang][cot]=
}
/// check xem khong duoc dudng 2 lan cu phap  mot cho ;
bool  check_var(char mang_game[][3],int hang,int cot){
     if(mang_game[hang][cot]=='*'){
          return true;
     }else{
          cout<<"Cu phap  loi  thuc hien lai"<<endl;
          return false;
     }
}
// /// kiem tra  ng choi thang 
bool win(char mang_game[3][3],char play1, char play2){
     ///  kiem tra theo cot;
     for(int i=0;i<3;i++){ 
          if(mang_game[i][0]==play1&&mang_game[i][1]==play1&&mang_game[i][2]==play1){
               cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
               return true;
          }
          if(mang_game[i][0]==play2&&mang_game[i][1]==play2&&mang_game[i][2]==play2){
               cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
               return true;     
          }
     }
     ///kiem tra theo  dong; 
     for(int i=0;i<3;i++){ 
          if(mang_game[0][i]==play1&&mang_game[1][i]==play1&&mang_game[2][i]==play1){
               cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
               return true;
          }
          if(mang_game[0][i]==play2&&mang_game[1][i]==play2&&mang_game[2][i]==play2){
               cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
               return true;
          }
     }
     /// kiem tra duong cheo chinh
     if(mang_game[0][0]==play1&&mang_game[1][1]==play1&&mang_game[2][2]==play1){
          cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
          return true;
     }
     if(mang_game[0][0]==play2&&mang_game[1][1]==play2&&mang_game[2][2]==play2){
          cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
          return true;
     }
     /// kiem tra duong cheo chinh 2
     if(mang_game[2][2]==play1&&mang_game[1][1]==play1&&mang_game[0][0]==play1){
          cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
          return true;
     }
     if(mang_game[2][2]==play2&&mang_game[1][1]==play2&&mang_game[0][0]==play2){
          cout<<"Nguoi choi choi<X> \nChien thang"<<endl;
          return true;
     }
     return false;
}
bool hoa(char  mang_game[][3]){
     //// kiem tra ng choi hoa;
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
               if(mang_game[i][j]=='*'){
                    return false;
               }
          }
     }
     cout<<"Hoa nhau"<<endl;
     return true;     
}


int main(){
     char mang_game[3][3]={0};
     char play1='X',play2='O';
     int hang=0, cot=0;
     ////  tao ra cac * 
     for(int i  =0;i<3;i++){
          for(int j=0;j<3;j++){
               mang_game[i][j]='*';
          }
     }
     ////  so lan  danh  co 
     for(int i=1;i<=9;i++){     
          bang(mang_game);
          do{
               cout<<"Nguoi choi <X>"<<endl;
               cout<<"Hang: ";cin>>hang;
               cout<<"Cot: ";cin>>cot;
               ///nguoi dung nhap se + 1
               hang=hang-1,cot=cot-1;
          }while((hang>2||hang<0)||(cot>2||cot<0)||!check_var(mang_game,hang,cot));
          ///cap nhap bang choi  moi
          mang_game[hang][cot]=play1;
          cin.clear();
          /// hien thi  ra cac co moi 
          bang(mang_game);
          if(!win(mang_game,play1,play2)){
               if(hoa(mang_game)){
                    break;
               }
               do{
                    cout<<"Nguoi choi <O>"<<endl;
                    cout<<"Hang: ";cin>>hang;
                    cout<<"Cot: ";cin>>cot;
                    hang=hang-1,cot=cot-1;
               }while((hang>2||hang<0)||(cot>2||cot<0)||!check_var(mang_game,hang,cot));
               cin.clear();
               mang_game[hang][cot]=play2;
               if(!mang_game,play1,play2){
                    hoa(mang_game);
               }
          }else{
               break;
          }
     }
     return 0;
}