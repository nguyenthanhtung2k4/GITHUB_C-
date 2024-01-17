#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    
    sort(arr, arr + n);
     cout<<3/2;
    int median;
    if (n % 2 == 0) {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2;
    } else {
        median = arr[n / 2];
    }

    cout << "So trung vi cua mang la: " << median << endl;

    return 0;
}
