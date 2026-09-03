#include<iostream>
using namespace std;

int main(){
    int n;
    int total;
    int sum=0;
    

    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];

    }
    total=((n+1)*(n+2))/2;
    cout<<"missing element = "<<total-sum;

    return 0;

    
}
