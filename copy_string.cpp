#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main(){
    string s;
    string c;

    getline(cin,s);
    c=s;
    cout<<"copied string = "<<c<<"\n";
    
    transform(s.begin(),s.end(),s.begin(),:: toupper);
    cout<<"string in uppercase "<<s<<"\n";
   transform(s.begin(),s.end(),s.begin(),:: tolower); 
   cout<<"string in lowercase "<<s;

   return 0;

}