#include<iostream>
#include<string>
using namespace std;
int main(){
   string s1;
   string s2,s3;

   cout<<"enter first bstring ";
   getline(cin,s1);
   cout<<"enter second string ";
   getline(cin,s2);

   if(s1 == s2){
     cout<<" both string is same ";
   }
   else{
    cout<<"both string is diffrent ";
   }

   
   s3=s1+s2;

   cout<<" \n string after oncatenate   "<<s3;


   return 0;


}