#include<iostream>
using namespace std;

int main(){

    int row1;
    int col1;
    int element1;
    cout<<"enter row ";
    cin>>row1;
    cout<<"enter coloum ";
    cin>>col1;

    element1=row1*col1;
    int arr1[element1];

    cout<<"enter "<<element1 <<"   element ";
    for( int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i,j];
            
        }

    }


    int row2;
    int col2;
    int element2;
    cout<<"enter row ";
    cin>>row2;
    cout<<"enter coloum ";
    cin>>col2;

    element2=row2*col2;
    int arr2[element2];

    cout<<"enter "<<element2 <<"   element ";
    for( int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i,j];
            
        }

    }
    int sub[element1];

    if(row1 != row2 || col1 != col2){
        cout<<"matrix addition not possiable ";
    }
    else{
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                sub[i,j]=arr1[i,j]-arr2[i,j];
            }
        }
    }

    
cout<<"subtraction of matrix 1 and 2 \n";
for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cout<<sub[i,j]<<"\t";
    }
    cout<<"\n";
}

return 0;
}