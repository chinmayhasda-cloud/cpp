#include<iostream>
using namespace std;

int main(){
   int row;
   int col;
   int element;
   int sum=0;


   cout<<"enter number of row ";
   cin>>row;

   cout<<"enter number of coloum";
   cin>>col;

   element=row*col;
   int arr[row][col];

   cout<<"enter "<<element<<"elements";
   for( int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
   }

   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i==j){
            sum=sum+arr[i][j];
        }
    }
   }


   cout<<"sum of digonl "<<sum;

   return 0;
}