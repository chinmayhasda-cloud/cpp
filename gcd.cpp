#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int i;
    int gcd=0;

    cout<<"enter the value of the n1 and n2  ";
    cin>>n1>>n2;

    for(i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
         gcd=i;
         
        }
    }
    cout<<"gcd= "<<gcd;
    return 0;;
}