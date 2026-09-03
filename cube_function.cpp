// find the cube of any num,ber using function 
#include<iostream>
using namespace std;

int cube(int n){
    return n*n*n;
}
int main(){
    int num;
    cin>>num;
    cout<<"thew cube of "<<num<<" is = "<<cube(num);
    return 0;
}