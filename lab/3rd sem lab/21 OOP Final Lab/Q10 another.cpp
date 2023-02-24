#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream first_file;
    fstream second_file;
    char read;

    first_file.open("data.txt",ios::in );
    second_file.open("new.txt",ios::out );
    if(!first_file)
        {
            cout<<" Error: File not found";
        }
    else
    {
        while(1)
        {
            first_file>>read;
            if(first_file.eof())
                break;
            second_file<<read;
        }
    }



    first_file.close();
    second_file.close();


    return 0;
}
