#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==2){
        cout<<"28 or 29";
    }
    else if(n%2 != 0 || n==8){
         cout<<"31";
    }
    else{
        cout<<"30";
    }

    return 0;
}