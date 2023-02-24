
#include <iostream>
using namespace std;
class factorial
{
private:
int number;
int fact=1;
public:
factorial(int n)
  {
      number=n;
  }
  void factCalculate();
};
void factorial::factCalculate()
{
    int i;
    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}
int main()
{
    cout<<"Hello World"<<endl;
    factorial f1(3);
    f1.factCalculate();
    return 0;
}

