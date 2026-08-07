#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2,n3;
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1 > n3){
        cout<<" greatest no = "<<n1;
    }
    else if(n2>n3){
        cout<<"greatest = "<<n2;
    }
    else{
        cout<<"greatest = "<<n3;
    }
 return 0;
}