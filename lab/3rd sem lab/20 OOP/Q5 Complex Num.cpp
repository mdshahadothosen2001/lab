#include<iostream>


using namespace std;

class Complex
{

    float real=0,img=0;
public:
    Complex(){}
    Complex(float x)
    {
        real=x;
    }
    Complex(float x,float y)
    {
        real=x;
        img=y;

    }
    friend Complex sum(Complex,Complex);
    friend void Display(Complex);

};


int main()
{

    Complex A(4.5,6.8);
    Complex B(7.8);
    Complex C;
    C=sum(A,B);
    Display(C);
}
Complex sum(Complex t1,Complex t2)
{
    Complex temp;
    temp.real=t1.real+t2.real;
    temp.img=t1.img+t2.img;

    return temp;
}

void Display(Complex t3)
{
    cout<<t3.real<<" + j"<<t3.img<<endl;
}



