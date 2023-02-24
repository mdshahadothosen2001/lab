#include<iostream>
using namespace std;

void area(double a,int b,int h);
void area(double pi, double r);
void area(int a, int b);


int main()
{
    int N;
        cout<<"\n\tPress 1 for triangle, 2 for circle, 3 for rectangle otherwise any key for Exit \n";
        cin>>N;
       if(N==1)
       {
           int a,b;
           cout<<"Input Two Values for Length and Weight: \n";
           cin>>a>>b;
           area(0.5,a,b);



       }
       else if(N==2)
       {
           double r;
           cout<<"Input Value of Radius : \n";
           cin>>r;
           area(3.1415,r);
       }
       else if(N==3)
       {
           int a,b;
           cout<<"Input Two Value for rectangle : \n";
           cin>>a>>b;
           area(a,b);
       }


    return 0;
}

void area(double a,int b,int h)
{

    int ar;
    ar=a*b*h;

    cout<<"Area of a triangle is : "<<ar<<endl;
}

void area(double pi, double r)
{

    double circle;
    circle=pi*r*r;

    cout<<"Area of a Circle is : "<<circle<<endl;
}


void area(int a, int b)
{
    int rectangle;
    rectangle=a*b;
    cout<<"Area of a Rectangle is : "<<rectangle<<endl;
}




