// program to check a number is perfect or jnot using function 
#include<iostream>
using namespace std;

void perfect(int n){
    int sum=0;
    for( int i=1;i<=n/2;i++){
       if(n%i==0){
        sum += i;

       }
     
    }
    if(sum==n){
        cout<<"the given number is perfect ";
    }
    else{
        cout<<"the given number is not perfect";
    }
}
int main(){
    int n;
    cin>>n;
    perfect(n);
}