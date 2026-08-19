#include<iostream>
using namespace std;

int main(){
    int n;
    int temp;
    int dig;
    int sum=0;

    cin>>n;
    temp=n;

    while(n>0){
        dig=n%10;
        sum=sum*10+dig;
        n=n/10;
    }
    if(sum==temp){
        cout<<"the given number is palindrome";
    }
    else{
        cout<<"the given number is not a palindrome number";
    }
    return 0;
}