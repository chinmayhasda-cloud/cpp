#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string n;
    string p;

    cin>>n;
    p=n;

    reverse(n.begin(),n.end());

    if(p==n){
      cout<<"string is palindrome ";
    }
    else{
        cout<<"string is not palindrome ";
    }
    
}