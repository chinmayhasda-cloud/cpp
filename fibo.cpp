#include<iostream>
using namespace std;

int main(){
    int n;
    int first =0;
    int second=1;
    int next=0;

    cout<<"enter how many term want to print";
    cin>>n;
 
    int i=0;
    while(i<n){
       
        cout<<next<<"\t";
         next=first+second;
        first=second;
        second=next;
        i +=1;
    }
    return 0;
}