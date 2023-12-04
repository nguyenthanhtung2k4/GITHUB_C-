#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
     string ten,gt;
     fstream file("project.html",ios::out);
     
     cout<<"Nhap ho va ten cua ban: ";
     getline(cin,ten); 
     cout<<"Mo ta gioi thieu  va ban than cua ban: ";
     getline(cin,gt);
     file<<"<html>\n";
     file<<"<headl>\n";
     file<<"<headl>\n";
     file<<"<body>\n";
     file<<"    <center>"<<endl;
     file<<"        <h1>"<<ten<<"</h1>"<<endl;
     file<<"    </center>"<<endl;
     file<<"    <hr />"<<gt<<"<hr />"<<endl;
     file<<"</body>"<<endl;
     file<<"</html>"<<endl;
     file.close();
     return 0;
}

