#include<iostream>
using namespace std;

int main(){
    int n;
    int target;
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]== target){
            cout<<"element found at index "<<i;
            break;
        }
    }
    return 0;

}