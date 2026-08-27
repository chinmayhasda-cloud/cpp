#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    bool visited[n]={false};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(visited[i])
            continue;
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=true;
            }
            
        }
        
    
        cout<<"frequency of element "<<arr[i]<<" = ";
        cout<<count<<"\n";
        
    }

    return 0;
}