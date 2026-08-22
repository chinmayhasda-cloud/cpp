#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int na[n];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
           na[count]=arr[i];
           count++;
        }
    }

    cout<<"negative element of array ";
for(int i=0;i<count;i++){
    cout<<"\n"<<na[i]<<"\t";
}
}