#include<iostream>

using namespace std;

class TIME
{
    int hours,minutes,seconds;
public:
    void getData(int h,int m,int s)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }
    friend TIME Add(TIME,TIME);
    friend void Display(TIME);

};

int main()
{
    int h,m,s;
    TIME t1,t2,t3;

    cout<<"Enter Hours,Minutes,Seconds "<<endl;
    cin>>h>>m>>s;
    t1.getData(h,m,s);

    cout<<"Enter Hours,Minutes,Seconds "<<endl;
    cin>>h>>m>>s;
    t2.getData(h,m,s);

    t3=Add(t1,t2);
    Display(t3);


    return 0;
}

TIME Add(TIME t1,TIME t2)
{
    TIME temp;
    temp.hours=t1.hours+t2.hours;
    temp.minutes=t1.minutes+t2.minutes;
    temp.seconds=t1.seconds+t2.seconds;

    if(temp.seconds>=60)
    {

        temp.seconds=temp.seconds-60;
        temp.minutes=temp.minutes+1;
    }

    if(temp.minutes>=60)
    {

        temp.minutes=temp.minutes-60;
        temp.hours=temp.hours+1;
    }

    return temp;
}


void Display(TIME t3)
{
    cout<<"Hours: "<<t3.hours<<endl;
    cout<<"Minutes: "<<t3.minutes<<endl;
    cout<<"Seconds: "<<t3.seconds<<endl;

}





