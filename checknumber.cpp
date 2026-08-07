#include<iostream>
using namespace std;
// program to find a number is negative positive or zero 
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;

    if(n>0){
        cout<<"Positive";
    }
    else if(n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}