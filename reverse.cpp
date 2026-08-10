#include<iostream>
using namespace std;
int main(){
    int n;
    //int temp;
    int dig;
    int sum;
    sum = 0;

    cin>>n;
    //temp=n;

    while(n>0){
        dig = n%10 ;
        sum=sum*10+dig;
        n=n/10;

    }
    cout<<"reverse ="<<"  "<<sum;
    
}