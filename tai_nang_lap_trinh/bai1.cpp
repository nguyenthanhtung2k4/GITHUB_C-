// #include <iostream>
// using namespace std;

// int main() {
//     int mang[] = {2, 7, 11, 15};
//     int target = 9;
//     int size = sizeof(mang) / sizeof(mang[0]);
//     for (int i = 0; i < size; i++) {
//         int complement = target + mang[i];
//         for (int j = i + 1; j < size; j++) {
//             if (mang[j] == complement) {
//                cout << "chi so la: " << i << " và " << j << endl;

//             }
//         }
//     }
//     cout << "Không có giải pháp." << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int l1[] = {2, 4, 3};
//     int l2[] = {5, 6, 4};
//     int l3[4] = {}; // Initialize l3 to 0

//     int nho = 0;
//     // int a = 0;

//     for (int i = 2; i >= 0; i--) {
//         int tinh = l1[i] + l2[i] + nho;
//         l3[i + 1] = tinh % 10;
//         nho = tinh / 10;
//         // a++;
//     }

//     //l3[0] = nho;

//     for (int i = 0; i < 4;i++) {
//         cout << l3[i];
//     }

//     return 0;
// }

// #include <iostream> 
// using namespace std;
// int main(){
//      int a;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//      for(int j=1;j<=i;j++){
//           cout<<j<<" ";
//      }cout<<endl;
//     }
// }

// #include <iostream> 
// #include <cctype>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main(){
//      string name="thanhtung";
//      string name_new;

//      // cout<<name.length();
//      // cout<<tolower(name[2]);
//      for(int i =0;i<name.length();i++){
//           name[i]=toupper(name[i]);
//      }
//      cout<<name;
//      return 0;
// }

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

    return 0;
}
