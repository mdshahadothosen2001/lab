#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main() {
   fstream f;
   ifstream fin;
      fin.open("data.txt");
      ofstream fout;
      fout.open("new.txt", ios::app);
   if (!fin.is_open()) {
      cout << " ";
   } else {
      fout << fin.rdbuf();
   }
   string word;
   f.open("new.txt");
   while (f >> word) {
      cout << word << " ";
   }
   return 0;
}
