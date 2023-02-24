#include<iostream>
#include<string.h>

using namespace std;


class Point

{

private:


    char str[100];
    char str1[100];

public:

    Point(){}
    Point(char s[])
    {
        strcpy(this->str, s);
    }
    Point(char s1[], char s2[])
    {
        strcpy(this->str, s1);
        strcpy(this->str1, s2);
    }


    Point operator+(Point& S2)
    {

        Point S3;

        strcat(this->str, S2.str);


        strcpy(S3.str, this->str);

        return S3;
    }

    void operator+()
    {
        cout << "\nConcatenation: " << strcat(str, str1);
    }

    void display()
    {
        cout<<"\nConcatenation: "<<str<<endl;
    }
    void displayEual()
    {
        cout<<"String 1 value: "<<str<<endl;
        cout<<"String 2 value: "<<str1<<endl;
    }


};

int main()

{
    char s1[] = "Sweet";
    char s2[] = "Heart";

    Point p1(s1,s2);
    p1.displayEual();


    Point a2(s1);
    Point a3(s2);
    Point a4;

    a4 = a2 + a3;
    a4.display();


    Point p5=p1;
    p1.displayEual();
    p5.displayEual();

    return 0;

}
