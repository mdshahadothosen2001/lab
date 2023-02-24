#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> vector1 = {1, 2, 3, 4, 5};
  cout << "vector1 = ";
  for (const int& i : vector1) {
    cout << i << "  ";
  }
  return 0;
}