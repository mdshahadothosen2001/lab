#include <iostream>
using namespace std;
class number
{
    int num;
public:
    void setData(int n)
    {
        num=n;
    }
    int getData()
    {
        return num;
    }
};

class number1:public number
{
public:
    void display()
    {
        int result;
        result=getData();
        result=result*result;
        cout<<"Square of Number is "<<result<<endl;
        result=result*result;
        cout<<"Cube of Number is "<< result<<endl;
    }

};

int main()
{
int num;
cin>>num;
number1 obj1;
obj1.setData(num);
obj1.display();

    return 0;
}
