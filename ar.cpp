#include<iostream>
using namespace std;

// program to find the area & circumference of circle

int main(){
    float pi= 3.14;
    float radius ;
    float area,circum;
    
    cout<<"enter radius";
    cin>>radius;
    
    area=pi*radius*radius;
    circum=2*pi*radius;

    cout<<"area of circle is =  "<<area<<endl;
    cout<<"circumference of circle = "<<circum<<endl;


    return 0;

}