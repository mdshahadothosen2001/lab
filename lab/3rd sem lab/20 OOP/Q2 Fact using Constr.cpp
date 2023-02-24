#include <iostream>

using namespace std;

class FactorialCopy {
public:
  int fact, num, i;
  FactorialCopy(int n) {
    num = n;
    fact = 1;
  }

  void calculate() {
    for (int i = 1; i <= num; i++)
      fact = fact * i;
  }

  void display() { cout << "Factorial of " << num << " is " << fact << endl; }
};

int main() {
  int num;

  cout << "Enter the number to find factorial:\t";
  cin >> num;

  cout << endl;
  cout << "Printing from Constructor:" << endl;
  FactorialCopy fact(num);
  fact.calculate();
  fact.display();

  return 0;
}
