#include <iostream>
using namespace std;
class Shape {
    public:
    double heigth;
    double wdth;
    virtual void area(){cout<<"Base Class\n";}
    virtual void  volume(){cout<<"Base Class\n";}
    virtual void print()=0;

};
class Rectangle: public Shape
{
 public:
    double result;
    virtual void area()
    {
        cout<<"Enter Heigth and Width for Rectangle Area\n";
        cin>>heigth>>wdth;
        result=heigth*wdth;
    }
    virtual void print()
    {
        cout<<"Area of Rectangle is "<<result<<endl;
    }
};
class Cube: public Rectangle

{
   public:
    double result;
    virtual void volume()
    {
        cout<<"Enter Heigth for Cube Volume\n";
        cin>>heigth;
        result=heigth*heigth*heigth;
    }
    virtual void print()
    {
        cout<<"Volume of cube is "<<result<<endl;
    }
};
int main(void) {
    Shape *s;
    Rectangle rec;
    Cube cb;
   s=&rec;
   s->area();
   s->print();

   s=&cb;
   s->volume();
   s->print();

}
