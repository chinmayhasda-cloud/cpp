// program to merge two array 
#include<iostream>
using namespace std;

int main(){
    int n1;//number of element in 1 array 
    int n2;// number of element in 2 array 
    int n;

    cin>>n1;
    cin>>n2;
    n=n1+n2; // total number of element in final array 
   int a[n1];
   int b[n2];
   int c[n];



    cout<<"enter element of 1 array ";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }

    cout<<"enter element of 2 array ";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }

    
    for(int i=0;i<n;i++){
        if(i<n1){
            c[i]=a[i];
        }
        else{
            c[i]=b[i-n2];
        }
    }
    cout<<"array  after merge ";
    for(int i=0;i<n;i++){
        cout<<c[i]<<"\t";
    }

    return 0;

}