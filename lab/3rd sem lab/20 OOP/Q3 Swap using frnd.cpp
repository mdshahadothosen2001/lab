#include<iostream>

using namespace std;

class swap2;

class swap1{
    int a;
    public:
    void getData(int a)
    {
        this->a=a;

    }

    friend void swaps(swap1 t1,swap2 t2);


};


class swap2{
    int b;
    public:
    void getData(int b)
    {
        this->b=b;
    }
    friend void swaps(swap1 t1,swap2 t2);

};

void swaps(swap1 t1,swap2 t2)
{
    int temp;
    cout<<"Before Swap Number "<<endl;
    cout<<"a= "<<t1.a<<" and b= "<<t2.b<<endl;

    temp=t1.a;
    t1.a=t2.b;
    t2.b=temp;
    cout<<"After swap Number "<<endl;
    cout<<"a= "<<t1.a<<" and b= "<<t2.b<<endl;
}

int main()
{
    swap1 s1;
    swap2 s2;
    s1.getData(20);
    s2.getData(30);
    swaps(s1,s2);



    return 0;
}
