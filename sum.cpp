#include<iostream>
using namespace std;


// program to find the sum of n natural number 
int main(){
  
    int n;
    int sum=0;
    cin>>n;

    for(int i=1;i<=n;i++)
{
    sum += i;
}
cout<<"tyhe sum of n natural number is "<<n<<endl;
return 0;
}