#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int pos;
   int value;

   int arr[n];
   for( int i=0;i<n;i++){
      cin>>arr[i];
   }

   cout<<"in which position want to insert (indexing wise)";
   cin>>pos;
   cout<<"enter the new value ";
   cin>>value;
   arr[pos]=value;

   cout<<"array after insertion \n ";
   for (int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }

   return 0;

}