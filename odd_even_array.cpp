#include<iostream>
using namespace std;

int main(){
    int n;
    int even=0;
    int odd=0;

    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }

    }
    cout<<"number of even element in arrray : "<<even<<"\n";
    cout<<"number of odd element in arrray : "<<odd<<"\n";


    return 0;
}