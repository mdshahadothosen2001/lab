#include <iostream>
using namespace std;


class area_cl
{
    public:
    double height;
    double width;
    void area(){cout<<"Base Class!\n";}
};

class rectangle:public area_cl
{
    public:
    rectangle(double h,double w)
    {
        height=h;
        width=w;
    }
    double area()
    {
        return height*width;
    }
};

class isosceles:public area_cl
{
    public:
    isosceles(double h,double w)
    {
        height=h;
        width=w;
    }
    double area()
    {
        return 0.5*height*width;
    }
};

int main()
{
    rectangle rc(3.2,6.4);
    isosceles is(3.3,6.4);

    cout<<rc.area()<<endl;
    cout<<is.area();

    return 0;
}
