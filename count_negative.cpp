#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;

    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            count++;
        }
    }
    cout<<"no of negative lement in array "<<count;



    return 0;
}