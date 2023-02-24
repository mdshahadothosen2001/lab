#include<iostream>

using namespace std;


class greatest1;
class greatest2;
class greatest
{
    int a;
public:
    void getData(int x)
    {
        a=x;
    }
    friend void findGreatest(greatest g,greatest1 g1,greatest2 g2);

};

class greatest1
{
    int a;
public:
    void getData(int x)
    {
        a=x;
    }
    friend void findGreatest(greatest g,greatest1 g1,greatest2 g2);

};

class greatest2
{
    int a;
public:
    void getData(int x)
    {
        a=x;
    }
    friend void findGreatest(greatest g,greatest1 g1,greatest2 g2);

};


void findGreatest(greatest g,greatest1 g1,greatest2 g2)
{

    int result;
    result=g.a;
    if(result<g1.a)
        result=g1.a;
    if(result<g2.a)
        result=g2.a;
    cout<<"Greatest Number is "<<result<<endl;

}

int main()
{
    greatest g;
    g.getData(20);
    greatest1 g1;
    g1.getData(30);
    greatest2 g2;
    g2.getData(90);

    findGreatest(g,g1,g2);


    return 0;
}


