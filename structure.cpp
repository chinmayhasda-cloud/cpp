#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll_number;
    int marks;
};

int main(){
    student s1;
    student s2;
    s1.name="chinmay";
    s1.marks=99;
    s1.roll_number=1;
    s2.name="chinmay";
    s2.marks=99;
    s2.roll_number=1;

    cout<<"student 1 data "<<endl;
    cout<<"stdent name "<<s1.name<<endl;
    cout<<"stduent rollnumber "<<s1.roll_number<<endl;
    cout<<"student marks "<<s1.marks<<endl;


     cout<<"student 1 data "<<endl;
    cout<<"stdent name "<<s2.name<<endl;
    cout<<"stduent rollnumber "<<s2.roll_number<<endl;
    cout<<"student marks "<<s2.marks<<endl;
    
return  0;

}