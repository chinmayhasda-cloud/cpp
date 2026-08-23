#include<iostream>
using namespace std;


int main(){
    int n;
    int max;
    int min;

    cin>>n;
        int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }





    max=arr[0];
    min=arr[0];

    for(int i=1;i<n;i++){
        if(max < arr[i]){
            max=arr[i];
        }
        if(min > arr[i]){
            min=arr[i];
        }
    }
    cout<<"max in array "<<max<<"\n";
    cout<<"min in array "<<min<<"\n";

}