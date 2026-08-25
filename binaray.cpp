#include<iostream>
using namespace std;

int main(){

    int n;

    cin>>n;
    int arr[n];
  cout<<" enter elements ";
    for( int i=0;i<n;i++){
         cin>>arr[i];
    }
    int low=0;
    int mid;
    int high=n;
   int t=0;
   int target ;
   cout<<"enter target ";
   cin>>target;

 t=0;
    while(t != 1 ){
           mid=(low+high)/2;
           
           if(arr[mid]==target){
            cout<<"target found at" <<mid;
            t++;
            break;
           }
           else if(arr[mid]<target){
            low=mid+1;
           }
           else{
            high=mid-1;
           }
    }
    return 0;

}