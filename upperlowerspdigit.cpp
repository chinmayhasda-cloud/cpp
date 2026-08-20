#include<iostream>
using namespace std;

int main(){
    
    char ch;
    cin>>ch;

    if( ch >= 'A' && ch <= 'z'){
        cout<<" the charcter is uppercase";
    }
    else if( ch >= 'a' && ch <= 'b'){
        cout<<"the charcter is lowercase";
    }
    else if(ch >='1' && ch <='9'){
        cout<<"the entered charcter is digit ";
    }
    else{
        cout<<"the charcter is special charcter ";
    }


    return 0;

}