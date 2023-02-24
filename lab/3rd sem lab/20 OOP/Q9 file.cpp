#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ofstream MyFile("FileName.txt");



    string s;
    getline(cin, s, '$');
    cout << s << endl;

  MyFile << s;



  MyFile.close();
}
