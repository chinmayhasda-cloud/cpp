#include<iostream>
using namespace std;

class item {
       static int count ;
       int numbers;

       public :
       void getdata(int a){
        numbers=a;
        count++;
       }

       void getcount(void){
        cout<<"count";
        cout<<count<<endl;
       }
    };

    int item ::count;

    int main(){
        item a,b,c;
        a.getcount();
        b.getcount();
        c.getcount();

        a.getdata(100);
        b.getdata(200);
        c.getdata(300);

        cout<<"after the reading data "<<endl;


        
        a.getcount();
        b.getcount();
        c.getcount();


        return 0;
    }

