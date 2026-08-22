#include<iostream>
using namespace std;

inline float mul(float x,float y){

    return(x*y);
}

inline double div(double p,double q){
    return (p/q);
}
inline int sum( int a,int b){
    return(a+b);
}
inline int sub(int a,int b){
    return(a-b);
}
int main(){
    float a=12.345;
    float b=9.82;


    cout<< sum(a,b)<<endl;
    cout<< sub(a,b)<<endl;
    cout<< mul(a,b)<<endl;
    cout<< div(a,b)<<endl;


    return 0;
}