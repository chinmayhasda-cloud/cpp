#include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"enter th anlgles of the triangle ";
    cin>>a>>b>>c;

    int sum=a+b+c;
    if(sum == 180 ){
        cout<<"the triangle is vaild ";
    }
    else{
        cout<<"the triangle is invaild ";
    }
    return 0;
}