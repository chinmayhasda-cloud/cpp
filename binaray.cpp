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
    int high=n-1;
   
   int target ;
   cout<<"enter target ";
   cin>>target;

 
    while(low <= high){
           mid=(low+high)/2;
           
           if(arr[mid]==target){
            cout<<"target found at" <<mid;
            
            
            return 0;
           }
           else if(arr[mid]<target){
            low=mid+1;
           }
           else{
            high=mid-1;
           }
    }
    cout<<"element not found ";
    return 0;

}
