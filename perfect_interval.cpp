// program to print all perfect number in given range 
#include<iostream>
using namespace std;

void perfect(int a,int b){
  int max;
  int min;
  int sum;
  if( a < b){
    max=b;
    min=a;
  }
  else{
    max=a;
    min=b;
  }
  cout<<"the perfect number between "<<min<<"  and "<<max <<" are \n";

  for(int i=min;i<max;i++){
    sum=0;
    for( int j=1;j<=i/2;j++){
        if(i%j==0){
            sum+=j;
        }
    }
    if(sum==i){
        cout<<i<<" ";
    }
  }

}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    perfect(n1,n2);
    return 0;

}