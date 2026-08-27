#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int e[n];
    int o[n];
    int odd=0;
    int even=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e[even]=arr[i];
            even++;
        }
        else{
            o[odd]=arr[i];
            odd++;
        }
    }

    cout<<"even element array ";
    for(int i=0;i<even;i++){
        cout<<e[i]<<"\t";
    }

    cout<<"\n odd element array ";
    for(int i=0;i<odd;i++){
        cout<<o[i]<<"\t";
    }

    return 0;

}