#include<iostream>
using namespace std;

int main(){
    int sellingprice;
    int costprice;
    
    cin>>costprice;
    cin>>sellingprice;

    if(costprice > sellingprice){
        cout<<"loss ="<<costprice-sellingprice;

    }
    else if(sellingprice > costprice){
        cout<<"proffit = "<<sellingprice-costprice;
    }
    else{
        cout<<" proffit = 0 \n loss=0\n";
    }


}