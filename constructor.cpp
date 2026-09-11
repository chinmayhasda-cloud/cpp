#include<iostream>
using namespace std;

class intager{
    int m,n;
    public :
    intager(int,int );

    void display(){
        cout<<"m = "<<m<<endl;
        cout<<"n=  "<<n<<endl;

    }
};
intager::intager(int x,int y){
    m=x;
    n=y;
}


int main(){
  intager int1(0,100);
  intager int2=intager(25,50);

  cout<<"------ OBJECT 1 -------"<<endl;
  int1.display();
  cout<<"------- object 2--------"<<endl;
  int2.display();

  return 0;

}