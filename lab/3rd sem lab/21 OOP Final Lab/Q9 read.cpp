#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
ifstream first_file;
ifstream second_file;
first_file.open("data.txt",ios::in);
second_file.open("new.txt",ios::out);
string myline;

    if(!first_file)
        {
            cout<<" Error: File not found";
        }
    else
    {
       while(first_file.eof()!=true)
        {
            getline (first_file, myline);
            cout << myline << '\n';
            second_file>>myline;
        }
    }
return 0;
}
