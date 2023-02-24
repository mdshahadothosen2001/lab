#include<iostream>

using namespace std;

class student
{
string name;
int semester;
int roll_no;
string section;
int DSA;
int OOP;
int CA;
int ODE;
int FBS;
int marks;

public:
student(string Name,int sem,int roll,string sec,int sub1,int sub2,int sub3,int sub4,int sub5)
{
    name=Name;
    semester=sem;
    roll_no=roll;
    section=sec;
    DSA=sub1;
    OOP=sub2;
    CA=sub3;
    ODE=sub4;
    FBS=sub5;
    marks=DSA+OOP+CA+ODE+FBS;
}
 void display()
 {
     cout<<"\n\nStudent Information\n\n";
     cout<<"Name: "<<name<<endl;
     cout<<"Semester: "<<semester<<endl;
     cout<<"Roll no: "<<roll_no<<endl;
     cout<<"Section:  "<<section<<endl;
     cout<<"Marks: "<<marks<<endl;
 }

};

int main()
{
    student s1("sweet",3,20001,"A",70,80,78,79,70);
    student s2("sweet",3,20001,"A",80,75,70,80,70);
    s1.display();
    s2.display();

    return 0;
}
