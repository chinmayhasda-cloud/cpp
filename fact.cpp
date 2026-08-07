#include<iostream>
using namespace std;
int main(){
    double n;
     double fact;
     int i;

     cout<<"enter a number ";
     cin>>n;

     fact=1;
     for(i=1;i<=n;i++){
        fact=fact*i;
     }
     cout<<" factorial of n = "<<fact;
     return 0;
}