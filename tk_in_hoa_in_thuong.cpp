//  IN HOA IN THUONG BANG THU  VIEN #####################################
#include <iostream> 
#include <cctype>
#include <string>
using namespace std; 
int main(){
     string name="thanhtung";
     // dung length de dem  ki  tu 
     //  dung toupper() >> la in HOA
     //  dung tolower() >> la in THUONG
     for(int i=0; i<name.length();i++){
          name[i]=toupper(name[i]);
     }
     cout<<name;
     // ==> in thuong thi  dung tolower de in thuong
     return 0;
}
//  IN HOA IN THUONG KHONG DUNG THU  VIEN #####################################

#include <iostream>
using namespace std;

int main() {
    string str = "TUNG";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }

    cout << str << endl;  // Output: TUNG
     // ==> IN HOA THI  THAY DOI  CAC CHU  CAI BEN TRONG THNG FOR THAY NGUOC LAI  LA DUOC
    return 0;
}
