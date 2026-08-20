#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    int d;
    int r1,r2;
    int t;

    cin>>a>>b>>c;
    t=2*a;
    d=b*b-4*a*c;
    r1=(-b+sqrt(d))/t;
    r2=(-b-sqrt(d))/t;

    cout<<"roots of the equation \n"<<r1<<endl;
    cout<<r2<<endl;

    return 0;

}