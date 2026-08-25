#include<iostream>
using namespace std;

class time{

    int hours;
    int minutes;
    public:
    void gettime(int h,int m){
       hours=h;minutes=m;
    }
    void putline(void){
        cout<<hours<<"hours and";
        cout<<minutes;
        cout<<"minutes";
    }
    void sum(time,time);
};
void time :: sum(time t1,time t2){
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;


}
int main(){
    time t1,t2,t3;
    t1.gettime(2,55);
    t2.gettime(3,35);
    t3.sum(t1,t2);
    t3.putline();



    return 0;

}