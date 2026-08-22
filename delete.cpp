#include<iostream>
using namespace std;

int main(){
   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];

    }
    int del;
    cout<<"enter bthe position of the element which you want to delete ";
    cin>>del;

    arr[del]=0;
  for(int i=del;i<n-1;i++){

    arr[i]=arr[i+1];
  }

  cout<<"array after deletion ";
  for(int i=0;i<n-1;i++){
    cout<<arr[i]<<"\t";
  }
    


return 0;

}